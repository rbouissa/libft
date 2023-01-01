/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:23:33 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/24 23:39:38 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (n > i)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i ++;
	}
	return ((unsigned char *) dst);
}
