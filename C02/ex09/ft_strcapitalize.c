/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:54:06 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:14:32 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (flag == 0 && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
			flag++;
		}
		else if (flag > 0 && ('A' <= str[i] && str[i] <= 'Z'))
			str[i] += 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			flag++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			flag++;
		else if (str[i] >= '0' && str[i] <= '9')
			flag++;
		else
			flag = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char s[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(s));
}
*/
