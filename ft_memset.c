/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:02:53 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/09 19:11:49 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
