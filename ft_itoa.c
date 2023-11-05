/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:33:10 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/23 12:33:33 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	rec_size(int number, int *x)
{
	int	counter;

	counter = 0;
	if (number < 0)
	{
		if (number == -2147483648)
		{
			*x = 3;
			number /= 10;
			counter++;
		}
		else
			*x = 1;
		number *= -1;
		counter++;
	}
	if (number >= 10)
		counter += rec_size(number / 10, x);
	return (counter + 1);
}

static void	number_div(int *c)
{
	if (*c >= 10)
		*c /= 10;
	else
		*c %= 10;
}

static void	str_assign(char *a, int cs, int n, int size)
{
	if (cs > 0)
	{
		if (cs == 3)
		{
			a[size--] = '8';
			n /= 10;
		}
		n *= -1;
		a[0] = '-';
		while (size >= 1)
		{
			a[size--] = (n % 10) + 48;
			number_div(&n);
		}
	}
	else
	{
		while (size >= 0)
		{
			a[size--] = (n % 10) + 48;
			number_div(&n);
		}
	}
}

char	*ft_itoa(int n)
{
	int		str_size;
	int		i;
	int		x;
	char	*aux;

	i = 0;
	x = 0;
	str_size = rec_size(n, &x);
	aux = (char *)malloc(str_size + 1 * sizeof(char));
	if (!aux)
		return (NULL);
	ft_bzero(aux, str_size + 1);
	str_assign(aux, x, n, --str_size);
	return (aux);
}
