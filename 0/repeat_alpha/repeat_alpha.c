/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:48:34 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 14:06:20 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char c)
{
	int	repeats;

	if ('a' <= c && c <= 'z')
		repeats = c - 96;
	else if ('A' <= c && c <= 'Z')
		repeats = c - 64;
	while (repeats)
	{
		ft_putchar(c);
		repeats--;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	while (*str)
	{
		if (('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z'))
			repeat_alpha(*str);
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
