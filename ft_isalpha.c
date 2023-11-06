/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:16:35 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:01:14 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
isalpha - comprueba que el valor de c en ASCII es alfabetico

isalpha comprueba cualquier caracter que este entre la 'a' minuscula y la 'z' 
minuscula o entre 'A' mayuscula y 'Z' mayuscula de la tabla ASCII
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
