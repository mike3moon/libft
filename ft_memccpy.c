/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:17:52 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:20:10 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*r1;
	const char	*r2;

	r1 = s1;
	r2 = s2;
	while (n--)
	{
		*r1++ = *r2;
		if (*(unsigned char*)r2++ == (unsigned char)c)
			return (r1);
	}
	return (0);
}
