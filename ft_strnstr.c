/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:57:11 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/06 13:44:16 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strnstr - busca una substring en una string
strnstr busca una subcadena en una cadena principal pero con un limite 
especificado por 'len'
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle)
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && len > i)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *)haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*haystack;
	const char	*needle;
	size_t		len;
	char		*resultado;
	char		*mi_resultado;

	haystack = "holabuenas";
	needle = "ab";
	len = 5;
	resultado = strnstr(haystack, needle, len);
	mi_resultado = ft_strnstr(haystack, needle, len);
	printf("Funcion original: %s\n", resultado);
	printf("Mi funcion: %s", mi_resultado);
	return (0);
}
*/
