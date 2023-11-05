/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:37:19 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/02 13:11:51 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			lenz;
	unsigned char	letra;

	letra = (unsigned char)c;
	while (str[lenz] != '\0')
	{
		lenz++;
	}
	while (lenz > 0)
	{
		if (str[lenz] == letra)
		{
			return ((char *)&str[lenz]);
		}
		lenz--;
	}
	if (str[lenz] == letra)
	{
		return ((char *)&str[lenz]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	const char	str[] = "Hola buenas!";
	int letra = 'o';
	char *resultado = strrchr(str, letra);
	char *mi_resultado = ft_strrchr(str, letra);
	printf("Mi funcion: %s", mi_resultado);
	printf("Funcion original: %s", resultado);
	return (0);
}
*/
