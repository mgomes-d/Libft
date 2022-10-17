/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:13:53 by mgomes-d          #+#    #+#             */
/*   Updated: 2022/10/12 19:16:51 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	espace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ' || c == 0)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	neg;
	long	res;

	res = 0;
	neg = 1;
	i = 0;
	while (str[i] && espace(str[i]))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
		if (res > (unsigned)LONG_MAX && neg == -1)
			return (0);
		else if (res > (unsigned)LONG_MAX && neg == 1)
			return (-1);
	}
	return ((int)res * neg);
}
