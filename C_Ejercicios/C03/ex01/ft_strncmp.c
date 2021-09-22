/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strncmp.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/29 13:33:24 by andmarti            #+#    #+#            */
/*  Updated: 2021/07/01 12:55:42 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1; char *s2, unsigned int n)
{
	unsigned int	p;

	p = 0;
	if (n == 0)
		return (0);
	while (s1[p] == s2[p] && s1[p] != '\0' && s2[p] != '\0' && n > 0)
	{
		p = p + 1;
		n = n - 1;
	}
	return ((unsigned char)s1[p] - (unsigned char)s2[p]);
}
