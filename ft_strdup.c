/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:02:05 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/26 18:53:35 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;

	len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	ft_memmove(d, s, len + 1);
	return (d);
}
