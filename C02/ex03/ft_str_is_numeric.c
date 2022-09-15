/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:56:36 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:11:53 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
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
        char    s1[] = "gyguhhhgh";
        char    s2[] = "464651";
		char	s3[] = "";

        printf("%d", ft_str_is_numeric(s1));
        printf("\n%d",ft_str_is_numeric(s2));
     	printf("\n%d",ft_str_is_numeric(s3));
}
*/
