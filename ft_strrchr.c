/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:15:32 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/08 21:07:00 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strrchr(const char *str, int c)
{
	int i;
	int j;
	int l;
	l = 0;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	l = i - 1;

		while(l >= 0)
		{
			if(str[l] == c)
			{
				return ((char *) &str[l]);
			}
			l--;
		}
		return (0);
}
int main()
{
	char s[100] ="hi how ";
	int c = 'h';
	printf("%s",ft_strrchr(s,c));
}
