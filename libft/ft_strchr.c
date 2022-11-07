/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:11:13 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/07 11:33:16 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char *s = "aaaaaaaaacaaaa";
	char tofind = 'a';
	char *a = ft_strchr(s, tofind);
	char *b = strchr(s, tofind);

	printf("Endereço da memória que *a aponta: %p\n", a);
	printf("Conteúdo da memória: %c\n", *a);
	printf("Endereço da memória que *b aponta: %p\n", b);
	printf("Conteúdo da memória: %c\n", *b);
	return 0;
}*/
