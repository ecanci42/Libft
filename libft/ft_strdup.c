/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:52:45 by ecanci            #+#    #+#             */
/*   Updated: 2022/10/07 21:03:55 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	i = ft_strlen(s1);
	p = (char *)malloc(sizeof(char) * i + 1);
	if (!p)
		return (p);
	p[i] = '\0';
	while (i--)
		p[i] = s1[i];
	return (p);
}
