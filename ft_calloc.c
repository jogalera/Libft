/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:52 by jogalera          #+#    #+#             */
/*   Updated: 2023/10/23 11:16:42 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(count * size);
	if (!tmp)
	{
		return (0);
	}
	ft_bzero(tmp, count * size);
	return (tmp);
}

/*
#include <stdio.h>

int	main(void){
	size_t count = 4;
	size_t size = sizeof(int);
	void *resultado;
	void *mi_resultado;
	resultado = calloc(count, size);
	mi_resultado = ft_calloc(count, size);
	printf("Resutado original: %p\n", resultado);
	printf("Mi resultado: %p", mi_resultado);
	return (0);
}
*/
