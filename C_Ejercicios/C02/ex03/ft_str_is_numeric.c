/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_str_is_numeric.c                                  :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/24 10:39:06 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/24 12:00:27 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] < '0' || str[pos] > '9')
			return (0);
		pos = pos + 1;
	}
	return (1);
}
