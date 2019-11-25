/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:16:39 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/06 15:16:41 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int size;
	int *dest;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	dest = (int*)malloc(sizeof(int) * size);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
