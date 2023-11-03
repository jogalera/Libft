/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:36:33 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/03 10:46:02 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;

	while (s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char *s1 = "hola santi";
	char *s2 = "hola sonti";
	size_t n = 8;

	int resultado = strncmp(s1, s2, n);
	int mi_resultado = ft_strncmp(s1, s2, n);

	printf("Funcion normal: %i\n", resultado);
	printf("Mi funcion: %i", mi_resultado);
	return (0);
}
*/
