#include <stdio.h>
#include <string.h>   // apenas para comparação (strchr)
#include <stdlib.h>
#include "libft.h"

static void	run_case(const char *s, int c)
{
	char *ft_res = ft_strchr(s, c);
	char *libc_res = strchr(s, c);

	int pass = (ft_res == libc_res);
	if (!pass && ft_res && libc_res)
		pass = (strcmp(ft_res, libc_res) == 0);

	printf("ft_strchr(\"%s\", '%c') -> %s | expected: %s [%s]\n",
		s,
		(char)c,
		ft_res ? ft_res : "(null)",
		libc_res ? libc_res : "(null)",
		pass ? "PASS" : "FAIL");
}

int	main(void)
{
	printf("=== Testes para ft_strchr ===\n\n");

	/* 1️⃣ Casos básicos */
	run_case("42Porto", '4');    // 1º caractere
	run_case("42Porto", 'P');    // no meio
	run_case("42Porto", 'o');    // aparece mais de uma vez
	run_case("42Porto", 't');    // único caractere
	run_case("42Porto", 'z');    // não existe

	/* 2️⃣ Casos com terminador NUL */
	run_case("42Porto", '\0');   // strchr deve retornar ponteiro pro '\0'

	/* 3️⃣ Casos de string vazia */
	run_case("", 'x');           // não encontra nada
	run_case("", '\0');          // deve retornar endereço do terminador

	/* 4️⃣ Casos com caracteres repetidos */
	run_case("aaaaa", 'a');      // primeira ocorrência
	run_case("banana", 'n');     // repetidos

	/* 5️⃣ Casos com caracteres não-ASCII */
	run_case("ola", 'a');        // multibyte — comportamento dependente de locale

	/* 6️⃣ Ponteiro nulo */
	printf("\n=== Testes de robustez ===\n");
	char *res = ft_strchr(NULL, 'a');
	printf("ft_strchr(NULL, 'a') -> %s [esperado: comportamento indefinido]\n",
	       res ? "algum ponteiro" : "(null)");

	printf("\n=== Fim dos testes ===\n");
	return (0);
}
