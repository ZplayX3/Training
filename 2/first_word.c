/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:34:45 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 13:47:40 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
