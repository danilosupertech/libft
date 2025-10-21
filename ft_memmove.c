/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:35:54 by danicort          #+#    #+#             */
/*   Updated: 2025/10/14 18:15:25 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "ABCDEFGHIJ";
	char	str2[] = "ABCDEFGHIJ";

	printf("Antes do memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	// Testando cópia com sobreposição
	// Isso copia 5 bytes de str1[0] para str1[1]
	// Com memcpy, isso pode corromper
	ft_memmove(str1 + 1, str1, 5); // seguro
	memmove(str2 + 1, str2, 5);    // função da biblioteca, para comparação

	printf("\nDepois do ft_memmove:\n");
	printf("str1 (ft_memmove): %s\n", str1);
	printf("str2 (memmove):    %s\n", str2);

	return (0);
}*/