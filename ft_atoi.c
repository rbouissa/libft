/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:57:48 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/27 04:18:21 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	numb;
	int					negative;

	i = 0;
	numb = 0;
	negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str ++;
	if (str[i] == '-' && ++ i)
		negative = 1 - negative;
	else if (str[i] == '+' && ++ i)
		negative = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10 + str[i] - 48;
		i ++;
		if (numb > 9223372036854775807 && negative)
			return (0);
		if (numb > 9223372036854775807)
			return (-1);
	}
	if (negative)
		numb = numb * (-1);
	return (numb);
}
