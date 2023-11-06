/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:02:59 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:49:44 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strdup - guardar una copia de un string

La función strdup asigna memoria suficiente para una copia de la cadena s1,
hace la copia y devuelve un puntero de la copia.
Si no hay memoria suficiente, se devuelve NULL.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	s2 = ft_calloc((ft_strlen(s1)+1), sizeof(char));
	if (!s2)
		return (0);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s1 = "Hola buenas";
	char		*mi_resultado;

	mi_resultado = ft_strdup(s1);
	printf("Mi resultado: %s", mi_resultado);
	return (0);
}
*/
