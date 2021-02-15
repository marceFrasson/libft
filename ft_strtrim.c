/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:12:07 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/15 19:52:04 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *ref)
{
	char *strim;
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = ft_strlen(str) - 1;
	k = ft_strlen(ref) - 1;
	l = 0;
	strim = "";
	if (!str || !ref)
		return (NULL);
	while (str[i] && str[i] == ref[i])
		i++;
	while (str[j] && str[j] == ref[k])
	{
		j--;
		k--;
	}
	while (i < j)
	{
		strim[l] = str[i];
		i++;
		l++;
	}
	if (!(strim = malloc(ft_strlen(strim))))
		return (NULL);
	strim[i] = '\0';
	return (strim);
}
