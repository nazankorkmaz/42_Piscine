/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:11:38 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 13:35:50 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int nb)
{
	int	i;
	int	k;

	k = nb / 2;
	i = 2;
	if (nb < 2)
		return (0);
	while (i <= k)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	k;

	k = nb;
	i = 2;
	if (nb < 2)
		return (2);
	if (prime (nb))
		return (nb);
	else
	{
		while (++nb)
		{
			if (prime (nb))
				return (nb);
		}
	}
	return (0);
}
