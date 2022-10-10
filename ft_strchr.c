/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:34:26 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/09 21:59:10 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!c)
		return ((char *)s + ft_strlen(s));
	if (!ft_isascii(c))
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}*/
char	*ft_strchr(const char *s, int c)
{
	unsigned char	*d;
	int				k;

	k = ft_strlen(s) + 1;
	d = (unsigned char *)s;
	while (k--)
	{
		if ((unsigned char)c == *d)
			return ((char *) d);
		d++;
	}
	return (NULL);
}
