/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 22:16:33 by mfrasson          #+#    #+#             */
/*   Updated: 2021/02/15 10:32:44 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char		*ft_putnbr(int ten, int ch, int n);

char		*ft_itoa(int n)
{
	int count;
	int ten;
	int ch;
	char *str;

	count = 0;
	ten = 1;
	ch = 0;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	if (!(str = malloc(sizeof(int) * count)))
	{
		return (NULL);
	}
	while (count > 0)
	{
		ten *= 10;
		count--;
	}
	str = ft_putnbr(ten, ch, n);
	return (str);
}

char		*ft_putnbr(int ten, int ch, int n)
{
	char *str;
	int i;

	i = 0;
	str = "";
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	while (ten > 0)
	{
		ch = (n / ten) + '0';
		n = n % ten;
		ten /= 10;
		str[i] = (unsigned char)ch;
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int main(void)
{
	int i;
	i = 23456;
	printf("%s", ft_itoa(i));
	return (0);
}