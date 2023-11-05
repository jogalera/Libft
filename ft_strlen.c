/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:05:06 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 11:01:31 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strlen - calcula la longitud de una string
strlen cuenta cuantos caracteres hay antes del terminating NULL
*/
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}
