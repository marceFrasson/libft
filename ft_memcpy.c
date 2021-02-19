/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:58:22 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 19:48:15 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	char		*dst1;
	const char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (!dst && !src && (size > 0))
		return (NULL);
	while (size > 0)
	{
		*dst1 = *src1;
		dst1++;
		src1++;
		size--;
	}
	return (dst1);
}
