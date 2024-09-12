/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atroi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:54:05 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/11 14:34:42 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 0;
	number = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	if (sign == -1)
		number = -number;
	return (number);
}
