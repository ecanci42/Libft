/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:06:12 by ecanci            #+#    #+#             */
/*   Updated: 2022/10/15 18:35:48 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destSize)
{
	size_t	i;
	size_t	d_len;

	i = 0;
	d_len = 0;
	if (dst)
		d_len = ft_strlen(dst);
	if (d_len >= destSize)
		d_len = destSize;
	else if (d_len < destSize - 1 && destSize > 0)
	{
		while (src[i] && d_len + i < destSize - 1)
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[d_len + i] = 0;
	}
	return (d_len + ft_strlen(src));
}
