#include "libft.h"
 #include <stdio.h>
// #include <stdlib.h>

int main(void) {
    char *p = ft_calloc(3, 4);
    if (!p) return 1;
    p[0] = 'T';
    p[1] = 'N';
    printf("%d %d %d\n", p[0], p[1], p[2]); /* espera 0 0 0 */
    free(p);
    return 0;
}

// int main(void)
// {
// 	printf("é ascii --> %d\n",ft_isascii(-127));
// 	return(0);
// }

// int	main(void)
// {
// 	char *str1 = ft_itoa(123);    // "123"
// 	char *str2 = ft_itoa(-456);   // "-456"
// 	char *str3 = ft_itoa(0);      // "0"

// 	printf("%s\n%s\n%s\n", str1, str2, str3);

// 	free(str1);
// 	free(str2);
// 	free(str3);

// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>

// // Assumindo que você tenha implementado ft_strlcat
// size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	char dst[15] = "Hello ";
// 	const char *src = "World!";

// 	size_t ret = ft_strlcat(dst, src, 10);
// 	printf("Resultado: '%s'\n", dst);
// 	printf("Tamanho total que tentou criar: %zu\n", ret);

// 	return (0);
// // }

// #include "libft.h"
// #include <stdio.h>

// int main() {
//     char *haystack = "hello world";
//     char *needle = "world";
//     char *result = ft_strnstr(haystack, needle, 6);
//     char *res2 = ft_strnstr(haystack, needle, 11);
//     printf("Resultado: %s\n", result ? result : "NULL");
	// Imprime "NULL" (não encontrado em 6 caracteres)
//     printf("Resultado: %s\n", res2 ? res2 : "NULL");
//     return (0);
// }

//  #include "libft.h"
//  #include <stdio.h>

// int main() {
//     char dst[5] = "hel";
//     char *src = "lo world";
//     size_t result = ft_strlcpy(dst, src, 5);
//     printf("Resultado: %s, Comprimento: %zu\n", dst, result);
	// Imprime "lo w" e comprimento de "lo world"
//     return (0);
// }

// #include <stdio.h>

// // Declaração da sua função
// int	ft_atoi(char *str);

// int	main(void)
// {
// 	char *tests[] = {
// 		"12345",
// 		"-12345",
// 		"   +42",
// 		"   -42abc",
// 		"abc123",
// 		"  \t\n 987",
// 		"0",
// 		"-0",
// 		"+0",
// 		"2147483647",    // maior int
// 		"-2147483648",   // menor int
// 		NULL
// 	};

// 	int i = 0;
// 	while (tests[i] != NULL)
// 	{
// 		printf("ft_atoi(\"%s\") = %d\n", tests[i], ft_atoi(tests[i]));
// 		++i;
// 	}
// 	return (0);
// }


// int main() {
//     char *s = "hello world";
//     char *result = ft_strrchr(s, 'o');
//     printf("Última 'o' em: %s\n", result); // Imprime "orld"
//     return 0;
// }

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const char *original = "Hello, 42 Porto!";
// 	char *sub;

// 	// Teste 1: substring do meio
// 	sub = ft_substr(original, 7, 2); // Esperado: "42"
// 	printf("Teste 1: '%s'\n", sub);
// 	free(sub);

// 	// Teste 2: substring do início
// 	sub = ft_substr(original, 0, 5); // Esperado: "Hello"
// 	printf("Teste 2: '%s'\n", sub);
// 	free(sub);

// 	// Teste 3: substring além do tamanho (start muito alto)
// 	sub = ft_substr(original, 50, 5); // Esperado: ""
// 	printf("Teste 3: '%s'\n", sub);
// 	free(sub);

// 	// Teste 4: substring com len maior que o restante da string
// 	sub = ft_substr(original, 7, 100); // Esperado: "42 Porto!"
// 	printf("Teste 4: '%s'\n", sub);
// 	free(sub);

// 	return (0);
// }



