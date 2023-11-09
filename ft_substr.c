/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:09 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/08 13:26:57 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
substr - extrae una substr de una str
substr guarda memoria para una nueva cadena a partir de la cadena s. 
Esta nueva cadena comienza en 'start' y tiene un tamano maximo de 'len'
*/
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *str;

	i = 0;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (0);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	while (len > i)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(){
	char const *s = "holabuenas";
	unsigned int start = 0;
	size_t len = 4;
	char *mi_resultado;
	mi_resultado = ft_substr(s, start, len);
	printf("Mi resultado: %s", mi_resultado);
	return (0);
}
*/
