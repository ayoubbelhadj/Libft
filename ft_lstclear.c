/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:47:09 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/30 20:58:01 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*t;

	if (!del || !lst)
		return ;
	t = *lst;
	temp = *lst;
	while (temp)
	{
		temp = t->next;
		ft_lstdelone(t, del);
		t = temp;
	}
	*lst = NULL;
}
