/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:00:25 by danicort          #+#    #+#             */
/*   Updated: 2025/10/21 09:56:29 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ret;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ret = NULL;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		--len;
	}
	return (ret);
}
