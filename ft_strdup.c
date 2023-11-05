/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:02:59 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/23 11:16:49 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	s2 = malloc((ft_strlen(s1) * sizeof(char)));
	i = 0;
	
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';

	return (s2);
}

#include <string.h>
#include <stdio.h>
int main(){
	const char *s1 = "Hola buenas";
	char *mi_resultado;
	mi_resultado = ft_strdup(s1);
	printf("Mi resultado: %s", mi_resultado);
	return (0);
}
