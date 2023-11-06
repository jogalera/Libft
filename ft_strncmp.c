/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:36:33 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:34:12 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strncmp - compara dos strings
strncmp compara los primeros n caracteres de dos strings
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	const char *s1 = "hola buenaz";
	const char *s2 = "hola buenas";
	size_t n = 12;

	int resultado = strncmp(s1, s2, n);
	int mi_resultado = ft_strncmp(s1, s2, n);

	printf("Funcion normal: %d\n", resultado);
	printf("Mi funcion: %d", mi_resultado);
	return (0);
}
*/
