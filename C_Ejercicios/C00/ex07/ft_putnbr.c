:s/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_putnbr.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/16 12:52:14 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/17 16:06:20 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num)
{
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (-2147483648 < nb && nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + 48);
}
