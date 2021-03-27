/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:06:31 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:07:03 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t lsize)
{
	void	*result;
	size_t	size;

	size = lsize * nmemb;
	result = malloc(size);
	if (!result)
		return (0);
	ft_memset(result, 0, size);
	return (result);
}
