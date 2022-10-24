/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:12:06 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 21:14:46 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	check_s(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;
	int		len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	while (s1[start] && check_s(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_s(s1[end - 1], set))
		end--;
	len = end - start;
	str = ft_substr(s1, start, len);
	return (str);
}
