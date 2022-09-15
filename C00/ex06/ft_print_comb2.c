/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:36:56 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/28 17:59:28 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int(int max, int max2)
{
	ft_putchar(max / 10 + 48);
	ft_putchar(max % 10 + 48);
	ft_putchar(32);
	ft_putchar(max2 / 10 + 48);
	ft_putchar(max2 % 10 + 48);
	if (max != 98)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_print_int(a, b);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
