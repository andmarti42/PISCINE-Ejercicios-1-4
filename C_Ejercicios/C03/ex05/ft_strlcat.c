/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strlcat.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/29 13:35:45 by andmarti            #+#    #+#            */
/*  Updated: 2021/07/01 13:09:19 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	pos;

	pos = 0;
	while (str[pos])
		pos = pos + 1;
	return (pos);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	pd;
	unsigned int	ps;
	unsigned int	res_d;
	unsigned int	res_s;

	pd = ft_strlen(dest);
	ps = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[ps] && pd < size - 1)
	{
		dest[pd] = src[ps];
		pd = pd + 1;
		ps = ps + 1;
	}
	dest[pd] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
