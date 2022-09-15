/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:16:03 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 15:30:42 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	while (sqr * sqr <= nb)
	{
		if (sqr >= 46341)
			return (0);
		else if (sqr * sqr == nb)
			return (sqr);
		sqr++;
	}
	return (0);
}