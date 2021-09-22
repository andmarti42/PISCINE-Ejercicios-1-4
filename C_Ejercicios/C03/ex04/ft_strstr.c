/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strstr.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: andmarti <andmarti@student.42urduliz.com>    +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/06/29 13:34:56 by andmarti            #+#    #+#            */
/*  Updated: 2021/07/01 13:05:18 by andmarti           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			pos = 0;
			tmp = 0;
			while (to_find[pos] != '\0')
			{
				if (str[pos] != to_find[pos])
					tmp = 1;
				pos = pos + 1;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
