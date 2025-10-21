/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:18:58 by danicort          #+#    #+#             */
/*   Updated: 2025/10/19 09:07:07 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// preencher um bloco de memoria com um valor especifico.
void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *)ptr;
	val = (unsigned char)value;
	i = 0;
	while (i < len)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char buffer[10] = "abcdefghi";
	char *ptr;
	ptr = buffer;

	ft_memset(ptr, 'X', 5);
	while (*ptr != '\0')
	{
		printf("%c\n", *ptr);
		ptr++;
	}
	return (0);
}*/