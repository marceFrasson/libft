/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:27:16 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/20 13:14:53 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	cc;
	char	*pointer_aux;

	i = 0;
	cc = (char)c;
	pointer_aux = (char *)s;
	while (i < n)
	{
		pointer_aux[i] = cc;
		i++;
	}
	return ((void *)s);
}
