/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:39:03 by rbouissa          #+#    #+#             */
/*   Updated: 2022/10/09 18:02:44 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && i <= (n - 1))
	{
		i++;
	}
	if((s1[i] - s2[i]) < 0)
	{
		return (-1);
	}
	else if ((s1[i] - s2[i]) > 0)
	{
		return (1);
	}
	else
		return (0);
}

int main ()
{
	char st [100] = "h";
	char s[100] = "h";
	printf("%d",ft_strncmp(st,s,1));
}



