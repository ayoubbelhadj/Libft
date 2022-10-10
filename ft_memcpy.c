/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:54:11 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/09 19:11:59 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cd;
	char	*cs;

	i = 0;
	cd = (char *)dest;
	cs = (char *)src;
	while (i < n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (dest);
}