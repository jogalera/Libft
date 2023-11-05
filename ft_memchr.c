/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:40:22 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/03 10:58:25 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*char_s;

	i = 0;
	char_s = (char *)s;
	while (char_s[i] != '\0' && n > 0)
	{
		if (char_s[i] == (char)c)
		{
			return ((void *)&char_s[i]);
		}
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	const void	*s = "Hola buenas";
	int	c = 'a';
	size_t	n = 6;
	void	*resultado;
	void	*mi_resultado;

	resultado = memchr(s, c, n);
	mi_resultado = ft_memchr(s, c, n);
	printf("Funcion original: %p\n", resultado);
	printf("Mi funcion: %p", mi_resultado);
	return (0);
}
*/
