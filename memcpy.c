/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:12:15 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 18:06:41 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void * ft_memcpy(void *to, const void *from, size_t numBytes)
{

	unsigned int i;
	i = 0;
	while (((char *)from)[i] != '\0' && numBytes > i)
	{
		((char *)to)[i] = ((char*)from)[i];
		i++;
	}
	((char *)to)[i] = '\0';
	return (to);
}
int main()
{
	char str[] ="hello  fuck";
	printf("%s",ft_memcpy(str+1,str,5));
	printf("\n%s",memcpy(str+1,str,5));
}
