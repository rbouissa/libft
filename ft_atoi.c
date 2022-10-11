/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:57:48 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/08 18:51:36 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int ft_atoi(const char *str)
{
	int i;
	int numb;
	int negative;
	i = 0;
	numb = 0;
	negative = 0;

		if (str[i] == '-')
		{
			negative = 1 - negative;
			i++;
		}
		else if (str[i] == '+')
		{
			negative = 0;
			i++;
		}

		while(str[i] >= '0' && str[i]<= '9' )
		{
			numb = numb * 10 + str[i] - 48;
			i++;
		}
		if(negative)
		{
			numb = numb *(-1);
		}
		return (numb);
}
int main ()
{
	char st[100] = "-1234";
	printf("%d",ft_atoi(st));
	printf("%d\n",atoi(st));
}
