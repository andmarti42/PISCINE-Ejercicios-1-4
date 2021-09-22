/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strcapitalize.c                                   :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/28 13:22:11 by andmarti            #+#    #+#            */
/*  Updated: 2021/06/28 14:03:28 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	p;
	int	c;

	p = 0;
	c = 0;
	while (str[p] != '\0')
	{
		if (c == 0 && str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] = str[p] - 32;
			c = c + 1;
		}
		else if (c > 0 && str[p] >= 'A' && str[p] <= 'Z')
			str[p] = str[p] + 32;
		else if (str[p] < '0' || (str[p] > '9' && str[p] < 'A')
			|| (str[p] > 'Z' && str[p] < 'a') || str[p] > 'z')
			c = 0;
		else
			c = c + 1;
		p = p + 1;
	}
	return (str);
}
