/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:10:05 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 14:40:08 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char c)
{
	if (c == 'z')
		ft_putchar('a');
	else if (c == 'Z')
		ft_putchar('A');
	else if (('a' <= c && c<= 'y') || ('A' <= c && c <= 'Y'))
		ft_putchar(c + 1);
	else
		ft_putchar(c);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		rotone(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
