/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphaber.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:40:49 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/28 13:51:17 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write (1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}
*/
