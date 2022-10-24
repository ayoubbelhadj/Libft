/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:56:36 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 02:44:28 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;
	size_t	t;

	t = num * size;
	str = (void *)malloc(t);
	if (!str)
		return (NULL);
	ft_bzero(str, t);
	return (str);
}
