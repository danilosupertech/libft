/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:10:00 by danicort          #+#    #+#             */
/*   Updated: 2025/10/18 22:26:37 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include "libft.h"

#ifndef SIZE_MAX
# define SIZE_MAX ((size_t)-1)
#endif

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*mem;

	if (count == 0 || size == 0)
	{
		mem = malloc(1);
		if (!mem)
			return (NULL);
		((unsigned char *)mem)[0] = 0;
		return (mem);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}
