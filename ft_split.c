/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:10:01 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/11 14:03:53 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char *ft_strcpy(char *src, char *dest)
{
	int i;
	i = 0;
	while(src[i] !='\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
   return (dest);
}   
	


int ft_lenstr(char *str)
{
	int i;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strdup(char *s, char c)
{
	int i;
	char *dest;

	i  = 0;
	while( s[i] = c)
	{
			i++;
	}
		dest = (char *)malloc(sizeof (char) * ft_lenstr(s) + 1);
		dest = ft_strcpy(s + i,dest);
		return (dest);
}
	
//int count_separator(char const *str, char k)
//{
//	int i;
//	int j;
//	j = 0;
//	i = 0;
//	while(str[i] != '\0')
//	{
//		if(str[i] == k)
//		{
//			j++;
//		}
//		i++;
//	}
//	return (j);
//}

char *ft_results(char const *st , char k)
{
	int i;
	int j;
	char *half_result;

	i = 0;
	j = 0;
	while(st[i] != '\0')
	{
		if(st[i] == k)
		{
			while(i >= 0)
			{
				half_result[j] = st[j];
					j ++;;
					i --;
			}
			
		}
		i ++;
	}
	return (half_result);
}

char **ft_split(char const *s, char c)
{
	char **result;
	int	i;
//	int	j;
	int sep;
//	sep = count_seperator(s,c);
	i = 0;
	result = (char **) malloc(sizeof (char) * 

	while(s[i] !='\0')
	{
		*result[i] = ft_strdups,c);
		i ++;
	}
	return (result);
}
int main()
{
	char *k ="reda yasir oussama simo";
	char c =" ";
	printf("%s",ft_split(k ,c));
}
