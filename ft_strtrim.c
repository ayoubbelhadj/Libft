/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:12:06 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/11 15:16:40 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	check_s(char c, char const *set)
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

	i = 0;
	start = 0;
	while (s1[start] && check_s(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_s(s1[end - 1], set))
		end--;
	len = end - start;
	str = (char *)malloc(sizeof(*s1) * len + 1);
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}