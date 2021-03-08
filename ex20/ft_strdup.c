/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenshi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 14:52:34 by kenshi            #+#    #+#             */
/*   Updated: 2020/04/17 02:16:22 by kenshi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*str_cp;
	char	*ret_str;

	if (!src)
		return (NULL);
	str_cp = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!str_cp)
		return (NULL);
	ret_str = str_cp;
	while (*src)
		*(str_cp++) = *(src++);
	*str_cp = '\0';
	return (ret_str);
}

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str++) != '\0')
		count++;
	return (count);
}
