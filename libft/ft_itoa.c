/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:49:13 by ecanci            #+#    #+#             */
/*   Updated: 2022/10/13 15:56:22 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	digit(long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		a;
	long	nb;

	nb = n;
	a = digit(nb);
	str = (char *)malloc(a + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	str[a] = '\0';
	a--;
	while ((n < 0) <= a)
	{
		str[a] = (nb % 10) + 48;
		nb /= 10;
		a--;
	}
	return (str);
}
