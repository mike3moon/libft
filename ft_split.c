/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:30:34 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/07 12:24:42 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			n++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (n);
}

static char	**ret_free(char **ret, size_t i)
{
	size_t	idx;

	idx = 0;
	while (idx < i)
	{
		free(ret[idx]);
		idx++;
	}
	free(ret);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**ret;
	char	*start;
	size_t	i;
	size_t	len;

	if (!(ret = (char**)malloc(sizeof(char*) * (count(s, c) + 1))))
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char*)s;
			while (*s && *s != c)
				s++;
			len = s - start + 1;
			if (!(ret[i] = (char*)malloc(len)))
				return (ret_free(ret, i));
			ft_strlcpy(ret[i++], start, len);
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}
