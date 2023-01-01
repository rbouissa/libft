/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:20:15 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/27 04:24:34 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	unsigned int	i;
	unsigned int	lenlit;
	unsigned int	j;

	i = 0;
	j = 0;
	if (b == NULL && len == 0)
		return (0);
	lenlit = ft_strlen((char *)l);
	if (l[i] == '\0')
	{
		return ((char *)b);
	}
	while (b[i] != '\0' && len > i)
	{
		while (b[i + j] == l[j] && len > (i + j) && l[j] && b[i + j])
			j++;
		if (!l[j])
			return ((char *)b + i);
		j = 0;
		i++;
	}
	return (0);
}
