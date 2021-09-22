/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_str_is_alpha.c                                    :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/24 10:14:27 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/24 11:59:48 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	ps;

	ps = 0;
	while (str[ps] != '\0')
	{
		if (str[ps] < 'A' || (str[ps] > 'Z' && str[ps] < 'a') || str[ps] > 'z')
			return (0);
		ps = ps + 1;
	}
	return (1);
}
