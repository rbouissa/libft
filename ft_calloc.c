/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:40:42 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/27 04:19:56 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	i;

	i = 0;
	dest = malloc(count * size);
	if (!dest)
		return (0);
	while (i < count * size)
	{
		((unsigned char *)dest)[i] = 0;
		i ++;
	}
	return (dest);
}
