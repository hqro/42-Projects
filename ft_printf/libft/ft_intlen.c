/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 10:45:28 by glarivie          #+#    #+#             */
/*   Updated: 2015/12/29 14:56:27 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int	len;
	int	div;

	len = 0;
	div = 1;
	if (n == (-2147483648))
	{
		n = 147483648;
		len = len + 2;
	}
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	while ((n / div) != 0)
	{
		div = div * 10;
		len++;
	}
	return (len);
}