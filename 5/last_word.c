/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:19:44 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/12 14:56:18 by trlachma         ###   ########.fr       */
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
	int	start;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	//deplacement jusqu a la fin de la chaine
	while (argv[1][i])
		i++;
	i--;
	//reculer jusqu a la fin du dernier mot en cas de whitespaces
	while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;
	//reculer jusqu au debut du dernier mot
	while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		i--;
	i++;
	//repasser sur le mot et afficher les caracteres
	while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
