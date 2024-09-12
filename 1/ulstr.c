/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:27:01 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 13:32:45 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char c)
{
	if ('a' <= c && c <= 'z')
		ft_putchar(c - 32);
	else if ('A' <= c && c <= 'Z')
		ft_putchar(c + 32);
	else
		ft_putchar(c);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		ulstr(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
