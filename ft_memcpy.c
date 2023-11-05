/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:38 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/02 10:45:44 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
memcpy - copia una zona de la memoria a otra zona
memcpy copia n bytes del area de memoria src al area de memoria dst
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!tmp_dst && !tmp_src)
		return (NULL);
	while (n > 0)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
		n--;
	}
	return (tmp_dst);
}
