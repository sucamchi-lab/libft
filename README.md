_Este proyecto ha sido creado como parte del currículo de 42 por scamlett._

# libft

## Descripcion

`libft` es una librería en C que reimplementa funciones base de `libc` y añade utilidades para strings, memoria, escritura en file descriptor (fd) y listas enlazadas.

Su objetivo es disponer de una librería personal y reutilizable para los siguientes proyectos del cursus, con código propio, legible y compatible con la norma.

He decidido redactar este README en español para poder explicar la funcionalidad del código y de cada función de la forma más clara y natural posible. Así, cualquier persona que necesite una explicación detallada podrá comprenderla fácilmente. Además, la comunicación habitual entre peers en 42 Málaga suele ser en español, lo que facilita el intercambio de información y la colaboración.

## Instrucciones

Compilación de la libreria:

```bash
make
```

Limpieza de objetos:

```bash
make clean
```

Limpieza completa (objetos + librería):

```bash
make fclean
```

Recompilación completa:

```bash
make re
```

La salida del proyecto es el archivo `libft.a` en la raíz del repositorio.

## Recursos

1. Manuales del sistema para funciones estandar de C (glibc).
2. PDF oficial de 42 con la norma y criterios de evaluacion del proyecto libft.
3. https://man7.org/linux/man-pages/index.html (manual online de Linux)
4. Se ha hecho un uso limitado y responsable de la IA para editar este README.md, refactorizar líneas de código en acorde con la norma y DRY (Don't Repeat Yourself) y para aclarar dudas relacionadas con la implementación y funcionalidad de los archivos .c

Todo el código final se ha verificado con `make` y `norminette`.

# 📚 Documentación Completa de Libft

## 📖 Índice de Contenidos

1. [Introducción](#introducción)
2. [Funciones de Libc ](#1-funciones-de-libc)
3. [Funciones Adicionales](#2-funciones-adicionales)
4. [Listas Enlazadas](#3-listas-enlazadas)
5. [Conceptos Clave](#conceptos-clave)

---

## Introducción

Esta biblioteca contiene **43 funciones** en total, algunas de cuáles reimplementan funciones estándar de C, más algunas funciones adicionales útiles para proyectos futuros.

## 1. Funciones de Libc

1. `ft_isalpha.c`
2. `ft_isdigit.c`
3. `ft_isalnum.c`
4. `ft_isascii.c`
5. `ft_isprint.c`
6. `ft_strlen.c`
7. `ft_memset.c`
8. `ft_bzero.c`
9. `ft_memcpy.c`
10. `ft_memmove.c`
11. `ft_strlcpy.c`
12. `ft_strlcat.c`
13. `ft_toupper.c`
14. `ft_tolower.c`
15. `ft_strchr.c`
16. `ft_strrchr.c`
17. `ft_strncmp.c`
18. `ft_memchr.c`
19. `ft_memcmp.c`
20. `ft_strnstr.c`
21. `ft_atoi.c`
22. `ft_calloc.c`
23. `ft_strdup.c`

## 2. Funciones Adicionales

1. `ft_substr.c`
2. `ft_strjoin.c`
3. `ft_strtrim.c`
4. `ft_split.c`
5. `ft_itoa.c`
6. `ft_strmapi.c`
7. `ft_striteri.c`
8. `ft_putchar_fd.c`
9. `ft_putstr_fd.c`
10. `ft_putendl_fd.c`
11. `ft_putnbr_fd.c`

## 3. Listas Enlazadas

1. `ft_lstnew.c`
2. `ft_lstadd_front.c`
3. `ft_lstsize.c`
4. `ft_lstlast.c`
5. `ft_lstadd_back.c`
6. `ft_lstdelone.c`
7. `ft_lstclear.c`
8. `ft_lstiter.c`
9. `ft_lstmap.c`

### A. Funciones de Clasificación de Caracteres

Estas funciones verifican propiedades de caracteres examinando sus valores ASCII.

### 🔹 `ft_isalpha`

**Archivo:** `ft_isalpha.c`

**¿Qué hace?**  
Verifica si un carácter es una letra del alfabeto (A-Z o a-z).

**¿Cómo funciona el código?**

```c
int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}
```

- Comprueba si `c` está en el rango ASCII de 'A' a 'Z' (65-90)
- O si está en el rango de 'a' a 'z' (97-122)
- Devuelve 1 (verdadero) si es una letra, 0 en caso contrario

**Ejemplo:**

- `ft_isalpha('A')` → devuelve 1
- `ft_isalpha('5')` → devuelve 0

---

### 🔹 `ft_isdigit`

**Archivo:** `ft_isdigit.c`

**¿Qué hace?**  
Verifica si un carácter es un dígito numérico (0-9).

**¿Cómo funciona el código?**

```c
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
```

- Comprueba si `c` está entre '0' (ASCII 48) y '9' (ASCII 57)
- Devuelve 1 si es un dígito, 0 si no lo es

**Ejemplo:**

- `ft_isdigit('7')` → devuelve 1
- `ft_isdigit('a')` → devuelve 0

---

### 🔹 `ft_isalnum`

**Archivo:** `ft_isalnum.c`

**¿Qué hace?**  
Verifica si un carácter es alfanumérico (letra o número).

**¿Cómo funciona el código?**

```c
int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}
```

- Utiliza las funciones `ft_isalpha` y `ft_isdigit` ya definidas
- Si el carácter pasa cualquiera de las dos pruebas, devuelve 1

**Ejemplo:**

- `ft_isalnum('B')` → devuelve 1 (es letra)
- `ft_isalnum('3')` → devuelve 1 (es número)
- `ft_isalnum('!')` → devuelve 0 (ni letra ni número)

---

### 🔹 `ft_isascii`

**Archivo:** `ft_isascii.c`

**¿Qué hace?**  
Verifica si un valor está dentro del rango ASCII válido (0-127).

**¿Cómo funciona el código?**

```c
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}
```

- El rango ASCII estándar incluye valores de 0 a 127
- Devuelve 1 si el valor está en este rango

**Ejemplo:**

- `ft_isascii(65)` → devuelve 1 (es 'A')
- `ft_isascii(200)` → devuelve 0 (fuera de rango ASCII)

---

### 🔹 `ft_isprint`

**Archivo:** `ft_isprint.c`

**¿Qué hace?**  
Verifica si un carácter es imprimible (visible en pantalla).

**¿Cómo funciona el código?**

```c
int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}
```

- Los caracteres imprimibles van del 32 (espacio) al 126 (~)
- Excluye caracteres de control (como '\n', '\t', etc.)
- Devuelve 1 si es imprimible, 0 si no lo es

**Ejemplo:**

- `ft_isprint('A')` → devuelve 1
- `ft_isprint('\n')` → devuelve 0 (carácter de control)

---

### B. Funciones de Conversión de Mayúsculas/Minúsculas

### 🔹 `ft_toupper`

**Archivo:** `ft_toupper.c`

**¿Qué hace?**  
Convierte una letra minúscula a mayúscula.

**¿Cómo funciona el código?**

```c
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}
```

- En ASCII, las mayúsculas están 32 posiciones antes que las minúsculas
- Si `c` es minúscula ('a' a 'z'), resta 32 para obtener la mayúscula
- Si no es minúscula, devuelve el carácter sin cambios

**Ejemplo:**

- `ft_toupper('a')` → devuelve 'A' (65)
- `ft_toupper('Z')` → devuelve 'Z' (sin cambio)

---

### 🔹 `ft_tolower`

**Archivo:** `ft_tolower.c`

**¿Qué hace?**  
Convierte una letra mayúscula a minúscula.

**¿Cómo funciona el código?**

```c
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
```

- Si `c` es mayúscula ('A' a 'Z'), suma 32 para obtener la minúscula
- Si no es mayúscula, devuelve el carácter sin cambios

**Ejemplo:**

- `ft_tolower('A')` → devuelve 'a' (97)
- `ft_tolower('z')` → devuelve 'z' (sin cambio)

---

### C. Funciones de Inspección de Cadenas

Estas funciones examinan o buscan dentro de cadenas sin modificarlas.

### 🔹 `ft_strlen`

**Archivo:** `ft_strlen.c`

**¿Qué hace?**  
Calcula la longitud de una cadena (número de caracteres antes del '\0').

**¿Cómo funciona el código?**

```c
size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
```

- Inicializa un contador `i` en 0
- Recorre la cadena incrementando `i` hasta encontrar el carácter nulo '\0'
- Devuelve el número de caracteres contados

**Ejemplo:**

- `ft_strlen("Hola")` → devuelve 4
- `ft_strlen("")` → devuelve 0

---

### 🔹 `ft_strchr`

**Archivo:** `ft_strchr.c`

**¿Qué hace?**  
Busca la primera aparición de un carácter en una cadena.

**¿Cómo funciona el código?**

```c
char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (*s == (char)c)
        return ((char *)s);
    return (NULL);
}
```

- Recorre la cadena `s` carácter por carácter
- Compara cada carácter con `c` (convertido a char)
- Si encuentra coincidencia, devuelve un puntero a esa posición
- Importante: también verifica el '\0' final (permite buscar el nulo)
- Si no encuentra el carácter, devuelve NULL

**Ejemplo:**

- `ft_strchr("Hola", 'l')` → devuelve puntero a "la"
- `ft_strchr("Hola", 'x')` → devuelve NULL

---

### 🔹 `ft_strrchr`

**Archivo:** `ft_strrchr.c`

**¿Qué hace?**  
Busca la última aparición de un carácter en una cadena.

**¿Cómo funciona el código?**

```c
char *ft_strrchr(const char *s, int c)
{
    int i;

    i = (int)ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}
```

- Calcula primero la longitud de la cadena con `ft_strlen`
- Comienza desde el final de la cadena (en la posición de longitud)
- Recorre hacia atrás buscando el carácter
- Devuelve puntero a la última aparición encontrada
- Si no lo encuentra, devuelve NULL

**Ejemplo:**

- `ft_strrchr("Hola mundo", 'o')` → devuelve puntero a la última 'o'.

---

### 🔹 `ft_strncmp`

**Archivo:** `ft_strncmp.c`

**¿Qué hace?**  
Compara dos cadenas hasta un máximo de `n` caracteres.

**¿Cómo funciona el código?**

```c
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (n == 0)
        return (0);
    i = 0;
    while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
```

- Si `n` es 0, devuelve 0 directamente
- Recorre ambas cadenas mientras sean iguales y queden posiciones por comparar
- Cuando encuentra diferencia (o final de alguna cadena), devuelve la resta de los bytes como `unsigned char`
- El casting a unsigned char es importante para comparaciones correctas

**Ejemplo:**

- `ft_strncmp("Hola", "Hola", 4)` → devuelve 0 (iguales)
- `ft_strncmp("abc", "abd", 3)` → devuelve valor negativo ('c' < 'd')

---

### 🔹 `ft_strnstr`

**Archivo:** `ft_strnstr.c`

**¿Qué hace?**  
Busca una subcadena dentro de otra cadena, limitando la búsqueda a `len` bytes.

**¿Cómo funciona el código?**

```c
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (little[0] == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && little[j] && (i + j) < len && big[i + j] == little[j])
        {
            j++;
        }
        if (little[j] == '\0')
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}
```

- Si `little` está vacía, devuelve `big` inmediatamente
- Usa dos bucles: uno externo recorre `big`, uno interno verifica coincidencias
- Para cada posición en `big`, intenta hacer coincidir toda la `little`
- Respeta el límite `len` en ambos bucles
- Devuelve puntero al inicio de la coincidencia o NULL

**Ejemplo:**

- `ft_strnstr("Hola mundo", "mundo", 20)` → devuelve puntero a "mundo"
- `ft_strnstr("Hola mundo", "mundo", 4)` → devuelve NULL (límite muy corto)

---

### 🔹 `ft_memchr`

**Archivo:** `ft_memchr.c`

**¿Qué hace?**  
Busca un byte específico en un bloque de memoria.

**¿Cómo funciona el código?**

```c
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t                  i;
    const unsigned char     *str;

    i = 0;
    str = (const unsigned char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}
```

- Convierte el puntero `s` a `unsigned char *` para trabajar byte a byte
- Recorre `n` bytes buscando el valor `c`
- Compara cada byte con `c` (convertido a unsigned char)
- Devuelve puntero al primer byte que coincide
- Si no encuentra coincidencia en `n` bytes, devuelve NULL

**Ejemplo:**

- `ft_memchr("Hola", 'l', 4)` → devuelve puntero a "la"

---

### D. Funciones de Manipulación de Cadenas

Estas funciones crean nuevas cadenas o modifican las existentes.

### 🔹 `ft_strdup`

**Archivo:** `ft_strdup.c`

**¿Qué hace?**  
Duplica una cadena creando una copia en memoria dinámica.

**¿Cómo funciona el código?**

```c
char *ft_strdup(const char *s1)
{
    size_t  len;
    char    *dup;
    size_t  i;

    len = ft_strlen(s1);
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
```

- Calcula la longitud de `s1` con `ft_strlen`
- Reserva memoria para `len + 1` caracteres (el +1 es para el '\0')
- Si `malloc` falla, devuelve NULL
- Copia carácter por carácter de `s1` a `dup`
- Añade el terminador nulo al final
- Devuelve el puntero a la nueva cadena

**Importante:** El usuario debe liberar la memoria con `free()` cuando termine de usar la cadena.

**Ejemplo:**

```c
char *copia = ft_strdup("Hola");
// usar copia...
free(copia);
```

---

### 🔹 `ft_strlcpy`

**Archivo:** `ft_strlcpy.c`

**¿Qué hace?**  
Copia una cadena a un buffer con un tamaño máximo, garantizando terminación nula.

**¿Cómo funciona el código?**

```c
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (size != 0)
    {
        i = 0;
        while (src[i] && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}
```

- Calcula primero la longitud total de `src`
- Si `size` es 0, no copia nada pero devuelve la longitud de `src`
- Copia hasta `size - 1` caracteres (deja espacio para '\0')
- Siempre añade el terminador nulo
- **Importante:** Devuelve la longitud de `src`, NO los bytes copiados
- Esto permite detectar si hubo truncamiento (si retorno >= size)

**Ejemplo:**

```c
char buffer[10];
size_t len = ft_strlcpy(buffer, "Hola mundo", 10);
// buffer contendrá "Hola mund\0"
// len será 10 (longitud de "Hola mundo")
```

---

### 🔹 `ft_strlcat`

**Archivo:** `ft_strlcat.c`

**¿Qué hace?**  
Concatena una cadena al final de otra con límite de tamaño de buffer.

**¿Cómo funciona el código?**

```c
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dlen;
    size_t slen;

    dlen = 0;
    slen = ft_strlen(src);
    while (dst[dlen] && dlen < size)
    {
        dlen++;
    }
    if (dlen == size)
    {
        return (size + slen);
    }
    i = 0;
    while (src[i] && (dlen + i + 1) < size)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (dlen + slen);
}
```

- Calcula `slen` con `ft_strlen(src)`
- Busca el final de `dst` sin leer fuera del límite `size`
- Si no encuentra terminador en ese límite, devuelve `size + slen`
- Añade caracteres de `src` al final de `dst` hasta llenar el buffer
- Siempre termina con '\0'
- Devuelve la longitud total que habría tenido (`dlen + slen`)

**Ejemplo:**

```c
char buffer[20] = "Hola ";
ft_strlcat(buffer, "mundo", 20);
// buffer ahora contiene "Hola mundo"
```

---

### 🔹 `ft_substr`

**Archivo:** `ft_substr.c`

**¿Qué hace?**  
Extrae una subcadena desde una posición específica con una longitud determinada.

**¿Cómo funciona el código?**

```c
static size_t ft_sub_len(size_t slen, unsigned int start, size_t len)
{
    if ((size_t)start >= slen)
        return (0);
    if (len > slen - start)
        return (slen - start);
    return (len);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char   *str;
    size_t i;

    if (!s)
        return (NULL);
    len = ft_sub_len(ft_strlen(s), start, len);
    if (len == 0)
        return (ft_strdup(""));
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
```

- Si `s` es NULL, devuelve NULL
- Si `start` está fuera de la cadena, devuelve cadena vacía
- Ajusta `len` si excede el final de la cadena
- Reserva memoria para `len + 1` caracteres
- Copia `len` caracteres desde la posición `start`
- Añade terminador nulo y devuelve la nueva subcadena

**Ejemplo:**

```c
char *sub = ft_substr("Hola mundo", 5, 5);
// sub contendrá "mundo"
free(sub);
```

---

### 🔹 `ft_strjoin`

**Archivo:** `ft_strjoin.c`

**¿Qué hace?**  
Concatena dos cadenas en una nueva cadena reservada en memoria dinámica.

**¿Cómo funciona el código?**

```c
char *ft_strjoin(char const *s1, char const *s2)
{
    char   *str;
    size_t len;

    if (!s1 || !s2)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char *)malloc(len * sizeof(char));
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1, len);
    ft_strlcat(str, s2, len);
    return (str);
}
```

- Verifica que ambas cadenas no sean NULL
- Calcula las longitudes de ambas cadenas
- Reserva memoria para la suma de ambas longitudes + 1
- Usa `ft_strlcpy` para copiar `s1` primero
- Usa `ft_strlcat` para añadir `s2` al final
- Devuelve la nueva cadena concatenada

**Ejemplo:**

```c
char *resultado = ft_strjoin("Hola ", "mundo");
// resultado contendrá "Hola mundo"
free(resultado);
```

---

### 🔹 `ft_strtrim`

**Archivo:** `ft_strtrim.c`

**¿Qué hace?**  
Elimina caracteres específicos del principio y final de una cadena.

**¿Cómo funciona el código?**

```c
static int ft_isinset(char c, char const *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_isinset(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_isinset(s1[end - 1], set))
        end--;
    return (ft_substr(s1, start, end - start));
}
```

- Función helper `ft_isinset`: verifica si un carácter está en el conjunto `set`
- Encuentra el índice `start` avanzando desde el inicio mientras los caracteres estén en `set`
- Encuentra el índice `end` retrocediendo desde el final mientras los caracteres estén en `set`
- Usa `ft_substr` para extraer la parte central (sin los caracteres del set)

**Ejemplo:**

```c
char *trimmed = ft_strtrim("   Hola   ", " ");
// trimmed contendrá "Hola"
free(trimmed);
```

---

### 🔹 `ft_split`

**Archivo:** `ft_split.c`

**¿Qué hace?**  
Divide una cadena en múltiples subcadenas usando un delimitador, devolviendo un array de cadenas.

**¿Cómo funciona el código?**

Este es uno de los más complejos. Usa 4 funciones:

1. **`ft_count_words`**: Cuenta cuántas palabras hay

```c
static size_t ft_count_words(char const *s, char c)
{
    size_t count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s && *s != c)
            s++;
    }
    return (count);
}
```

- Salta delimitadores
- Cuando encuentra un carácter que no es delimitador, incrementa el contador
- Salta la palabra completa
- Repite hasta el final

2. **`ft_word_dup`**: Copia una palabra individual

```c
static char *ft_word_dup(char const *start, size_t len)
{
    size_t i;
    char   *word;

    word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
```

- Reserva memoria para una palabra de longitud `len`
- Copia carácter por carácter
- Añade terminador nulo

3. **`ft_free_split`**: Libera memoria en caso de error

```c
static void ft_free_split(char **arr, size_t used)
{
    size_t i;

    i = 0;
    while (i < used)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}
```

- Libera cada cadena individual del array
- Finalmente libera el array mismo

4. **`ft_fill_split`**: Llena el array con las palabras

```c
static int ft_fill_split(char **arr, char const *s, char c)
{
    size_t i;
    size_t len;

    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        len = 0;
        while (s[len] && s[len] != c)
            len++;
        if (len > 0)
        {
            arr[i] = ft_word_dup(s, len);
            if (!arr[i++])
            {
                ft_free_split(arr, i - 1);
                return (-1);
            }
        }
        s += len;
    }
    arr[i] = NULL;
    return (0);
}
```

- Salta delimitadores
- Calcula la longitud de cada palabra
- Duplica cada palabra con `ft_word_dup`
- Si falla, limpia todo con `ft_free_split`
- Termina el array con NULL

5. **`ft_split`**: Función principal

```c
char **ft_split(char const *s, char c)
{
    char **arr;

    if (!s)
        return (NULL);
    arr = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    if (ft_fill_split(arr, s, c) == -1)
        return (NULL);
    return (arr);
}
```

- Cuenta las palabras para saber cuántos punteros necesita
- Reserva array de punteros (+1 para NULL final)
- Llena el array con `ft_fill_split`
- Devuelve el array o NULL si hubo error

**Ejemplo:**

```c
char **palabras = ft_split("Hola mundo cruel", ' ');
// palabras[0] = "Hola"
// palabras[1] = "mundo"
// palabras[2] = "cruel"
// palabras[3] = NULL
// Luego hay que liberar toda la memoria
```

---

### 🔹 `ft_strmapi`

**Archivo:** `ft_strmapi.c`

**¿Qué hace?**  
Crea una nueva cadena aplicando una función a cada carácter de la cadena original.

**¿Cómo funciona el código?**

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char           *str;
    unsigned int   i;

    if (!s || !f)
        return (NULL);
    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
```

- Verifica que `s` y `f` no sean NULL
- Reserva memoria para la nueva cadena
- Aplica la función `f` a cada carácter: `f(índice, carácter)`
- La función `f` puede transformar el carácter según su posición
- Devuelve la nueva cadena transformada

**Ejemplo:**

```c
char mi_funcion(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    return c;
}
char *resultado = ft_strmapi("hola", mi_funcion);
// resultado = "HoLa" (mayúsculas en posiciones pares)
free(resultado);
```

---

### E. Funciones de Memoria

Estas funciones operan sobre bloques de memoria raw (bytes).

### 🔹 `ft_memset`

**Archivo:** `ft_memset.c`

**¿Qué hace?**  
Rellena un bloque de memoria con un valor específico.

**¿Cómo funciona el código?**

```c
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
```

- Recorre `n` bytes del bloque apuntado por `s`
- Asigna el valor `c` (convertido a unsigned char) a cada byte
- Devuelve el puntero original `s`

**Ejemplo:**

```c
char buffer[10];
ft_memset(buffer, 'A', 10);
// buffer ahora contiene "AAAAAAAAAA"
```

---

### 🔹 `ft_bzero`

**Archivo:** `ft_bzero.c`

**¿Qué hace?**  
Rellena un bloque de memoria con ceros (inicializa a 0).

**¿Cómo funciona el código?**

```c
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
```

- Simplemente llama a `ft_memset` con el valor 0
- Es una función wrapper para conveniencia
- Útil para limpiar/inicializar buffers

**Ejemplo:**

```c
char buffer[10] = "Hola";
ft_bzero(buffer, 10);
// buffer ahora está todo en 0
```

---

### 🔹 `ft_memcpy`

**Archivo:** `ft_memcpy.c`

**¿Qué hace?**  
Copia un bloque de memoria de origen a destino (no maneja solapamiento).

**¿Cómo funciona el código?**

```c
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t       i;
    unsigned char *d;
    const unsigned char *s;

    if (!dest && !src)
        return (NULL);
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
```

- Si ambos punteros son NULL, devuelve NULL
- Convierte ambos punteros a `unsigned char*`
- Copia byte a byte de `src` a `dest`
- **Importante:** No maneja solapamiento correctamente (usar `ft_memmove` para eso)
- Devuelve el puntero `dest`

**Ejemplo:**

```c
char src[] = "Hola";
char dest[5];
ft_memcpy(dest, src, 5);
// dest ahora contiene "Hola\0"
```

---

### 🔹 `ft_memmove`

**Archivo:** `ft_memmove.c`

**¿Qué hace?**  
Copia un bloque de memoria manejando correctamente el solapamiento de origen y destino.

**¿Cómo funciona el código?**

```c
static void ft_copy_forward(char *d, const char *s, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
}

static void ft_copy_backward(char *d, const char *s, size_t len)
{
    while (len > 0)
    {
        len--;
        d[len] = s[len];
    }
}

void *ft_memmove(void *dest, const void *src, size_t len)
{
    char       *d;
    const char *s;

    if (!dest && !src)
        return (NULL);
    d = (char *)dest;
    s = (const char *)src;
    if (d < s)
        ft_copy_forward(d, s, len);
    else
        ft_copy_backward(d, s, len);
    return (dest);
}
```

- **Clave**: Detecta si `dest` está antes o después de `src` en memoria
- Si `dest < src`: copia de adelante hacia atrás (normal)
- Si `dest >= src`: copia de atrás hacia adelante (para evitar sobrescribir datos que aún no se han copiado)
- Esto previene corrupción cuando las áreas de memoria se solapan

**Ejemplo de solapamiento:**

```c
char buffer[] = "Hola mundo";
ft_memmove(buffer + 2, buffer, 5);
// Sin manejo de solapamiento: resultado impredecible
// Con manejo correcto: "HoHola ndo"
```

---

### 🔹 `ft_memcmp`

**Archivo:** `ft_memcmp.c`

**¿Qué hace?**  
Compara dos bloques de memoria byte a byte.

**¿Cómo funciona el código?**

```c
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t              i;
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
```

- Convierte ambos punteros a `unsigned char*`
- Compara los primeros `n` bytes
- Si encuentra diferencia, devuelve la resta (positivo, negativo o cero)
- Si todos los `n` bytes son iguales, devuelve 0

**Ejemplo:**

```c
char a[] = "Hola";
char b[] = "Hola";
ft_memcmp(a, b, 4); // devuelve 0 (iguales)
```

---

### 🔹 `ft_calloc`

**Archivo:** `ft_calloc.c`

**¿Qué hace?**  
Reserva memoria para un array e inicializa todos los bytes a cero.

**¿Cómo funciona el código?**

```c
void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (size != 0 && count > ((size_t)-1) / size)
        return (NULL);
    if (count == 0 || size == 0)
        ptr = malloc(1);
    else
        ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}
```

- **Protección contra overflow**: Verifica que `count * size` no desborde
  - Si `size != 0` y `count > SIZE_MAX / size`, hay overflow → devuelve NULL
- Caso especial: si `count` o `size` es 0, reserva 1 byte (comportamiento estándar)
- Reserva `count * size` bytes con `malloc`
- Inicializa todo a cero con `ft_bzero`
- **Importante para seguridad**: La verificación de overflow previene vulnerabilidades

**Ejemplo:**

```c
int *array = (int *)ft_calloc(10, sizeof(int));
// array de 10 enteros, todos inicializados a 0
free(array);
```

---

### F. Funciones de Conversión

### 🔹 `ft_atoi`

**Archivo:** `ft_atoi.c`

**¿Qué hace?**  
Convierte una cadena a un número entero (ASCII to Integer).

**¿Cómo funciona el código?**

```c
int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
```

- **Paso 1**: Salta espacios en blanco y caracteres de control (9-13 son '\t', '\n', '\v', '\f', '\r')
- **Paso 2**: Detecta el signo opcional ('+' o '-')
- **Paso 3**: Convierte dígito a dígito:
  - Multiplica el resultado actual por 10 (desplaza posiciones)
  - Suma el nuevo dígito (convierte char a int restando '0')
- **Paso 4**: Aplica el signo y devuelve el resultado

**Ejemplo:**

- `ft_atoi("  -123")` → devuelve -123
- `ft_atoi("42abc")` → devuelve 42 (se detiene en 'a')

---

### 🔹 `ft_itoa`

**Archivo:** `ft_itoa.c`

**¿Qué hace?**  
Convierte un número entero a cadena (Integer to ASCII).

**¿Cómo funciona el código?**

Usa dos funciones helper:

1. **`ft_num_len`**: Calcula cuántos caracteres necesita el número

```c
static int ft_num_len(long n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        len++;  // Para el signo '-' o el '0'
        n = -n;
    }
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}
```

- Si el número es negativo o cero, suma 1 (para '-' o '0')
- Cuenta dígitos dividiendo por 10 repetidamente

2. **`ft_fill_num`**: Rellena la cadena con los dígitos

```c
static void ft_fill_num(char *str, long nb, int len)
{
    while (nb > 0)
    {
        str[--len] = (nb % 10) + '0';
        nb /= 10;
    }
}
```

- Rellena desde el final hacia el principio
- Extrae cada dígito con módulo 10
- Convierte dígito a char sumando '0'

3. **`ft_itoa`**: Función principal

```c
char *ft_itoa(int n)
{
    char *str;
    long nb;
    int  len;

    nb = (long)n;  // Convertir a long para manejar INT_MIN
    len = ft_num_len(nb);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    ft_fill_num(str, nb, len);
    return (str);
}
```

- Convierte `n` a `long` para manejar INT_MIN (-2147483648)
  - INT_MIN no puede negarse como int sin overflow
- Calcula longitud necesaria
- Reserva memoria
- Caso especial: si es 0, devuelve "0"
- Si es negativo, pone '-' al inicio y trabaja con valor positivo
- Llena los dígitos con `ft_fill_num`

**Ejemplo:**

```c
char *num = ft_itoa(-12345);
// num contendrá "-12345"
free(num);
```

---

### G. Funciones de Iteración de Cadenas

### 🔹 `ft_striteri`

**Archivo:** `ft_striteri.c`

**¿Qué hace?**  
Aplica una función a cada carácter de una cadena, modificando la cadena original.

**¿Cómo funciona el código?**

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
```

- Verifica que `s` y `f` no sean NULL
- Recorre cada carácter de la cadena
- Llama a la función `f` pasando el índice y un puntero al carácter
- La función `f` puede modificar el carácter directamente (recibe puntero)

**Ejemplo:**

```c
void mi_funcion(unsigned int i, char *c)
{
    *c = ft_toupper(*c);
}
char str[] = "hola";
ft_striteri(str, mi_funcion);
// str ahora es "HOLA"
```

---

### 🔹 `ft_strmapi`

**Ya documentada en la sección de Manipulación de Cadenas**

Diferencia con `ft_striteri`:

- `ft_strmapi`: Crea nueva cadena, función recibe carácter por valor
- `ft_striteri`: Modifica cadena original, función recibe puntero a carácter

---

### H. Funciones de Salida

Estas funciones escriben en descriptores de archivo usando la llamada al sistema `write()`.

### 🔹 `ft_putchar_fd`

**Archivo:** `ft_putchar_fd.c`

**¿Qué hace?**  
Escribe un solo carácter en el descriptor de archivo especificado.

**¿Cómo funciona el código?**

```c
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
```

- Usa la llamada al sistema `write(fd, buffer, count)`
- `fd`: descriptor de archivo (0=stdin, 1=stdout, 2=stderr, o archivo abierto)
- `&c`: dirección del carácter a escribir
- `1`: número de bytes a escribir

**Ejemplo:**

```c
ft_putchar_fd('A', 1);  // Escribe 'A' en stdout (pantalla)
ft_putchar_fd('!', 2);  // Escribe '!' en stderr
```

---

### 🔹 `ft_putstr_fd`

**Archivo:** `ft_putstr_fd.c`

**¿Qué hace?**  
Escribe una cadena completa en el descriptor de archivo especificado.

**¿Cómo funciona el código?**

```c
void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
}
```

- Verifica que `s` no sea NULL
- Recorre la cadena carácter por carácter
- Escribe cada carácter usando `write()`
- Alternativa más eficiente sería escribir toda la cadena de una vez

**Ejemplo:**

```c
ft_putstr_fd("Hola mundo", 1);  // Escribe "Hola mundo" en stdout
```

---

### 🔹 `ft_putendl_fd`

**Archivo:** `ft_putendl_fd.c`

**¿Qué hace?**  
Escribe una cadena seguida de un salto de línea en el descriptor de archivo.

**¿Cómo funciona el código?**

```c
void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}
```

- Verifica que `s` no sea NULL
- Llama a `ft_putstr_fd` para escribir la cadena
- Luego llama a `ft_putchar_fd` para escribir '\n'

**Ejemplo:**

```c
ft_putendl_fd("Hola mundo", 1);
// Escribe "Hola mundo\n" en stdout
```

---

### 🔹 `ft_putnbr_fd`

**Archivo:** `ft_putnbr_fd.c`

**¿Qué hace?**  
Escribe un número entero en el descriptor de archivo.

**¿Cómo funciona el código?**

```c
void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = (long)n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr_fd((int)(nb / 10), fd);
    ft_putchar_fd((char)(nb % 10 + '0'), fd);
}
```

- Convierte a `long` para manejar INT_MIN correctamente
- Si es negativo, escribe '-' y convierte a positivo
- **Recursión**: Si el número tiene más de un dígito:
  - Llama recursivamente con `nb / 10` (dígitos superiores)
  - Escribe el último dígito con `nb % 10`
- Convierte dígito a char sumando '0'

**Ejemplo de traza recursiva para 12345:**

```
ft_putnbr_fd(12345, 1)
  → ft_putnbr_fd(1234, 1)
    → ft_putnbr_fd(123, 1)
      → ft_putnbr_fd(12, 1)
        → ft_putnbr_fd(1, 1)
          → escribe '1'
        → escribe '2'
      → escribe '3'
    → escribe '4'
  → escribe '5'
```

**Ejemplo:**

```c
ft_putnbr_fd(-12345, 1);  // Escribe "-12345" en stdout
```

---

### I. Funciones de Listas Enlazadas

Todas estas funciones trabajan con la estructura `t_list`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

### 🔹 `ft_lstnew`

**Archivo:** `ft_lstnew.c`

**¿Qué hace?**  
Crea un nuevo nodo de lista.

**¿Cómo funciona el código?**

```c
t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
```

- Reserva memoria para un nodo `t_list`
- Si `malloc` falla, devuelve NULL
- Inicializa `content` con el valor pasado
- Inicializa `next` a NULL (será el último nodo por ahora)
- Devuelve el nuevo nodo

**Ejemplo:**

```c
int *num = malloc(sizeof(int));
*num = 42;
t_list *nodo = ft_lstnew(num);
// nodo->content apunta a num
// nodo->next es NULL
```

---

### 🔹 `ft_lstadd_front`

**Archivo:** `ft_lstadd_front.c`

**¿Qué hace?**  
Añade un nodo al principio de la lista.

**¿Cómo funciona el código?**

```c
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new->next = *lst;
    *lst = new;
}
```

- Verifica que `lst` y `new` no sean NULL
- Hace que `new->next` apunte al antiguo primer nodo (`*lst`)
- Actualiza `*lst` para que apunte a `new` (ahora es el primero)

**Visualización:**

```
Antes:  lst → [A] → [B] → NULL
        new → [C]

Después: lst → [C] → [A] → [B] → NULL
```

**Ejemplo:**

```c
t_list *lista = NULL;
ft_lstadd_front(&lista, ft_lstnew("Segundo"));
ft_lstadd_front(&lista, ft_lstnew("Primero"));
// lista: "Primero" → "Segundo" → NULL
```

---

### 🔹 `ft_lstadd_back`

**Archivo:** `ft_lstadd_back.c`

**¿Qué hace?**  
Añade un nodo al final de la lista.

**¿Cómo funciona el código?**

```c
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst || !new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}
```

- Verifica que `lst` y `new` no sean NULL
- **Caso especial**: Si la lista está vacía (`*lst == NULL`), `new` se convierte en el primer nodo
- Si no, usa `ft_lstlast` para encontrar el último nodo
- Hace que el `next` del último nodo apunte a `new`

**Visualización:**

```
Antes:  lst → [A] → [B] → NULL
        new → [C]

Después: lst → [A] → [B] → [C] → NULL
```

**Ejemplo:**

```c
t_list *lista = ft_lstnew("Primero");
ft_lstadd_back(&lista, ft_lstnew("Segundo"));
ft_lstadd_back(&lista, ft_lstnew("Tercero"));
// lista: "Primero" → "Segundo" → "Tercero" → NULL
```

---

### 🔹 `ft_lstlast`

**Archivo:** `ft_lstlast.c`

**¿Qué hace?**  
Devuelve el último nodo de la lista.

**¿Cómo funciona el código?**

```c
t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}
```

- Si la lista está vacía, devuelve NULL
- Recorre la lista siguiendo los punteros `next`
- Se detiene cuando encuentra un nodo cuyo `next` es NULL
- Devuelve ese último nodo

**Ejemplo:**

```c
t_list *lista = /* lista con varios nodos */;
t_list *ultimo = ft_lstlast(lista);
// ultimo apunta al último nodo de la lista
```

---

### 🔹 `ft_lstsize`

**Archivo:** `ft_lstsize.c`

**¿Qué hace?**  
Cuenta el número de nodos en la lista.

**¿Cómo funciona el código?**

```c
int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}
```

- Inicializa un contador en 0
- Recorre la lista siguiendo los punteros `next`
- Incrementa el contador por cada nodo
- Devuelve el total

**Ejemplo:**

```c
t_list *lista = /* lista: A → B → C → NULL */;
int tam = ft_lstsize(lista);  // devuelve 3
```

---

### 🔹 `ft_lstdelone`

**Archivo:** `ft_lstdelone.c`

**¿Qué hace?**  
Elimina un solo nodo, liberando su contenido y el nodo mismo.

**¿Cómo funciona el código?**

```c
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}
```

- Verifica que `lst` y `del` no sean NULL
- Llama a la función `del` para liberar el contenido del nodo
  - `del` es una función que sabe cómo liberar el tipo de contenido específico
- Libera el nodo mismo con `free`
- **Importante**: NO actualiza punteros de otros nodos

**Ejemplo:**

```c
void delete_content(void *content)
{
    free(content);
}
t_list *nodo = ft_lstnew(malloc(sizeof(int)));
ft_lstdelone(nodo, delete_content);
```

---

### 🔹 `ft_lstclear`

**Archivo:** `ft_lstclear.c`

**¿Qué hace?**  
Elimina y libera toda la lista.

**¿Cómo funciona el código?**

```c
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!lst || !del)
        return;
    while (*lst)
    {
        temp = (*lst)->next;  // Guarda el siguiente
        ft_lstdelone(*lst, del);  // Elimina el actual
        *lst = temp;  // Avanza al siguiente
    }
    *lst = NULL;
}
```

- Verifica que `lst` y `del` no sean NULL
- Recorre la lista:
  - Guarda el puntero al siguiente nodo en `temp`
  - Elimina el nodo actual con `ft_lstdelone`
  - Avanza al siguiente nodo
- Al final, pone `*lst` en NULL (lista vacía)

**Visualización:**

```
Inicial: lst → [A] → [B] → [C] → NULL

Iteración 1: temp = [B], elimina [A], lst = [B]
Iteración 2: temp = [C], elimina [B], lst = [C]
Iteración 3: temp = NULL, elimina [C], lst = NULL

Final: lst → NULL
```

**Ejemplo:**

```c
t_list *lista = /* lista con varios nodos */;
ft_lstclear(&lista, delete_content);
// Ahora lista es NULL y toda la memoria está liberada
```

---

### 🔹 `ft_lstiter`

**Archivo:** `ft_lstiter.c`

**¿Qué hace?**  
Itera sobre la lista aplicando una función a cada contenido (sin modificar la estructura).

**¿Cómo funciona el código?**

```c
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
        return;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
```

- Verifica que `f` no sea NULL
- Recorre la lista
- Aplica la función `f` al contenido de cada nodo
- No modifica la estructura de la lista (punteros `next`)
- La función `f` puede modificar el contenido o solo usarlo

**Ejemplo:**

```c
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
ft_lstiter(lista, print_content);
// Imprime el contenido de cada nodo
```

---

### 🔹 `ft_lstmap`

**Archivo:** `ft_lstmap.c`

**¿Qué hace?**  
Crea una nueva lista aplicando una función de transformación a cada contenido de la lista original.

**¿Cómo funciona el código?**

```c
static void ft_lstclear_newlist(t_list **lst, void (*del)(void *))
{
    ft_lstclear(lst, del);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;
    void   *content;

    if (!f || !del)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        content = f(lst->content);  // Transforma el contenido
        new_node = ft_lstnew(content);  // Crea nuevo nodo
        if (!new_node)
        {
            del(content);  // Libera el contenido creado
            ft_lstclear_newlist(&new_list, del);  // Limpia lista parcial
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);  // Añade a la nueva lista
        lst = lst->next;
    }
    return (new_list);
}
```

- Verifica que `f` y `del` no sean NULL
- Para cada nodo de la lista original:
  1. Aplica `f` al contenido para crear contenido transformado
  2. Crea nuevo nodo con ese contenido
  3. **Manejo de errores sofisticado**:
     - Si falla la creación del nodo:
       - Libera el contenido recién creado con `del`
       - Limpia toda la lista parcialmente construida
       - Devuelve NULL
  4. Si todo va bien, añade el nuevo nodo a la nueva lista
- Devuelve la nueva lista completa

**Ejemplo:**

```c
void *duplicate_string(void *content)
{
    return (ft_strdup((char *)content));
}

void delete_string(void *content)
{
    free(content);
}

t_list *original = /* lista de strings */;
t_list *copia = ft_lstmap(original, duplicate_string, delete_string);
// copia es una nueva lista con copias de los strings
```

## Conceptos Clave

### 1. **Protección contra NULL**

Casi todas las funciones verifican punteros NULL antes de usarlos para evitar segmentation faults.

### 2. **Manejo de INT_MIN**

Las funciones `ft_itoa` y `ft_putnbr_fd` convierten a `long` para evitar int overflow.

### 3. **Protección contra overflow**

`ft_calloc` verifica que `count * size` no desborde antes de hacer malloc.

### 4. **Solapamiento de memoria**

`ft_memmove` maneja correctamente el solapamiento copiando en dirección adecuada.

### 5. **Terminación NULL**

Las funciones de cadenas siempre añaden '\0' al final asegurar la integridad de C strings.

### 6. **Gestión de memoria**

Funciones que usan `malloc` devuelven NULL en caso de fallo y tienen mecanismos de limpieza.

### 7. **Casting a unsigned char**

En funciones de comparación (`memcmp`, `strncmp`) se usa unsigned char para comparaciones correctas de bytes.

### 8. **Funciones estáticas helper**

Funciones complejas se descomponen en helpers estáticos para mejor legibilidad y reutilización.
