/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:25:12 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/25 00:40:28 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (dest == NULL && dstsize == 0)
		return (ft_strlen(src));
	k = ft_strlen(dest);
	if (dstsize == 0 || k >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[j] != '\0' && j < (dstsize - k - 1))
	{
		dest[k + j] = src[j];
		j++;
	}
	dest[j + k] = '\0';
	return (k + ft_strlen(src));
}
