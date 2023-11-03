/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:31:23 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/02 12:42:00 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	unsigned char	cast_c;

	i = 0;
	cast_c = (unsigned char)c;

	while (*str)
	{
		if (*str == cast_c)
			return ((char *)str);
		str++;
	}
	if (*str == cast_c)
		return ((char *)str);
	return (0);
}
