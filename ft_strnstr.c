/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:20:15 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 14:21:44 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i] !='\0')
	{
		i++;
	}
	return (i);
}

char 	*ft_strnstr (const char *big, const char *little, size_t len)
{
	int i;
	int lenlit;
	int j;
	i = 0;
	j = 0;
	lenlit = ft_strlen((char*)little);
	if(little[i] =='\0')
	{
		return ((char*)big);
	}

	while (big[i] != '\0' && len >i)
	{
			while (big[i+j] == little[j]  && len >= (i+j) && little[j] !='\0')
		{
			if((j +1) == lenlit )
			{	
				return ((char *)big + i);
				//printf("%s", "123");
			}
			j++;
		}
		i++;
	}
	return (0);
}
int main()
{
	char b[100] ="hello every one";
	char c[100] ="";
	printf("%s",ft_strnstr(b,c,5));
}
