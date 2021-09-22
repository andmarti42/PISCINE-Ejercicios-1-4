/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_str_is_lowercase.c                                :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/24 10:53:03 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/24 10:58:29 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] < 'a' || str[pos] > 'z')
			return (0);
		pos = pos + 1;
	}
	return (1);
}
