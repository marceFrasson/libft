/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:58:24 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/11 22:02:09 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t size)
{
	unsigned char			*s;
	unsigned long int		i;

	i = 0;
	s = str;
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
}
