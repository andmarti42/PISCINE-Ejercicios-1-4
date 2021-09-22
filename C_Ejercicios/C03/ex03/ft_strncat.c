/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strncat.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/29 13:34:33 by andmarti            #+#    #+#            */
/*  Updated: 2021/07/01 13:01:44 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_lenght(char *d)
{
	unsigned int	pos;

	pos = 0;
	while (d[pos] != '\0')
	{
		pos = pos + 1;
	}
	return (pos);
}

char	*ft_strncat (char *dest, char *src, unsigned int nb)
{
	unsigned int	ds;
	unsigned int	sr;

	ds = ft_lenght(dest);
	sr = 0;
	while (sr < nb && src[sr] != '\0')
	{
		dest[ds + sr] = src[sr];
		sr = sr + 1;
	}
	dest[ds + sr] = '\0';
	return (dest);
}
