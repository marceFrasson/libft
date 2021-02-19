/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 22:16:33 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/19 14:17:52 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_putchar(int nbr, int n, int size, int ten)
{
	char	*str;
	int		i;

	i = 0;
	if (n < 0)
	{
		str = (char *)malloc(sizeof(char) * size + 3);
		nbr = n * -1;
		str[i] = '-';
		i++;
	}
	else
	{
		str = (char *)malloc(sizeof(char) * size + 2);
		nbr = n;
	}
	while (ten > 0)
	{
		str[i] = (nbr / ten) + '0';
		nbr = nbr % ten;
		ten /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		size;
	int		ten;
	int		nbr;

	count = 0;
	ten = 1;
	nbr = n;
	nbr *= n < 0 ? -1 : 1;
	if (n == -2147483648)
		return (ft_substr("-2147483648", 0, 11));
	while (nbr >= 10 && ++count)
		nbr /= 10;
	size = count;
	while (count-- > 0)
		ten *= 10;
	if (n < 0)
		str = (char *)malloc(sizeof(char) * size + 3);
	str = ft_putchar(nbr, n, size, ten);
	return (str);
}
