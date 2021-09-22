/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlcpy.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/28 19:18:26 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/29 09:17:22 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	siz;
	unsigned int	pos;

	siz = 0;
	pos = 0;
	while (src[siz] != '\0')
		siz = siz + 1;
	if (size != 0)
	{
		while (src[pos] != '\0' && pos < (size - 1))
		{
			dest[pos] = src[pos];
			pos = pos + 1;
		}
		dest[pos] = '\0';
	}
	return (siz);
}
