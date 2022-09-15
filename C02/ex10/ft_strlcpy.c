/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:48:11 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:14:53 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && (i < size -1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}
/*
int main(void)
{
	char s1[] = "nazan";
	char s2[] = "korkmaz";
	unsigned int a;

	a = 3;

	printf("%d", ft_strlcpy(s1, s2, a));
	printf("\n%s", s1);
	printf("\n%s", s2);
}
*/
