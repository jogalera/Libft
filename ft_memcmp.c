/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:00:10 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/03 11:17:45 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*char_s1;
	unsigned char	*char_s2;

	i = 0;
	char_s1 = (unsigned char *)s1;
	char_s2 = (unsigned char *)s2;
	if (!char_s1 && !char_s2)
	{
		return (0);
	}
	while (char_s1[i] && char_s2[i] && n > 0)
	{
		if (char_s1[i] != char_s2[i])
		{
			return (char_s1[i] - char_s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	const void	*s1 = "Hola buenas";
	const void	*s2 = "Hola buenos";
	size_t	n = 11;
	int	resultado;
	int	mi_resultado;

	resultado = memcmp(s1, s2, n);
	mi_resultado = ft_memcmp(s1, s2, n);
	printf("Funcion original: %d\n", resultado);
	printf("Mi funcion: %d", mi_resultado);
}
*/
