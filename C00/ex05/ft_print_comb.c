/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:01:57 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/28 16:43:54 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
	
	void ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (++b <= '8')
		{
			c = b;
			while (++c <='9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
			   if(a!= '7' || b != '8' || c != '9' )
			   {
				   write (1, ", ", 2);
			   }
			   c++;
			}

		}
		a++;
		
	}

}
/*
	int main(void)
{
	ft_print_comb();
	return(0);
}
*/
