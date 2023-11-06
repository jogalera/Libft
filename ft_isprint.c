/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:55:55 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 12:58:36 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
isprint - comprueba que el valor de c en ASCII es imprimible
isprint comprueba que le valor de c este entre 'ESPACIO' y '~' en la tabla ASCII
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
