/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:23:30 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/29 22:52:26 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_kayna(char c, char const *o)
{
	int	i;

	i = 0;
	while (o[i] != '\0')
	{
		if (c == o[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		lendest;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set)
		return (0);
	j = ft_strlen(s1);
	while (s1[i] != '\0' && ft_kayna(s1[i], set))
		i++;
	while (j > 0 && ft_kayna(s1[j - 1], set) && i < j)
		j--;
	lendest = j - i;
	if (lendest < 0)
		lendest = 0;
	dest = ft_substr(s1, i, lendest);
	return (dest);
}
