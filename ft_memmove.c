/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:32:37 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/09 13:29:52 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
memmove - copia una zona de la memoria a otra zona
memmove copia n bytes del area de memoria src al area de memoria dst de forma
segura
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp_dst;
	char	*tmp_src;

	i = 0;
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (!tmp_dst && !tmp_src)
		return (NULL);
	if (tmp_dst > tmp_src)
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	else
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}			 	
	}
	return (tmp_dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char *src = "holabuenas";
	char *dst = src + 9;
	void *resultado;
	void *mi_resultado;
	mi_resultado = ft_memmove(dst, src, 5);
	resultado = memmove(dst, src, 5);
	printf("Resultado: %s\n", (char *)resultado);
	printf("Mi resultado: %s", (char *)mi_resultado);
	return (0);
}
*/
