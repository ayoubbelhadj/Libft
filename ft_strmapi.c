/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:44:37 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/27 16:52:22 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	int		i;
	int		j;
	char	*str;

	if (!s || !f)
		return (0);
	i = 0;
	j = ft_strlen(s);
	str = malloc(j + 1);
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
