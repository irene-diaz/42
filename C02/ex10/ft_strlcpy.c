/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:17:56 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/04 11:06:47 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	j = 0;
	while (j < size - 1 && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}

/*int main()
{
    char src[] = "Hola, mundo";
    char dst[20];
   // pone size como 4, pero aparentemente corta 3 caracteres
   // por el final de string
    unsigned int size = 4;

    unsigned int len = ft_strlcpy(dst, src, size);

    printf("Copiado: %s\n", dst);
    printf("Longitud de src:%u\n", len);

    return 0;
}*/
/*¿Qué hace strlcpy?
Copia una cadena de origen (src) en un destino (dest), asegurando
que la copia esté siempre terminada en '\0'.
El parámetro size indica la cantidad total de espacio disponible
en dest, incluyendo el espacio para el carácter nulo.
Retorna la longitud total de la cadena que intentó copiar,
es decir, la longitud de src.*/
