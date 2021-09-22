/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_print_comb2.c                                     :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/16 11:50:27 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/16 11:50:51 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar('0' + n1 / 10);
			ft_putchar('0' + n1 % 10);
			write (1, " ", 1);
			ft_putchar('0' + n2 / 10);
			ft_putchar('0' + n2 % 10);
			if (! (n1 == 98 && n2 == 99))
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
