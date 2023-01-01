/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:23:57 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/27 04:22:06 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)to;
	str2 = (unsigned char *)from;
	if (str2 < str1)
	{
		while (numBytes-- > 0)
			*(str1 + (numBytes)) = *(str2 + (numBytes));
	}
	else
	{
		str1 = ft_memcpy(to, from, numBytes);
	}
	return (to);
}
