/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:16:57 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/16 12:54:46 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int index, size_t size)
{
	char	*substr;
	size_t	i;

	substr = (char *)str;
	i = 0;
	if (!str)
	{
		return (NULL);
	}
	if (!(substr = (char *)malloc(sizeof(char) * size + 1)))
	{
		return (NULL);
	}
	while (i < size)
	{
		substr[i] = str[index + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
