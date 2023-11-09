/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:31:23 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:29:27 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strchr - encuentra un caracter en un string
strchr localiza la primera aparicion de c en la string
*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	cast_c;

	i = 0;
	cast_c = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == cast_c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == cast_c)
	{
		return ((char *)&str[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	const char *str = "Hola buenas";
	int	c = 'a';
	char *resultado;
	char *mi_resultado;
	resultado = strchr(str, c);
	mi_resultado = ft_strchr(str, c);
	printf("Resultado original: %s\n", resultado);
	printf("Mi resultado: %s", mi_resultado);
	return (0);
}
*/
