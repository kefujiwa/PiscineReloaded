/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenshi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 15:39:34 by kenshi            #+#    #+#             */
/*   Updated: 2020/04/16 19:14:16 by kenshi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*range;
	int				*result;
	unsigned int	amount;

	if (min >= max)
		return (NULL);
	amount = (unsigned int)max - (unsigned int)min;
	range = (int *)malloc(sizeof(int) * amount);
	if (!range)
		return (NULL);
	result = range;
	while (amount--)
		*(range++) = min++;
	return (result);
}
