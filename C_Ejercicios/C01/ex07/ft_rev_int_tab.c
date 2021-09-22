/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_rev_int_tab.c                                     :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/22 15:49:59 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/22 16:05:50 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	loops;
	int	pos;
	int	change;

	loops = size / 2;
	pos = 0;
	change = 0;
	while (loops > 0)
	{
		change = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = change;
		pos = pos + 1;
		size = size - 1;
		loops = loops - 1;
	}
}
