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
	int	i;
	
	words = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ' ||str[i] == '\t') && (str[ - 1] != ' ' || str[i - 1] != '\t')
			words++;
		i++;
	}
	// dernier mot
	if (str[i - 1] != ' ' && str[i - 1] != '\t')
		words++;
	return (words);
}

// main à retirer car fonction demandée
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("Nombre de mots : %d\n", count_words(argv[1]));
	return (0);
}
