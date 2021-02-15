/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:16:57 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/14 18:03:11 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *str, unsigned int index, size_t size)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)str;
	i = (size_t)index;
	j = 0;
	if (!str)
	{
		return (NULL);
	}
	if (!(substr = malloc(size + 1)))
	{
		return (NULL);
	}
	while (i < size)
	{
		substr[j] = str[i];
		j++;
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
