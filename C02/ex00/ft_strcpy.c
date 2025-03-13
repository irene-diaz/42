/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:21:13 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/02 21:01:35 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//#include <stdio.h>

/*La función strcpy() copia string2, incluido el carácter nulo final,
 la ubicación especificada por string1.*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	src[] = "Hola mundo";
	char	dest[20];
	
	ft_strcpy(dest, src);
	printf("Cadena copiada: %s\n" , dest);

}*/
