#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*Estándar de C: La función original strlen() en libc retorna size_t,
	no int. Tu libft.h sigue correctamente la especificación.

Rango mayor: size_t es un tipo sin signo diseñado específicamente para tamaños y longitudes. En sistemas de 64 bits,
	puede representar valores hasta 2^64-1,
	mientras que int solo llega hasta 2^31-1.

Sin signo: size_t no tiene signo,
	lo que tiene sentido porque una longitud nunca puede ser negativa. Si fuera int,
	podrías tener confusión con valores negativos.

Overflow: Si usaras int,
	strings muy largas causarían overflow silencioso y resultados incorrectos.*/