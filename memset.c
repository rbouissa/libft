/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:48:39 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 18:01:51 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
int main()
{
	char str[100] ="helllo  fuck";
	memset(str+3,'*',5);
	printf("%s",str);

}
