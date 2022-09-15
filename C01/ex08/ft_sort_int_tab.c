/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:09:59 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/31 14:30:01 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*
int main(void)
{
	int	array[] = {9,7,8,2};
	int size;

	size=4;
	ft_sort_int_tab(array,size);
	printf("%d, %d, %d, %d", array[0], array[1], array[2], array[3]);
}
*/
