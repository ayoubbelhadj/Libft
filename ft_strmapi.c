/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:44:37 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/13 12:59:43 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = mallo(j + 1);
	if (!str)
		return (0);
	while (i < j)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
