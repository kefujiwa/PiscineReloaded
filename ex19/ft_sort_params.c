/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenshi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 13:09:22 by kenshi            #+#    #+#             */
/*   Updated: 2020/04/17 01:58:37 by kenshi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **s1, char **s2);

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc == 1)
		return (0);
	x = 1;
	while (x < argc - 1)
	{
		y = x + 1;
		while (y < argc)
		{
			if (ft_strcmp(argv[x], argv[y]) > 0)
				ft_swap(&argv[x], &argv[y]);
			y++;
		}
		x++;
	}
	while (--argc)
		ft_putstr(*(++argv));
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}
