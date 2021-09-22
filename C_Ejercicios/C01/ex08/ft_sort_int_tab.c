/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_sort_int_tab.c                                    :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/22 16:48:47 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/22 18:26:05 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	change;
	int	aux;

	aux = 0;
	change = 0;
	while (aux <= size - 2)
	{
		if (tab[aux] > tab[aux + 1])
		{
			change = tab[aux];
			tab[aux] = tab[aux + 1];
			tab[aux + 1] = change;
			aux = 0;
		}
		else
		{
			aux = aux + 1;
		}
	}
}
