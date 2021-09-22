/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_atoi.c                                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/07/01 12:07:32 by andmarti            #+#    #+#            */
/*  Updated: 2021/07/01 12:13:44 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_space (char c)
{
	return (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c == '\f'
		|| c == ' ');
}

int	ft_sign (char c)
{
	return (c == '+' || c == '-');
}

int	ft_number (char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi (char *str)
{
	int	i;
	int	n;
	int	minus;

	i = 0;
	n = 0;
	minus = 0;
	while (ft_space (str[i]))
		i ++;
	while (ft_sign (str[i]))
	{
		if (str[i++] == '-')
			minus ++;
	}
	while (ft_number (str[i]))
	{
		n = (10 * n) + str[i] - '0';
		i ++;
	}
	if ((minus % 2) != 0)
		return (n * -1);
	return (n);
}
