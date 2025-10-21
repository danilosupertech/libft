/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicort <danicort@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:48:57 by danicort          #+#    #+#             */
/*   Updated: 2025/10/17 17:05:11 by danicort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_size(long num)
{
	size_t	size;

	size = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		++size;
		num = num / 10;
	}
	return (size);
}

static void	ft_strrev(char *str, size_t index, size_t i)
{
	size_t	start;
	size_t	end;
	char	temp;

	end = i - 1;
	start = index;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		++start;
		--end;
	}
}

static void	get_str(char *str, size_t index, long num)
{
	size_t	i;

	i = index;
	if (num == 0)
	{
		str[0] = '0';
		++i;
	}
	else
	{
		while (num != 0)
		{
			str[i] = (num % 10) + '0';
			num /= 10;
			++i;
		}
	}
	str[i] = '\0';
	ft_strrev(str, index, i);
}

char	*ft_itoa(int n)
{
	size_t	num_size;
	size_t	start_index;
	long	num;
	char	*str;

	num = n;
	start_index = 0;
	num_size = get_num_size(num);
	if (num < 0)
	{
		start_index = 1;
		++num_size;
		num = -num;
	}
	str = (char *)malloc(num_size + 1);
	if (!str)
		return (NULL);
	if (start_index == 1)
		str[0] = '-';
	get_str(str, start_index, num);
	return (str);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str1 = ft_itoa(123);    // "123"
	char *str2 = ft_itoa(-456);   // "-456"
	char *str3 = ft_itoa(0);      // "0"

	printf("%s\n%s\n%s\n", str1, str2, str3);

	free(str1);
	free(str2);
	free(str3);

	return (0);
}*/