/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:34:55 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 15:35:19 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	s;

	s = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		s *= nb;
		power--;
	}
	return (s);
}
