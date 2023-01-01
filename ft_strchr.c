/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:16:04 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/27 23:03:19 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if ((unsigned char)c == 0)
	{
		while (str[i])
			i++;
		return ((char *)&str[i]);
	}
	if ((unsigned char)c > 255 || (unsigned char)c < 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i ++;
	}
	return (0);
}
