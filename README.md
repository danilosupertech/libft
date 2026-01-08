<div align="center">

# 📚 LIBFT

### Sua primeira biblioteca em C

![C](https://img.shields.io/badge/language-C-blue.svg)
![Norminette](https://img.shields.io/badge/norminette-passing-brightgreen.svg)
![42 School](https://img.shields.io/badge/42-Porto-000000.svg)
![Status](https://img.shields.io/badge/status-completed-success.svg)

</div>

---

## 📖 Sobre o Projeto

**Libft** é o primeiro projeto da 42 School, onde recriamos diversas funções da biblioteca padrão C (`libc`), além de funções auxiliares úteis para projetos futuros. O objetivo é compreender profundamente como essas funções funcionam, implementando-as manualmente e estabelecendo uma base sólida de programação em C.

Este projeto desenvolve competências fundamentais como:
- 🎯 Gestão de memória dinâmica
- 🔍 Manipulação de strings e caracteres
- 📐 Implementação de algoritmos básicos
- 🧪 Validação e tratamento de edge cases
- 📋 Conformidade com normas de código (Norminette)

---

## 📑 Índice

1. [Funções Implementadas](#-funções-implementadas)
2. [Checklist de Funções](#-checklist-de-funções)
3. [Como Compilar](#-como-compilar)
4. [Como Usar](#-como-usar)
5. [Testes](#-testes)
6. [Norminette](#-norminette)
7. [Estrutura do Projeto](#-estrutura-do-projeto)
8. [Recursos e Referências](#-recursos-e-referências)
9. [Autor](#-autor)

---

## 📚 Funções Implementadas

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

### 🧩 Manipulação e Criação de Strings (Libft Extra)

- **`ft_substr(char const *s, unsigned int start, size_t len)`** — Cria uma substring de `s` começando em `start` com até `len` caracteres.  
- **`ft_strjoin(char const *s1, char const *s2)`** — Junta duas strings em uma nova string alocada.  
- **`ft_strtrim(char const *s1, char const *set)`** — Remove da string `s1` os caracteres de `set` no início e no fim.  
- **`ft_split(char const *s, char c)`** — Divide a string `s` em várias substrings separadas pelo caractere `c`.  
- **`ft_strmapi(char const *s, char (*f)(unsigned int, char))`** — Cria uma nova string aplicando a função `f` em cada caractere.  
- **`ft_striteri(char *s, void (*f)(unsigned int, char *))`** — Aplica a função `f` em cada caractere da string `s` *in place* (sem criar nova).  

### 🔢 Conversão Numérica

- **`ft_atoi(const char *str)`** — Converte uma string numérica em um número inteiro.  
- **`ft_itoa(int n)`** — Converte um número inteiro em uma string.  

### 🖨️ Funções de Saída (File Descriptor)

- **`ft_putchar_fd(char c, int fd)`** — Escreve o caractere `c` no descritor de arquivo `fd`.  
- **`ft_putstr_fd(char *s, int fd)`** — Escreve a string `s` no descritor de arquivo `fd`.  
- **`ft_putendl_fd(char *s, int fd)`** — Escreve a string `s` seguida de uma nova linha (`\n`) no descritor de arquivo `fd`.  
- **`ft_putnbr_fd(int n, int fd)`** — Escreve o número inteiro `n` como texto no descritor de arquivo `fd`.  

---

## ✅ Checklist de Funções

### Parte 1 - Funções da Libc

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
| `ft_putchar_fd` | ✅ | Saída |
| `ft_putstr_fd` | ✅ | Saída |
| `ft_putendl_fd` | ✅ | Saída |
| `ft_putnbr_fd` | ✅ | Saída |

**Total:** 34 funções implementadas ✨

---

## 🛠️ Como Compilar

O projeto inclui um **Makefile** com as seguintes regras:

### Compilar a biblioteca
```bash
make
```
Este comando compila todos os arquivos `.c` e gera a biblioteca estática `libft.a`.

### Limpar arquivos objeto
```bash
make clean
```
Remove todos os arquivos `.o` gerados durante a compilação.

### Limpar tudo
```bash
make fclean
```
Remove os arquivos `.o` e a biblioteca `libft.a`.

### Recompilar do zero
```bash
make re
```
Executa `fclean` seguido de `make`, recompilando tudo novamente.

### Compilar com flags de debug
```bash
make CFLAGS="-Wall -Wextra -Werror -g"
```
Adiciona a flag `-g` para incluir informações de debug (útil para usar com GDB ou Valgrind).

---

## 💻 Como Usar

### 1. Clone o repositório
```bash
git clone https://github.com/danilosupertech/libft.git
cd libft
```

### 2. Compile a biblioteca
```bash
make
```

### 3. Use em seus projetos

Crie um arquivo `main.c` de exemplo:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42!";
    char *dup;
    char *joined;

    // Usando ft_strlen
    printf("Tamanho da string: %zu\n", ft_strlen(str));

    // Usando ft_strdup
    dup = ft_strdup(str);
    printf("String duplicada: %s\n", dup);

    // Usando ft_strjoin
    joined = ft_strjoin(dup, " Welcome!");
    printf("Strings unidas: %s\n", joined);

    free(dup);
    free(joined);
    return 0;
}
```

### 4. Compile seu programa com a libft
```bash
gcc main.c -L. -lft -I. -o my_program
./my_program
```

**Explicação dos flags:**
- `-L.` — Procura bibliotecas no diretório atual
- `-lft` — Linka com a libft (arquivo `libft.a`)
- `-I.` — Inclui o diretório atual para encontrar `libft.h`

---

## 🧪 Testes

Para garantir que todas as funções funcionam corretamente, recomenda-se usar testers da comunidade 42:

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

4. **[xicodomingues/francinette](https://github.com/xicodomingues/francinette)**
   - Ferramenta completa que roda múltiplos testers
   ```bash
   # Instale seguindo as instruções do repositório
   francinette
   ```

### Verificação de Memory Leaks

Use **Valgrind** para verificar vazamentos de memória:

```bash
valgrind --leak-check=full --show-leak-kinds=all ./your_program
```

---

## 📏 Norminette

Todas as funções estão em conformidade com a **Norminette** da 42 School.

### Verificar conformidade

```bash
norminette *.c *.h
```

### Principais regras da Norminette:
- ✅ Máximo de 25 linhas por função
- ✅ Máximo de 80 colunas por linha
- ✅ Máximo de 5 funções por arquivo
- ✅ Sem `for`, permitido apenas `while`
- ✅ Declaração de variáveis no início da função
- ✅ Header obrigatório em todos os arquivos

---

## 📁 Estrutura do Projeto

```
libft/
│
├── Makefile              # Automatiza a compilação
├── libft.h               # Header com protótipos das funções
│
├── ft_*.c                # Implementações das funções (34 arquivos)
│
└── README.md             # Documentação do projeto
```

### Organização dos arquivos:
- **Arquivos `.c`**: Cada função tem seu próprio arquivo (ex: `ft_strlen.c`, `ft_split.c`)
- **Header `libft.h`**: Contém todos os protótipos e includes necessários
- **Makefile**: Compila automaticamente todos os arquivos e gera `libft.a`

---

## 📖 Recursos e Referências

### Man Pages
Consulte as man pages para entender o comportamento original das funções:
```bash
man memset
man strlen
man atoi
```

### Recursos de Estudo
- 📚 [C Reference - cppreference.com](https://en.cppreference.com/w/c)
- 📘 [The C Programming Language (K&R)](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628)
- 🎓 [42 Docs - Libft Guide](https://harm-smits.github.io/42docs/projects/libft)
- 💡 [Notion - Libft Study Guide](https://www.notion.so/Libft-Guide)

### Repositórios de Referência
- [42 Born2Code - Libft](https://github.com/Binary-Hackers/42_Subjects)
- [Exemplos de implementações da comunidade](https://github.com/topics/42-libft)

---

## 👨‍💻 Autor

<div align="center">

**Danilo Goncalves**  
*Estudante da 42 Porto*

[![GitHub](https://img.shields.io/badge/GitHub-danilosupertech-181717?style=flat&logo=github)](https://github.com/danilosupertech)
[![42 Intra](https://img.shields.io/badge/42-danicort-000000?style=flat&logo=42)](https://profile.intra.42.fr/users/danicort)

</div>

---

<div align="center">

### ⭐ Se este projeto foi útil para você, considere dar uma estrela!

**Libft** | Projeto da [42 School](https://www.42porto.com/) | 2025

</div>
