/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:19:04 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:19:58 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*r;

	r = (const unsigned char *)s;
	while (n)
	{
		if (*r == ((unsigned char)c))
			return ((void *)r);
		++r;
		--n;
	}
	return (0);
}
