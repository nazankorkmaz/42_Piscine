/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:50:34 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/06 12:15:16 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char	*str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (ft_char_printable(a))
			ft_putchar(a);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}
/*
int main(void)
{
	char s[] = "Coucou\ntu vas bien ? ";

	ft_putstr_non_printable(s);	
}
*/
