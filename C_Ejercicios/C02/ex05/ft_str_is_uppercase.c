/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_str_is_uppercase.c                                :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/24 11:01:49 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/24 12:01:05 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] < 'A' || str[pos] > 'Z')
			return (0);
		pos = pos + 1;
	}
	return (1);
}
