/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:08:24 by abelhadj          #+#    #+#             */
/*   Updated: 2022/10/25 00:40:02 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	nbr;
	long	n;
	long	i;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign *= -1;
	n = i;
	while (ft_isdigit(nptr[i]))
		nbr = nbr * 10 + (nptr[i++] - '0');
	if (i - n >= 19)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (nbr * sign);
}
