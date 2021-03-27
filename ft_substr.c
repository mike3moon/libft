/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:53:50 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:54:25 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (ft_strlen(s) <= start || !len)
		return (ft_strdup(""));
	sub = malloc(++len);
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}
