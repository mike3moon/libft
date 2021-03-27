/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:36:10 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 18:14:35 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	l;

	l = (ft_strlen(s1) + 1) * sizeof(char);
	s = malloc(l);
	if (!s)
		return (0);
	ft_memcpy(s, s1, l);
	return (s);
}
