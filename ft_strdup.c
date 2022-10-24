/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:02:05 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 20:31:28 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;

	d = (char *)ft_calloc(1, ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	ft_memmove(d, s, ft_strlen(s));
	return (d);
}
