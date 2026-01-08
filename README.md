<div align="center">

# 📚 LIBFT

### Your very first own library

*A collection of essential C functions recreated from scratch*

[![42 School](https://img.shields.io/badge/42-Porto-000000?style=flat&logo=42&logoColor=white)](https://www.42porto.com/)
[![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=flat)](https://github.com/42School/norminette)
[![Language](https://img.shields.io/badge/Language-C-blue?style=flat&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))

</div>

---

## 📑 Índice

- [📖 Sobre o Projeto](#-sobre-o-projeto)
- [✨ Funções Implementadas](#-funções-implementadas)
  - [🧠 Manipulação de Memória](#-manipulação-de-memória)
  - [🔤 Funções de Caracteres](#-funções-de-caracteres)
  - [🧵 Manipulação de Strings](#-manipulação-de-strings)
  - [🧩 Manipulação e Criação de Strings](#-manipulação-e-criação-de-strings)
  - [🔢 Conversão Numérica](#-conversão-numérica)
  - [🖨️ Funções de Saída](#-funções-de-saída)
- [📋 Checklist de Funções](#-checklist-de-funções)
- [🔨 Como Compilar](#-como-compilar)
- [💡 Como Usar](#-como-usar)
- [🧪 Testes](#-testes)
- [📏 Norminette](#-norminette)
- [📂 Estrutura do Projeto](#-estrutura-do-projeto)
- [📚 Recursos e Referências](#-recursos-e-referências)
- [👤 Autor](#-autor)

---

## 📖 Sobre o Projeto

**Libft** é o primeiro projeto da **Escola 42** onde os alunos devem recriar funções essenciais da biblioteca padrão C (`libc`), além de implementar funções auxiliares úteis para projetos futuros.

### 🎯 Objetivos de Aprendizado

- Compreender profundamente o funcionamento de funções básicas em C
- Aprender manipulação de memória e ponteiros
- Desenvolver habilidades de debugging e gestão de edge cases
- Criar código limpo, eficiente e conforme a **Norminette** da 42
- Construir uma biblioteca reutilizável para projetos futuros

### 🌟 Por que é importante?

Esta biblioteca será a base para todos os projetos futuros na 42. Cada função foi cuidadosamente implementada e testada para garantir robustez e conformidade com os padrões da escola.

---

## ✨ Funções Implementadas

Funções organizadas por similaridade, com explicações curtas e diretas sobre o que cada uma faz.

### 🧠 Manipulação de Memória

- **`ft_memset(void *s, int c, size_t n)`** — Preenche os n primeiros bytes de `s` com o byte `c`.  
- **`ft_bzero(void *s, size_t n)`** — Zera (`'\0'`) os n primeiros bytes de `s`.  
- **`ft_memcpy(void *dest, const void *src, size_t n)`** — Copia n bytes de `src` para `dest`. Não é seguro se as áreas se sobrepuserem.  
- **`ft_memmove(void *dest, const void *src, size_t n)`** — Copia n bytes de `src` para `dest`. Se as áreas se sobrepuserem, a função ajusta a direção da cópia para evitar corromper os dados.  
- **`ft_memchr(const void *s, int c, size_t n)`** — Procura o byte `c` dentro dos n primeiros bytes de `s` e retorna um ponteiro para a primeira ocorrência.  
- **`ft_memcmp(const void *s1, const void *s2, size_t n)`** — Compara n bytes de `s1` e `s2` e retorna a diferença entre o primeiro par de bytes diferente.  
- **`ft_calloc(size_t count, size_t size)`** — Aloca memória para `count` elementos de `size` bytes cada e zera todos os bytes.  

### 🔤 Funções de Caracteres

- **`ft_isalpha(int c)`** — Verifica se o caractere é uma letra (A–Z ou a–z).  
- **`ft_isdigit(int c)`** — Verifica se o caractere é um dígito (0–9).  
- **`ft_isalnum(int c)`** — Verifica se o caractere é letra ou dígito.  
- **`ft_isascii(int c)`** — Verifica se o caractere pertence à tabela ASCII (0–127).  
- **`ft_isprint(int c)`** — Verifica se o caractere é imprimível (inclui espaço).  
- **`ft_tolower(int c)`** — Converte uma letra maiúscula em minúscula.  
- **`ft_toupper(int c)`** — Converte uma letra minúscula em maiúscula.  

### 🧵 Manipulação de Strings

- **`ft_strlen(const char *s)`** — Retorna o comprimento da string (sem contar o `'\0'`).  
- **`ft_strchr(const char *s, int c)`** — Retorna ponteiro para a primeira ocorrência de `c` em `s`.  
- **`ft_strrchr(const char *s, int c)`** — Retorna ponteiro para a última ocorrência de `c` em `s`.  
- **`ft_strncmp(const char *s1, const char *s2, size_t n)`** — Compara até n caracteres de duas strings.  
- **`ft_strlcpy(char *dst, const char *src, size_t dstsize)`** — Copia `src` para `dst` garantindo terminação e limite de tamanho.  
- **`ft_strlcat(char *dst, const char *src, size_t dstsize)`** — Concatena `src` ao final de `dst`, respeitando o limite do buffer.  
- **`ft_strnstr(const char *haystack, const char *needle, size_t len)`** — Busca a substring `needle` dentro de `haystack`, até `len` caracteres.  
- **`ft_strdup(const char *s)`** — Cria uma nova cópia da string `s`, alocando memória.  

### 🧩 Manipulação e Criação de Strings

- **`ft_substr(char const *s, unsigned int start, size_t len)`** — Cria uma substring de `s` começando em `start` com até `len` caracteres.  
- **`ft_strjoin(char const *s1, char const *s2)`** — Junta duas strings em uma nova string alocada.  
- **`ft_strtrim(char const *s1, char const *set)`** — Remove da string `s1` os caracteres de `set` no início e no fim.  
- **`ft_split(char const *s, char c)`** — Divide a string `s` em várias substrings separadas pelo caractere `c`.  
- **`ft_strmapi(char const *s, char (*f)(unsigned int, char))`** — Cria uma nova string aplicando a função `f` em cada caractere.  
- **`ft_striteri(char *s, void (*f)(unsigned int, char *))`** — Aplica a função `f` em cada caractere da string `s` *in place* (sem criar nova).  

### 🔢 Conversão Numérica

- **`ft_atoi(const char *str)`** — Converte uma string numérica em um número inteiro.  
- **`ft_itoa(int n)`** — Converte um número inteiro em uma string.  

### 🖨️ Funções de Saída

- **`ft_putchar_fd(char c, int fd)`** — Escreve o caractere `c` no descritor de arquivo `fd`.  
- **`ft_putstr_fd(char *s, int fd)`** — Escreve a string `s` no descritor de arquivo `fd`.  
- **`ft_putendl_fd(char *s, int fd)`** — Escreve a string `s` seguida de uma nova linha (`\n`) no descritor de arquivo `fd`.  
- **`ft_putnbr_fd(int n, int fd)`** — Escreve o número inteiro `n` como texto no descritor de arquivo `fd`.  

---

## 📋 Checklist de Funções

### Parte 1 - Funções da libc

| Função | Status | Categoria |
|--------|--------|-----------|
| `ft_isalpha` | ✅ | Caracteres |
| `ft_isdigit` | ✅ | Caracteres |
| `ft_isalnum` | ✅ | Caracteres |
| `ft_isascii` | ✅ | Caracteres |
| `ft_isprint` | ✅ | Caracteres |
| `ft_strlen` | ✅ | Strings |
| `ft_memset` | ✅ | Memória |
| `ft_bzero` | ✅ | Memória |
| `ft_memcpy` | ✅ | Memória |
| `ft_memmove` | ✅ | Memória |
| `ft_strlcpy` | ✅ | Strings |
| `ft_strlcat` | ✅ | Strings |
| `ft_toupper` | ✅ | Caracteres |
| `ft_tolower` | ✅ | Caracteres |
| `ft_strchr` | ✅ | Strings |
| `ft_strrchr` | ✅ | Strings |
| `ft_strncmp` | ✅ | Strings |
| `ft_memchr` | ✅ | Memória |
| `ft_memcmp` | ✅ | Memória |
| `ft_strnstr` | ✅ | Strings |
| `ft_atoi` | ✅ | Conversão |
| `ft_calloc` | ✅ | Memória |
| `ft_strdup` | ✅ | Strings |

### Parte 2 - Funções Adicionais

| Função | Status | Categoria |
|--------|--------|-----------|
| `ft_substr` | ✅ | Strings |
| `ft_strjoin` | ✅ | Strings |
| `ft_strtrim` | ✅ | Strings |
| `ft_split` | ✅ | Strings |
| `ft_itoa` | ✅ | Conversão |
| `ft_strmapi` | ✅ | Strings |
| `ft_striteri` | ✅ | Strings |
| `ft_putchar_fd` | ✅ | Output |
| `ft_putstr_fd` | ✅ | Output |
| `ft_putendl_fd` | ✅ | Output |
| `ft_putnbr_fd` | ✅ | Output |

**Total:** 34 funções ✅

---

## 🔨 Como Compilar

A biblioteca utiliza um **Makefile** para facilitar a compilação. Comandos disponíveis:

### Compilar a biblioteca
```bash
make
```
Compila todos os arquivos `.c` e gera a biblioteca estática `libft.a`.

### Limpar arquivos objeto
```bash
make clean
```
Remove todos os arquivos `.o` gerados durante a compilação.

### Limpar tudo
```bash
make fclean
```
Remove os arquivos objeto e a biblioteca `libft.a`.

### Recompilar do zero
```bash
make re
```
Executa `fclean` e depois `all`, recompilando tudo do zero.

### Compilação com flags de debug
```bash
make CFLAGS="-Wall -Wextra -Werror -g"
```
Adiciona a flag `-g` para incluir símbolos de debug (útil com `gdb` ou `lldb`).

---

## 💡 Como Usar

### 1. Clone o repositório
```bash
git clone https://github.com/username/libft.git
cd libft
```

### 2. Compile a biblioteca
```bash
make
```

### 3. Use em seu projeto

**Exemplo de código (`main.c`):**
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42!";
    char *dup;
    
    // Usando ft_strlen
    printf("Tamanho: %zu\n", ft_strlen(str));
    
    // Usando ft_strdup
    dup = ft_strdup(str);
    printf("Duplicada: %s\n", dup);
    free(dup);
    
    // Usando ft_split
    char **words = ft_split("Um dois tres", ' ');
    for (int i = 0; words[i]; i++)
    {
        printf("Palavra %d: %s\n", i, words[i]);
        free(words[i]);
    }
    free(words);
    
    return (0);
}
```

**Compilar com a libft:**
```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o programa
```

Ou especificando o arquivo da biblioteca:
```bash
gcc -Wall -Wextra -Werror main.c libft.a -o programa
```

**Executar:**
```bash
./programa
```

---

## 🧪 Testes

Para garantir que todas as funções estão funcionando corretamente, recomenda-se o uso de testers externos:

### Testers Populares

1. **[Tripouille/libftTester](https://github.com/Tripouille/libftTester)**
   ```bash
   git clone https://github.com/Tripouille/libftTester.git
   cd libftTester
   make
   ```

2. **[alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)**
   ```bash
   git clone https://github.com/alelievr/libft-unit-test.git
   cd libft-unit-test
   make f
   ```

3. **[jtoty/Libftest](https://github.com/jtoty/Libftest)**
   ```bash
   git clone https://github.com/jtoty/Libftest.git
   cd Libftest
   ./grademe.sh
   ```

### Testes Manuais

Você também pode criar seus próprios testes simples:
```bash
gcc -Wall -Wextra -Werror seu_teste.c libft.a -o teste
./teste
```

---

## 📏 Norminette

Todas as funções desta biblioteca estão em conformidade com a **Norminette** da 42.

### Verificar conformidade
```bash
norminette *.c *.h
```

### Instalar Norminette
```bash
pip3 install norminette
```
**Nota:** Requer Python 3.

**Normas seguidas:**
- Máximo de 25 linhas por função
- Máximo de 5 funções por arquivo
- Indentação com tabs
- Nomes de variáveis e funções em snake_case
- Sem comentários C++ (`//`)
- Header padrão da 42

---

## 📂 Estrutura do Projeto

```
libft/
├── Makefile           # Arquivo de compilação
├── libft.h            # Header com protótipos das funções
├── README.md          # Este arquivo
│
├── ft_*.c             # Implementação das funções
│
└── libft.a            # Biblioteca compilada (gerada após make)
```

### Organização dos Arquivos

Todos os arquivos `.c` estão na raiz do projeto, cada um contendo a implementação de uma função específica. O header `libft.h` centraliza todos os protótipos e definições necessárias.

---

## 📚 Recursos e Referências

### Man Pages
As seguintes man pages foram consultadas durante o desenvolvimento:
- `man memset`, `man bzero`, `man memcpy`, `man memmove`
- `man strlen`, `man strchr`, `man strrchr`, `man strncmp`
- `man atoi`, `man calloc`, `man strdup`
- `man isalpha`, `man isdigit`, `man toupper`, `man tolower`

### Links Úteis

- [42 Cursus](https://github.com/42School/42-Subjects)
- [C Programming Language Reference](https://en.cppreference.com/w/c)
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/)
- [Norminette Documentation](https://github.com/42School/norminette)

### Conceitos Importantes

- **Ponteiros e Memória:** Compreensão profunda de alocação dinâmica e manipulação de ponteiros
- **Strings em C:** Terminação nula, cópia segura e manipulação
- **Buffer Overflow:** Prevenção e boas práticas
- **File Descriptors:** stdin (0), stdout (1), stderr (2)

---

## 👤 Autor

<div align="center">

**Danilo Goncalves** (danicort)

[![42 Profile](https://img.shields.io/badge/42-Profile-000000?style=flat&logo=42&logoColor=white)](https://profile.intra.42.fr/users/danicort)
[![GitHub](https://img.shields.io/badge/GitHub-danilosupertech-181717?style=flat&logo=github)](https://github.com/danilosupertech)

📦 **Projeto:** Libft  
🏫 **Escola:** 42 Porto  
📅 **Ano:** 2025  

---

### 📄 Licença

Este projeto é de código aberto para fins educacionais da 42 School. Sinta-se livre para estudar e aprender, mas lembre-se das políticas de plágio da 42.

---

<div align="center">

*Feito com ❤️ e muito ☕ na 42 Porto*

**[⬆ Voltar ao topo](#-libft)**

</div>

</div>
