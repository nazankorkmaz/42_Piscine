/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:11:30 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/07 10:05:56 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char	a[] = "nazan";
	char	b[] = "nazanh";

	printf("%d", ft_strcmp(a,b));
}
*/
