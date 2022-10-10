/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:02:05 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/10 16:13:41 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;

	d = (char *)calloc(1, ft_strlen(s) + 1);
	if (!d)
		return (d);
	ft_memmove(d, s, ft_strlen(s));
	return (d);
}
