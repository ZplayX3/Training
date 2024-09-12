/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_interval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:19:11 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/12 12:29:16 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_interval(char *str)
{
	int	i;
	char	c;

	i = 1;
	while (str[i - 1])
	{
		if (i % 15 == 0)
			c = '5';
		else if (i % 5 == 0)
			c = '3';
		else if (i % 3 == 0)
			c = '5';
		else
			c = str[i - 1];
		ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	print_interval(argv[1]);
	return (0);
}
