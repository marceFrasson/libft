/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:31:10 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 14:33:56 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	els(unsigned char *dst1, unsigned char *src1, size_t i, size_t size)
{
	i = size;
	while (i > 0)
	{
		i--;
		((char *)dst1)[i] = ((char *)src1)[i];
	}
}

void		*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if (!dst1 && !src1)
	{
		return (NULL);
	}
	if (dst1 < src1)
	{
		while (i <= size)
		{
			((char *)dst1)[i - 1] = ((char *)src1)[i - 1];
			i++;
		}
	}
	else
	{
		els(dst1, src1, i, size);
	}
	return (dst1);
}
