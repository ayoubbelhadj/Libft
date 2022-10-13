/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:28:04 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/13 18:57:07 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_is_c(const char c, const char t)
{
	return (c == t);
}

static size_t	ft_count(char const *s, char const c)
{
	size_t	count;
	size_t	i;

	if (s[0] != 0)
	{
		i = 1;
		count = (ft_is_c(s[0], c) == 0) ? 1 : 0;
		while (s[i])
		{
			if (ft_is_c(s[i - 1], c) == 1
					&& ft_is_c(s[i], c) == 0)
				count++;
			i++;
		}
		return (count);
	}
	else
		return (0);
}

static size_t			ft_word(const char *str, const char c)
{
	size_t	wordlen;
	size_t	i;

	wordlen = 0;
	i = 0;
	while (str[i] && !ft_is_c(str[i], c))
	{
		wordlen++;
		i++;
	}
	return (wordlen);
}

char					**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s || !(sp = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (0);
	i = 0;
	j = 0;
	while ((k = 0) || s[i])
	{
		while (s[i] && ft_is_c(s[i], c))
			i++;
		if (s[i])
		{
			if (!(sp[j] = (char *)malloc(sizeof(char) *
					(ft_word(s + i, c) + 1))))
				return (0);
			while (s[i] && !ft_is_c(s[i], c))
				sp[j][k++] = s[i++];
			sp[j++][k] = 0;
		}
	}
	sp[j] = 0;
	return (sp);
}
// #include"libft.h"

// void	ft_print_result(char *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// void	*ft_free(char **c)
// {
// 	int	i;

// 	i = 0;
// 	while (c[i])
// 	{
// 		free(c[i]);
// 		i++;
// 	}
// 	free(c);
// 	return (NULL);
// }

// int	ft_count(char const *s, char c)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	while (s[i])
// 	{
// 		while (s[i] && c == s[i])
// 			i++;
// 		while (s[i] && c != s[i])
// 		{
// 			i++;
// 			j++;
// 		}
// 		if (j > 0)
// 		{
// 			k++;
// 			j = 0;
// 		}
// 	}
// 	return (k);
// }

// int	cal(char *s, char c, int i)
// {
// 	while (s[i] == c && s[i])
// 		i++;
// 	return (i);
// }

// char	**ft_fill(char **str, char *s, char c, int len)
// {
// 	int	i;
// 	int	j;
// 	int	k;
// 	int	l;

// 	k = 0;
// 	i = 0;
// 	while (k < len)
// 	{
// 		l = 0;
// 		i = cal(s, i, c);
// 		j = i;
// 		while (s[i] != c && s[i])
// 			i++;
// 		if (k < len)
// 		{
// 			str[k] = malloc(i - j + 1);
// 			if (!str[k])
// 				return (ft_free(str));
// 			while (j < i)
// 				str[k][l++] = s[j++];
// 			str[k++][l] = 0;
// 		}
// 	}
// 	return (str);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**str;

// 	if (!s)
// 		return (NULL);
// 	if (!s[0])
// 	{
// 		str = malloc(sizeof(char *));
// 		if (!str)
// 			return (NULL);
// 		str[0] = 0;
// 		return (str);
// 	}
// 	str = malloc(sizeof(char *) * (ft_count(s, c) + 1));
// 	if (!str)
// 		return (NULL);
// 	str[ft_count(s, c)] = 0;
// 	return (ft_fill(str, (char *)s, c, ft_count(s, c)));
// }

// int main()
// {
// 	char	**t;
// 	int i;

// 	i =0;

// 	t = ft_split("1.2.3.4.5.6.7.8.9.10", '.');

// 	while (t[i] != NULL)
// 	{
// 		ft_print_result(t[i]);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }
