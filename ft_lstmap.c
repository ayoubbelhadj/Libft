/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:17:33 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/30 20:58:13 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	t_list	*last;

	first = NULL;
	new = NULL;
	while (lst && f)
	{
		new = ft_lstnew(f(lst -> content));
		if (new == NULL)
			break ;
		if (first == NULL)
			first = new;
		else
			last -> next = new;
		last = new;
		lst = lst -> next;
	}
	if (lst != NULL)
		ft_lstclear(&lst, del);
	return (first);
}
