# 📚 Libft — Funções Implementadas

Este documento lista as funções implementadas na **Libft**, agrupadas por similaridade, com explicações curtas e diretas sobre o que cada uma faz.

---

## 🧠 Manipulação de memória

- **`ft_memset(void *s, int c, size_t n)`** — Preenche os `n` primeiros bytes de `s` com o byte `c`.  
- **`ft_bzero(void *s, size_t n)`** — Zera (`'\0'`) os `n` primeiros bytes de `s`.  
- **`ft_memcpy(void *dest, const void *src, size_t n)`** — Copia `n` bytes de `src` para `dest` (não segura para sobreposição).  
- **`ft_memmove(void *dest, const void *src, size_t n)`** — Copia `n` bytes de `src` para `dest`, mesmo se as áreas se sobrepuserem.  
- **`ft_memchr(const void *s, int c, size_t n)`** — Procura o byte `c` dentro dos `n` primeiros bytes de `s`.  
- **`ft_memcmp(const void *s1, const void *s2, size_t n)`** — Compara `n` bytes de `s1` e `s2`; retorna a diferença entre o primeiro par diferente.  
- **`ft_calloc(size_t count, size_t size)`** — Aloca memória para `count` elementos e zera todos os bytes.  

---

## 🔤 Funções de caracteres

- **`ft_isalpha(int c)`** — Verifica se o caractere é uma letra (A–Z ou a–z).  
- **`ft_isdigit(int c)`** — Verifica se o caractere é um dígito (0–9).  
- **`ft_isalnum(int c)`** — Verifica se o caractere é uma letra ou dígito.  
- **`ft_isascii(int c)`** — Verifica se o caractere pertence à tabela ASCII (0–127).  
- **`ft_isprint(int c)`** — Verifica se o caractere é imprimível (inclui espaço).  
- **`ft_tolower(int c)`** — Converte uma letra maiúscula em minúscula.  
- **`ft_toupper(int c)`** — Converte uma letra minúscula em maiúscula.  

---

## 🧵 Manipulação de strings

- **`ft_strlen(const char *s)`** — Retorna o comprimento da string (sem contar o `'\0'`).  
- **`ft_strchr(const char *s, int c)`** — Retorna ponteiro para a primeira ocorrência de `c` em `s`.  
- **`ft_strrchr(const char *s, int c)`** — Retorna ponteiro para a última ocorrência de `c` em `s`.  
- **`ft_strncmp(const char *s1, const char *s2, size_t n)`** — Compara até `n` caracteres de duas strings.  
- **`ft_strlcpy(char *dst, const char *src, size_t dstsize)`** — Copia `src` para `dst` garantindo terminação e limite de tamanho.  
- **`ft_strlcat(char *dst, const char *src, size_t dstsize)`** — Concatena `src` ao final de `dst`, respeitando o limite do buffer.  
- **`ft_strnstr(const char *haystack, const char *needle, size_t len)`** — Busca a substring `needle` dentro de `haystack`, até `len` caracteres.  
- **`ft_strdup(const char *s)`** — Cria uma nova cópia da string `s` alocando memória.  

---

## 🧩 Manipulação e criação de strings (Libft extra)

- **`ft_substr(char const *s, unsigned int start, size_t len)`** — Cria uma substring de `s` começando em `start` com até `len` caracteres.  
- **`ft_strjoin(char const *s1, char const *s2)`** — Junta duas strings em uma nova string alocada.  
- **`ft_strtrim(char const *s1, char const *set)`** — Remove da string `s1` os caracteres de `set` no início e no fim.  
- **`ft_split(char const *s, char c)`** — Divide a string `s` em várias substrings separadas pelo caractere `c`.  
- **`ft_strmapi(char const *s, char (*f)(unsigned int, char))`** — Cria uma nova string aplicando a função `f` em cada caractere.  
- **`ft_striteri(char *s, void (*f)(unsigned int, char *))`** — Aplica a função `f` em cada caractere da string `s` *in place* (sem criar nova).  

---

## 🔢 Conversão numérica

- **`ft_atoi(const char *str)`** — Converte uma string numérica em um número inteiro.  
- **`ft_itoa(int n)`** — Converte um número inteiro em uma string.  

---

## 🖨️ Funções de saída (file descriptor)

- **`ft_putchar_fd(char c, int fd)`** — Escreve o caractere `c` no descritor de arquivo `fd`.  
- **`ft_putstr_fd(char *s, int fd)`** — Escreve a string `s` no descritor de arquivo `fd`.  
- **`ft_putendl_fd(char *s, int fd)`** — Escreve a string `s` seguida de uma nova linha (`\n`) no `fd`.  
- **`ft_putnbr_fd(int n, int fd)`** — Escreve o número inteiro `n` como texto no descritor `fd`.  

---

✨ **Autor:** [Seu Nome Aqui]  
📦 **Projeto:** Libft — Escola 42  
📄 **Descrição:** Implementação personalizada de funções padrão da linguagem C, para uso em projetos futuros.
