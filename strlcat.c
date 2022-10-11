/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:29:13 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 16:47:14 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"
int	ft_strlcat(char *dest, const char * src, size_t dstsize)
{
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = ft_strlen(dest);
	while (src[i] !='\0')
	{
		i++;
	}
	while (src[j] !='\0' && j<= (dstsize - k - 1))
	{
	dest[i+j] = src[j];
	j++;
	}
	dest[i+j] = '\0';
	return (i+j);
}
int main()
{
	char sr[100] = "hello";
	char dest[100] = "world";
	printf("%d",ft_strlcat(dest,sr,12));
	ft_strlcat(dest,sr,12);
	printf("%s",dest);
}
