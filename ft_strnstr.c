/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:54:49 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/12 15:22:02 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t size)
{
	size_t				i;
	size_t				j;
	size_t				count;
	unsigned int	flag;
	char			*pointer;

	i = 0;
	j = 0;
	flag = 0;
	pointer = (char *)src;
	if (!*to_find)
		return ((char *)src);
	while (src[i] != '\0' && i < size)
	{
		if (src[i] == to_find[j])
		{
			count = i;
			while ((src[i] == to_find[j]) && to_find[j] != '\0' && i < size)
			{
				flag = 1;
				i++;
				j++;
			}
		}
		if (to_find[j] == '\0' && flag)
			return ((char *)&pointer[count]);
		i++;
		j = 0;
		flag = 0;
	}
	return (NULL);
}
