#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		++i;
	if (s1_len == 0 || i == s1_len)
		return (ft_substr(s1, i, 0));
	j = s1_len - 1;
	while (j >= i && ft_strchr(set, s1[j]))
		--j;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
