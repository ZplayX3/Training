/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:50:20 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/10 15:54:31 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_words(char *str)
{
	int	words;
	
	words = 0;
	while (*str)
	{
		if (*str == ' ' && str - 1 != ' ')
			words++;
	}
}