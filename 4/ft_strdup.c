/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlachma <trlachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:36:22 by trlachma          #+#    #+#             */
/*   Updated: 2024/09/12 12:56:21 by trlachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	
	if (src == NULL)
		return (NULL);
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*original = "Hello, World!";
	char	*dup1;
	char	*dup2;
	int		result;

	dup1 = ft_strdup(original);
	dup2 = strdup(original);

	if (dup1 == NULL || dup2 == NULL)
	{
		fprintf(stderr, "Erreur d'allocation memoire\n");
		return (1);
	}
	result = strcmp(dup1, dup2);
	if (result == 0)
		printf("Les chaines sont identiques.\n");
	else
		printf("Les chaines sont differentes\n");

	if (dup1 != dup2)
		printf("Les chaines sont stockees a des adresses differentes\n");
	else
		printf("Les chaines sont stockees a la meme adresse\b");

	free(dup1);
	free(dup2);

	return (0);
}