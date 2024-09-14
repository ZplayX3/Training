/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:01:03 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 13:21:42 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#icnlude <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argv[2][1] || argv[3][1])
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
