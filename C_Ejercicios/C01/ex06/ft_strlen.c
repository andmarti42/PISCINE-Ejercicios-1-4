/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlen.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/22 15:41:25 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/22 17:05:01 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}
