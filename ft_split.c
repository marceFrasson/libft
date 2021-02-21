/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 22:09:23 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/21 19:39:21 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wcnt(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putstr(char const *str, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(word = (char *)malloc(i + 1)))
		return (NULL);
	word[i] = 0;
	i--;
	while (i >= 0)
	{
		word[i] = str[i];
		i--;
	}
	return (word);
}

char		**ft_split(char const *str, char c)
{
	char	**split;
	int		word;
	int		count;
	int		i;

	if (!str || !(split = (char **)malloc((wcnt(str, c) + 1) * sizeof(char *))))
		return (NULL);
	word = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			word = 0;
		else if (str[i] != c && word == 0)
		{
			word = 1;
			if (!(split[count] = ft_putstr(&str[i], c)))
				return (NULL);
			count++;
		}
		i++;
	}
	split[count] = 0;
	return (split);
}
