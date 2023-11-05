/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:14:46 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 11:34:10 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
bzero - escribe ceros en una cadena de bytes
bzero escribe n bytes a cero en la cadena str
*/
#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (n > 0)
	{
		tmp[i] = 0;
		i++;
		n--;
	}
}
