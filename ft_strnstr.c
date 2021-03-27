/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:37:28 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/07 12:46:14 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	b_len;
	size_t	l_len;
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	b_len = ft_strlen(s1);
	l_len = ft_strlen(s2);
	if (b_len < l_len || n < l_len)
		return (0);
	if (b_len > n)
		len = n;
	else
		len = b_len;
	while (len-- >= l_len)
	{
		if (ft_memcmp(s1, s2, l_len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (0);
}
