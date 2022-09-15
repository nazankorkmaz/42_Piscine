/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:32:53 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:13:29 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 127))
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
        char    s2[] = "\n\t\v\f";
        char    s3[] = "";

        printf("%d", ft_str_is_printable(s1));
        printf("\n%d",ft_str_is_printable(s2));
        printf("\n%d",ft_str_is_printable(s3));
}
*/
