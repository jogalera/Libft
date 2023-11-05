/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:21:38 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 10:48:32 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int len;

	len = 0;

	while (src[len] && --dstsize)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';

	while (src[len])
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
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
