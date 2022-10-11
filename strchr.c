/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:09:34 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 18:04:07 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int i;
	i = 0;
	int j;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char*) &str[i]);
		}
		i++;
	}
	return 0;
}
int main()
{
	char k[100] = "hello";
	int l = '0';
	printf("the character is = %s",strchr(k, l));
			return 0;
			}
	
