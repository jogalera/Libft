/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:25:03 by jogalera          #+#    #+#             */
/*   Updated: 2023/11/09 10:54:44 by jogalera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_len;
	char	*aux;

	i = 0;
	s1_len = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1_len > 0 && i < s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	aux = ft_substr(s1, i, (s1_len - i) + 1);
	if (!aux)
		return (NULL);
	return (aux);
}
