/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:43:06 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/29 22:55:45 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s == 0 && start == 0 && len == 0)
		return (0);
	if (len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	dest = (char *) malloc(sizeof (char) * (len + 1));
	if (!dest)
		return (0);
	while (s[i] != '\0' && i < start)
		i ++;
	while (s[i] != '\0' && len > j)
	{
		dest[j] = s[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (dest);
}
