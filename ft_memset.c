/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:32:18 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 11:16:56 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)b;

	while (len > 0)
	{
		tmp[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
