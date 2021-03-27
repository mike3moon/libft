/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:21:57 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:22:42 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *r1;
	const unsigned char *r2;

	r1 = s1;
	r2 = s2;
	while (n--)
	{
		if (*r1 != *r2)
			return (*r1 - *r2);
		++r1;
		++r2;
	}
	return (0);
}
