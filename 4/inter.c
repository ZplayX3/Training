/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:02:42 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/12 14:18:10 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;


	i = 0;
	j = 0;
	while (s1[j])
	{
		while (s2[i])
		{
			if (s2[i] == *s1)
			{
				ft_putchar(*s1);
				while (s2[i])
					i++;
			}
			else
				i++;
		}
		i = 0;
		j++;
	}
	ft_putchar('\n');
}


int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	inter(argv[1], argv[2]);
	return (0);
}
