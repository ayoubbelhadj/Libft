/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:44:45 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/30 20:57:53 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*snbr;
	long	nb;
	int		i;

	nb = n;
	i = ft_count(nb);
	snbr = malloc(i + 1);
	if (!snbr)
		return (NULL);
	if (nb < 0)
	{
		snbr[0] = '-';
		nb *= -1;
	}
	snbr[i] = '\0';
	while (i && (nb != 0 || n == 0))
	{
		snbr[--i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (snbr);
}
