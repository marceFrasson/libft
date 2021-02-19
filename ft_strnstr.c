/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:54:49 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 15:04:24 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			count;
	char			*pointer;

	i = 0;
	pointer = (char *)src;
	if (!*to_find)
		return ((char *)src);
	while (src[i] != '\0' && i < size)
	{
		j = 0;
		count = i;
		while ((src[i] == to_find[j]) && to_find[j] != '\0' && i++ < size)
			j++;
		if (to_find[j] == '\0')
			return ((char *)&pointer[count]);
		i++;
	}
	return (NULL);
}
