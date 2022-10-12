/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:22:48 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/12 16:48:29 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen > size)
		return (slen + size);
	size -= dlen;
	if (size)
	{
		while (src[i] && size - 1 > 0)
		{
			dst[dlen + i] = src[i];
			i++;
			size --;
		}
		dst[dlen + i] = '\0';
	}
	return (slen + dlen);
}
