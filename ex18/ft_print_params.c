/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenshi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 12:28:22 by kenshi            #+#    #+#             */
/*   Updated: 2020/04/17 01:54:19 by kenshi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	while (--argc)
		ft_putstr(*(++argv));
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}
