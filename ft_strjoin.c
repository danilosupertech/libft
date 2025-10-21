/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:27:10 by danicort          #+#    #+#             */
/*   Updated: 2025/10/20 17:21:51 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strs1;
	size_t	strs2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	strs1 = ft_strlen(s1);
	strs2 = ft_strlen(s2);
	s3 = (char *)malloc(strs1 + strs2 + 1);
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, strs1);
	ft_memcpy(s3 + strs1, s2, strs2);
	s3[strs1 + strs2] = '\0';
	return (s3);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void){
	char *var = ft_strjoin("danilo","xxx");
	size_t i = 0;

	printf("texto: \"%s\"\n", var);

	while(var[i] != '\0')
	{
	printf("valor[%ld] -> %u\n", i, (unsigned char)var[i]);
		i++;
	}
		free(var);
	return (0);

}*/