/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:38:28 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 12:58:26 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
isascii - comprueba que el valor de c esta en la tabla ASCII no extendida
isascii comprueba que le valor de c este entre 'NULL' y 'DEL' en la tabla ASCII
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
