/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:24:17 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/04 13:19:40 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*s;
	const char	*p;

	if (!s1 && !s2)
		return (0);
	s = (char *)s1;
	p = (const char *)s2;
	if (p >= s)
	{
		while (n)
		{
			*s++ = *p++;
			--n;
		}
	}
	else
	{
		while (n)
		{
			--n;
			s[n] = p[n];
		}
	}
	return (s1);
}
