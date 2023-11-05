/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:19:52 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/31 10:43:42 by jogalera         ###   ########.fr       */
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
		return (c);
	else
		return (0);
}
