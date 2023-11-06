/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:58:38 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:24:33 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
tolower - convierte un caracter de mayuscula a minuscula
tolower convierte cualquier caracter que este entre la 'A' mayuscula y la 'Z'
mayuscula a minuscula, sumandole 32 en ASCII
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
