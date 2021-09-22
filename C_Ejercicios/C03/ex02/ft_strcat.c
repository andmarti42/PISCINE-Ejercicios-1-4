/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strcat.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/29 13:34:05 by andmarti            #+#    #+#            */
/*  Updated: 2021/07/01 12:58:55 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	des;
	int	sr;

	des = 0;
	sr = 0;
	while (dest[des] != '\0')
		des = des + 1;
	while (src[sr] != '\0')
	{
		dest[des + sr] = src[sr];
		sr = sr + 1;
	}
	dest[des + sr] = '\0';
	return (dest);
}
