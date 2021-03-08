/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenshi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 23:11:38 by kenshi            #+#    #+#             */
/*   Updated: 2020/04/17 01:37:34 by kenshi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb <= 2)
		return (nb);
	else
	{
		while (nb >= 1)
		{
			result *= nb;
			nb--;
		}
		if (result < 0)
			return (0);
		else
			return (result);
	}
}
