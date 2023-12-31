/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:32:18 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 12:59:00 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
memset - rellena una cadena de bytes con un valor de bytes
memset - escribe len bytes del valor c (convertido a un unsigned char) 
en la cadena b.
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)b;
	while (len > 0)
	{
		tmp[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (tmp);
}
