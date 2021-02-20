/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:16:57 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 22:08:59 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int index, size_t size)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!(substr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (!str || !substr)
		return (NULL);
	while ((i < size) && ((index + 1) < ft_strlen(str)) && (str(index + 1))
	{
		substr[i] = str[index + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
