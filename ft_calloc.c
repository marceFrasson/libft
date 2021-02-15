/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:29:24 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/11 22:02:31 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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
