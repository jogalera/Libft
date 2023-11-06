/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:52:56 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:24:09 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
toupper - convierte un caracter de minuscula a mayuscula
toupper convierte cualquier caracter que este entre la 'a' minuscula y la 'z'
minuscula a mayuscula, restando 32 en ASCII
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
