/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:24:41 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 16:47:10 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
			i++;
	}
	return (1);
}
/*
int main(void)
{
	char	s1[] = "gyguhhhgh";
	char	s2[] = "ytfyt4g";
	char	s3[] = "";

	printf("%d", ft_str_is_alpha(s1));
	printf("\n%d",ft_str_is_alpha(s2));
	printf("\n%d",ft_str_is_alpha(s3));
}
*/
