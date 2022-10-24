/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:25 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 21:14:52 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;
	size_t	newlen;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s + start);
	if (start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	if (size <= len)
		newlen = size;
	else
		newlen = len;
	str = malloc(sizeof(char) * (newlen + 1));
	if (!str)
		return (NULL);
	while (i < newlen)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
