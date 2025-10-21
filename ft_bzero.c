/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:47:20 by danicort          #+#    #+#             */
/*   Updated: 2025/10/15 18:20:04 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	ft_memset(ptr, 0, n);
}
/*#include <stdio.h>

int	main(void)
{
	char	buffer[10] = "abcdefghi";
	int		i;

	i = 0;
	ft_bzero(buffer, 4);
	while (i < sizeof(buffer))
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/