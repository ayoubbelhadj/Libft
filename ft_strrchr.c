/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:55:15 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 21:14:42 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*d;

	d = s;
	i = ft_strlen(s);
	while (*s && i)
	{
		i--;
		s++;
	}
	while (i <= (int)ft_strlen(d))
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
		i++;
	}
	return (0);
}
