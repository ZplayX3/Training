/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:57:20 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 14:09:22 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	len = ft_strlen(argv[1]);
	while (len >= 0)
	{
		ft_putchar(argv[1][len]);
		len--;
	}
	ft_putchar('\n');
	return (0);
}
