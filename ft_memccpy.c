/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:57:41 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/11 22:05:25 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	while (i < size)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			return (&dst1[i + 1]);
		}
		i++;
	}
	return (NULL);
}
