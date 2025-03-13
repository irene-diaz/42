/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:17:37 by agarcia           #+#    #+#             */
/*   Updated: 2025/03/02 13:48:03 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // Incluye la biblioteca unistd.h para usar la función write

// Declaración de la función rush01 que toma un puntero a char y devuelve un int
int rush01(char *str);

int main(int argn, char **argv) // Función principal que toma el número de argumentos y un array de punteros a char
{
    int result; // Variable para almacenar el resultado

    result = 0; // Inicializa result a 0
    if (argn == 2) // Si el número de argumentos es 2
    {
        argv++; // Incrementa el puntero argv para apuntar al segundo argumento
        result = rush01(*argv); // Llama a la función rush01 con el segundo argumento y almacena el resultado en result
    }
    else
        result = 1; // Si el número de argumentos no es 2, establece result a 1
    if (result) // Si result es diferente de 0
        write(1, "Error\n", 6); // Escribe "Error\n" en la salida estándar
}