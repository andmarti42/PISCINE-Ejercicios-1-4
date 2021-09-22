/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_print_numbers.c                                   :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/16 11:42:23 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/16 11:42:33 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers (void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num++;
	}
}
