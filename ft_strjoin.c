/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:32:10 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/14 16:03:31 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(str = malloc(ft_strlen(prefix) + ft_strlen(suffix))))
	{
		return (NULL);
	}
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
