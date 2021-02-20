/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:32:10 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 23:17:01 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!prefix || !suffix)
		return (NULL);
	if (!(str = (char *)malloc(ft_strlen(prefix) + ft_strlen(suffix) + 1)))
		return (NULL);
	while (prefix[i])
	{
		str[j] = prefix[i];
		i++;
		j++;
	}
	i = 0;
	while (suffix[i])
	{
		str[j] = suffix[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
