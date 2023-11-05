/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:08:50 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/03 13:16:01 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		signo;
	int		resultado;

	i = 0;
	resultado = 0;
	signo = 1;
	while (str[i] && (str[i] == 9 || str[i] == 10 || str[i] == 11 || 
				str[i] == 12 || str[i] == 13 || str[i] == 32))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
	{
		i++;
	}
	if (str[i] == '-')
	{
		signo = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado *= 10;
		resultado += str[i] - '0';
		i++;
	}
	resultado *= signo;
	return (resultado);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void){
	const char	*str = "      -1";
	int	resultado;
	int	mi_resultado;
	resultado = atoi(str);
	mi_resultado = ft_atoi(str);
	printf("Resultado: %d\n", resultado);
	printf("Mi resultado: %d", mi_resultado);
	return (0);
}
*/
