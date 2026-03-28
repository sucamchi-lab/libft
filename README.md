# libft

Biblioteca personal de funciones en C.

## Itinerario recomendado

1. Preparación del entorno.
- Ejecuta `make` y `make bonus` para validar compilacion base.
- Trabaja siempre con `-Wall -Wextra -Werror` y sin variables globales.

2. Parte 1 libc (sin malloc)
- Caracteres: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- Memoria: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`.
- Numerico: `ft_atoi`.

3. Parte 1 libc (con malloc)
- `ft_calloc`, `ft_strdup`.

4. Parte 2 adicional
- Empieza por las mas simples: `ft_substr`, `ft_strjoin`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`.
- Continúa con `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_putnbr_fd`.

5. Intentar bonus
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

6. Cierre antes de defensa
- Revisa norma en todos los archivos.
- Verifica ausencia de fugas.
- Haz pruebas manuales de casos borde: `NULL`, strings vacias, longitudes 0, solapamiento en `memmove`, `INT_MIN` en `itoa` y `putnbr_fd`.

## Archivos base incluidos

- `Makefile` con reglas `all`, `clean`, `fclean`, `re`, `bonus`.
- `libft.h` con todos los prototipos obligatorios.
- Stubs de todas las funciones en archivos `.c` para que el proyecto compile desde el inicio.

## Flujo sugerido por bloque

1. Implementa 3 a 5 funciones.
2. Compila con `make`.
3. Ejecuta tus tests locales.
4. Refactoriza solo si mantiene norma y claridad.
