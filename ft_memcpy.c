/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:47:57 by danicort          #+#    #+#             */
/*   Updated: 2025/10/17 12:30:17 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char orign[] = "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14";
	char dest[10];

	ft_memcpy(dest, orign, strlen(orign) + 1);
	printf("Origem: %s\n", orign);
	printf("Destino: %s\n", dest);
	return(0);
}*/