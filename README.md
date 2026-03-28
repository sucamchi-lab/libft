*Este proyecto ha sido creado como parte del curriculo de 42 por scamlett.*

# libft

## Descripcion
`libft` es una libreria en C que reimplementa funciones base de `libc` y añade utilidades para strings, memoria, escritura en file descriptor y manejo de listas enlazadas.

Su objetivo es disponer de una base reutilizable para los siguientes proyectos del cursus, con codigo propio, legible y compatible con la norma de 42.

## Instrucciones
Compilacion de la libreria:

```bash
make
```

Limpieza de objetos:

```bash
make clean
```

Limpieza completa (objetos + libreria):

```bash
make fclean
```

Recompilacion completa:

```bash
make re
```

La salida del proyecto es el archivo `libft.a` en la raiz del repositorio.

## Descripcion detallada de la libreria
La libreria incluye:

1. Funciones de caracteres y conversion (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`).
2. Funciones de memoria (`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`).
3. Funciones de cadenas (`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`).
4. Funciones adicionales (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`).
5. Salida a descriptor de archivo (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
6. Listas enlazadas con `t_list` (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

## Recursos

1. Manuales del sistema para funciones estandar de C.
2. The Open Group Base Specifications para comportamiento de funciones POSIX.
3. Documentacion de 42 sobre norma y criterios de evaluacion.

Todo el codigo final se verifico con `make` y `norminette`.

