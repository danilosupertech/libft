#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//char *ft_strtrim(char const *s1, char const *set);

static void	run_case(const char *s1, const char *set, const char *expected)
{
	char	*result = ft_strtrim(s1, set);

	printf("--------------------------------------------------\n");
	printf("Entrada:\n");
	printf("  s1  = \"%s\"\n", s1 ? s1 : "(null)");
	printf("  set = \"%s\"\n", set ? set : "(null)");
	if (!result)
		printf("Saída: (null)\n");
	else
		printf("Saída: \"%s\"\n", result);
	if (expected)
		printf("Esperado: \"%s\"\n", expected);
	printf("\n");
	free(result);
}

int	main(void)
{
	printf("\n========== TESTES ft_strtrim ==========\n\n");

	// Casos normais
	run_case("  42Porto  ", " ", "42Porto");
	run_case("--42--", "-", "42");
	run_case("$$Piscine$$", "$", "Piscine");
	run_case("\t\nHello World\n\t", " \n\t", "Hello World");
	run_case("dannillo", "ln", "danni");

	// Casos limites
	run_case("", "x", "");                 // string vazia
	run_case("xxxx", "x", "");             // tudo removido
	run_case("42", "", "42");              // set vazio
	run_case("abcdef", "xyz", "abcdef");   // nenhum caractere removido

	// Casos com ponteiros nulos
	run_case(NULL, "x", NULL);
	run_case("abc", NULL, NULL);
	run_case(NULL, NULL, NULL);

	printf("=======================================\n\n");
	return (0);
}
