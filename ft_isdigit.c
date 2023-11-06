/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:19:52 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 12:57:58 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
isdigit - comprueba que el valor de c en ASCII es un digito decimal
isdigit comprueba que le valor de c este entre '0' y '9' en la tabla ASCII
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
