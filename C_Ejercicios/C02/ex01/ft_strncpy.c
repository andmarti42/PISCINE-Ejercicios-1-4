/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strncpy.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/23 13:54:05 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/23 14:02:07 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while ((src[pos] != '\0') && (pos < n))
	{
		dest[pos] = src[pos];
		pos = pos + 1;
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos = pos + 1;
	}
	return (dest);
}
