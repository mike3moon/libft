/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:38:43 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:40:36 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	char	dummy[1];

	len = 0;
	while (1)
	{
		if (len >= n)
		{
			dst = dummy;
			break ;
		}
		if (!*dst)
			break ;
		++dst;
		++len;
	}
	while (*src)
	{
		*dst = *src;
		if (++len < n)
			++dst;
		++src;
	}
	*dst = *src;
	return (len);
}
