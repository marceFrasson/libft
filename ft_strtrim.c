/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:43:34 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/18 11:25:25 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *ref)
{
	size_t size;

	size = ft_strlen(str);
	if (!str || !ref)
		return (NULL);
	while (*str && ft_strchr(ref, *str))
		str++;
	while (size && ft_strrchr(ref, str[size]))
		size--;
	return (ft_substr(str, 0, size + 1));
}
