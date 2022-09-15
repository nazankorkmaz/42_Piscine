/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:26:49 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:12:44 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main(void)
{
        char    s1[] = "HGUGJKNKJ";
        char    s2[] = "skmklm";
        char    s3[] = "";

        printf("%d", ft_str_is_uppercase(s1));
        printf("\n%d",ft_str_is_uppercase(s2));
        printf("\n%d",ft_str_is_uppercase(s3));
}
*/
