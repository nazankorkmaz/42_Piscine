/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:58:26 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/28 14:44:37 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 'N';
	p = 'P';
	if (n < 0)
	{
		write (1, &x, 1);
	}
	else
	{
		write (1, &p, 1);
	}
}
/*
int main(void)
{
	int a;

	a='5';
	ft_is_negative(a);
	return(0);
}
*/
