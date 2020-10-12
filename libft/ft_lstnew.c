/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 15:48:20 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/11 15:57:31 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	if (content == 0)
		return (0);
	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = content;
	lst->next = 0;
	return (lst);
}
