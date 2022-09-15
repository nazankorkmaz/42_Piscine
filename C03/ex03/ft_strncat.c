/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:34:58 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/07 10:13:48 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int main(void)
{
	char s1[] = "nazan";
	char s2[] = "korkmaz";
	unsigned int n;

	n = 4;
	printf("%s", ft_strncat(s1, s2, n));
}
*/
