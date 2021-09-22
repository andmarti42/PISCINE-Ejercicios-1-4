/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_str_is_printable.c                                :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/24 11:09:39 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/24 12:01:28 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] < 32 || str[pos] > 126)
			return (0);
		pos = pos + 1;
	}
	return (1);
}
