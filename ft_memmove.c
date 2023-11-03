/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:32:37 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 12:49:34 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	{
		len = len - 1;
		while (len > 0)
		{
			tmp_dst[len] = tmp_src[len];
			len--;
		}
	}

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
