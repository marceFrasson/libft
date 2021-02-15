/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:29:24 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/15 20:34:40 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t str, size_t size)
{
	size_t s;
	size_t len;

	s = 0;
	len = str * size;
	if (!(s = (size_t)malloc(len)))
	{
		return (NULL);
	}
	ft_bzero((void *)s, len);
	return ((void *)s);
}
