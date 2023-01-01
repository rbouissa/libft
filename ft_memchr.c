/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:23:13 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/27 23:00:15 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	k;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char) c;
	while (n > 0)
	{
		if (k == *(str + i))
			return (str + i);
		i++;
		n--;
	}
	return (0);
}
