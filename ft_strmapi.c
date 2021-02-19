/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:18:29 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/17 15:25:29 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	if (!(ptr = malloc(ft_strlen(str) + 1)))
	{
		return (NULL);
	}
	while (str[i])
	{
		ptr[i] = f(i, str[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
