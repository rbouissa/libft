/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:51:41 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 18:02:07 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
void *ft_memset(void *str, int x, size_t n)
{
	size_t  i;
	//char *s =(char *)str;
	i = 0;
	while(((char *)str)[i] != '\0'&& i < n)
	{
		((char *)str)[i] = x;
		i++;
	}
	return str;
}
void ft_bzero(void *s, size_t n)
{
	ft_memset(s,'\0',n);
}
int main()
{
	char str[100] ="helllo  fuck";
	bzero(str+3,5);
	printf("%s",str);

}

