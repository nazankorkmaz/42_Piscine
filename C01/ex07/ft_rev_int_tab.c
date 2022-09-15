/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:10:20 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/31 12:51:58 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	k;

	k = 0;
	while (k < (size / 2))
	{
		temp = tab [k];
		tab [k] = tab [size - 1 - k];
		tab [size - 1 - k] = temp;
		k = k + 1;
	}
}
/*
int main(void)
{
	int array[]={1,2,3,4,5};
	int i;

	i=5;
	ft_rev_int_tab(array,i);
	printf("%d, %d, %d, %d, %d", array[0], array[1], array[2], array[3], array[4]);
}
*/
