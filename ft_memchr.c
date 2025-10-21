/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:02:42 by danicort          #+#    #+#             */
/*   Updated: 2025/10/17 12:29:59 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;
	char			*str;

	ch = c;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buf[5] = "hlle";
	//void *p = memchr(buf, 'e', sizeof(buf));
		// Procura 'e' nos 5 primeiros bytes

	void *x = ft_memchr(buf, 'e', sizeof(buf));

	size_t pos = (unsigned char *)x - (unsigned char *)buf;
	printf("Encontrado em: %ld\n", pos); // Imprime a posicao

	return (0);
}    */