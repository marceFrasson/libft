/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 22:09:23 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/21 19:02:56 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(const char *str, char c)
{
	int					i;
	int					count;

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

char			*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static char		*ft_strndup(const char *s, size_t n)
{
	char				*str;

	if (!s || !n)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char			**ft_split(char const *str, char c)
{
	char				**array;
	int					i;
	int					j;
	int					k;

	i = 0;
	k = 0;
	if (!str)
		return (NULL);
	if (!(array = (char **)malloc(sizeof(char *) * (word_count(str, c)) + 1)))
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > j)
		{
			array[k] = ft_strndup(str + j, i - j);
			k++;
		}
	}
	array[k] = NULL;
	return (array);
}
