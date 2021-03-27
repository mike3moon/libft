/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:41:05 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:42:18 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	const char	*src0;
	char		dummy[1];

	src0 = src;
	if (!n)
		dst = dummy;
	else
		--n;
	while (*src)
	{
		*dst = *src;
		if (n)
		{
			--n;
			++dst;
		}
		++src;
	}
	*dst = *src;
	return (src - src0);
}
