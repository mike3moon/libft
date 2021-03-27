/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoon <mmoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:13:16 by mmoon             #+#    #+#             */
/*   Updated: 2021/03/03 17:17:20 by mmoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	int_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		len;

	len = int_len(n);
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (0);
	ret[len] = 0;
	len--;
	if (n < 0)
		ret[0] = '-';
	if (n == 0)
		ret[0] = '0';
	while (n)
	{
		ret[len] = '0' + int_abs(n % 10);
		n = (n / 10);
		len--;
	}
	return (ret);
}
