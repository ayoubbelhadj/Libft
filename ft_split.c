/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:28:04 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/12 17:01:44 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_print_result(char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	*ft_free(char **c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		free(c[i]);
		i++;
	}
	free(c);
	return (NULL);
}

int	ft_count(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && c == s[i])
			i++;
		while (s[i] && c != s[i])
		{
			i++;
			j++;
		}
		if (j > 0)
		{
			k++;
			j = 0;
		}
	}
	return (k);
}

int	cal(char *s, char c, int i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

char	**ft_fill(char **str, char *s, char c, int len)
{
	int	i;
	int	j;
	int	k;
	int	l;

	k = 0;
	i = 0;
	while (k < len)
	{
		l = 0;
		i = cal(s, i, c);
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (k < len)
		{
			str[k] = malloc(i - j + 1);
			if (!str[k])
				return (ft_free(str));
			while (j < i)
				str[k][l++] = s[j++];
			str[k++][l] = 0;
		}
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	if (!s[0])
	{
		str = malloc(sizeof(char *));
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	str = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!str)
		return (NULL);
	str[ft_count(s, c)] = 0;
	return (ft_fill(str, (char *)s, c, ft_count(s, c)));
}

int main()
{
	char	**t;
	int i;

	i =0;

	t = ft_split("1.2.3.4.5.6.7.8.9.10", '.');

	while (t[i] != NULL)
	{
		ft_print_result(t[i]);
		write(1, "\n", 1);
		i++;
	}
}
