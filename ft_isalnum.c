/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:21:38 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 10:48:32 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
isalnum - comprueba que el valor de c en ASCII es un alfanumerico
isalnum comprueba que le valor de c este entre '0' y '9' o la 'a' 
minuscula y la 'z' minuscula o entre 'A' mayuscula y 'Z' mayusculaen
en la tabla ASCII
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (c);
	else
		return (0);
}
