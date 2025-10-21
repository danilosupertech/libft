#include <stdio.h>
#include <string.h>   // apenas para comparar com memset (podes remover se quiser)
#include "libft.h"

int	main(void)
{
	char	buf1[10];
	char	buf2[10];
	int		i;

	// Preenche os dois buffers com letras
	for (i = 0; i < 10; i++)
	{
		buf1[i] = 'A' + i;
		buf2[i] = 'A' + i;
	}

	// Usa tua função
	ft_bzero(buf1 + 3, 4);

	// Usa ft_memset (que deve ter comportamento idêntico)
	ft_memset(buf2 + 3, 0, 4);

	// Mostra ambos os resultados
	printf("ft_bzero -> ");
	for (i = 0; i < 10; i++)
		printf("%02X ", (unsigned char)buf1[i]);
	printf("\n");

	printf("ft_memset -> ");
	for (i = 0; i < 10; i++)
		printf("%02X ", (unsigned char)buf2[i]);
	printf("\n");

	// Verifica se o comportamento é igual
	for (i = 0; i < 10; i++)
	{
		if (buf1[i] != buf2[i])
		{
			printf("❌ Diferença em posição %d\n", i);
			return (1);
		}
	}
	printf("✅ ft_bzero comporta-se igual a ft_memset(…, 0, …)\n");
	return (0);
}