/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:15:32 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/30 05:24:59 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;
	int	l;

	l = 0;
	i = 0;
	j = 0;
	if (c == 0)
	{
		while (str[i] != '\0')
			i ++;
		return ((char *)&str[i]);
	}
	if ((unsigned char)c > 255 || (unsigned char)c < 0)
		return (0);
	l = ft_strlen(str);
	while (l >= 0)
	{
		if (str[l] == (unsigned char )c)
			return ((char *) &str[l]);
		l--;
	}
	return (0);
}
