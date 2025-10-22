/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:00:25 by danicort          #+#    #+#             */
/*   Updated: 2025/10/21 22:23:55 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		ch;

	ch = (char)c;
	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
