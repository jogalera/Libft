/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:36:31 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:17:43 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strlcat - concatena dos strings
strlcat concatena la cadena origen 'src' a la cadena destino 'dst' con un
limite de tamano especifico 'dstsize'
*/
#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
