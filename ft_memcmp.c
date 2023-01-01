/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:48:35 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/30 05:26:02 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*(str1 + i) > *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
		if (*(str1 + i) < *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
		n--;
		i++;
	}
	return (0);
}
