/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:09:14 by ecanci            #+#    #+#             */
/*   Updated: 2022/10/15 16:37:55 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rt;

	rt = malloc(sizeof(t_list));
	if (!rt)
		return (0);
	rt->content = content;
	rt->next = NULL;
	return (rt);
}
