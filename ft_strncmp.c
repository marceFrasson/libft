/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:55:14 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 21:32:58 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int		ft_strncmp(const char *string1, const char *string2, size_t size)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)string1;
	str2 = (unsigned char *)string2;
	while (i < size && (str1[i] || str1[i]))
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;

	i = 0;
	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	while ((s1_cast[i] != '\0' || s2_cast[i] != '\0') && i < n)
	{
		if (s1_cast[i] != s2_cast[i])
		{
			return (s1_cast[i] - s2_cast[i]);
		}
		i++;
	}
	return (0);
}
