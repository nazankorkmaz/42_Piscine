/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:19:08 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:12:16 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{	
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
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
        char    s1[] = "gyGJHuhhhgh";
        char    s2[] = "skmklm";
        char    s3[] = "";

        printf("%d", ft_str_is_lowercase(s1));
        printf("\n%d",ft_str_is_lowercase(s2));
        printf("\n%d",ft_str_is_lowercase(s3));

}
*/
