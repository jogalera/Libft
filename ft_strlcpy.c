/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:21:38 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/09 12:50:40 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strlcpy - copia una string con un limite de tamano
strlcpy copiar una cadena desde src a dst, con un limite de tamano especificado
por dstsize.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && dstsize > i + 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > i)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char dst[20];
	const char *src = "Hola chicos";
	size_t dstsize = 4;

	size_t mi_resultado;

	mi_resultado = ft_strlcpy(dst, src, dstsize);
	printf("dst: %s\n", dst);
	printf("Mi resultado: %ld\n", mi_resultado);
	return (0);
}
*/
