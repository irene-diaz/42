/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:51:45 by agarcia           #+#    #+#             */
/*   Updated: 2025/03/01 16:53:04 by agarcia          ###   ########.fr       */
/*                                                               S             */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Declaración de funciones
int	check_invalid(char **arr);
int	print_result(char **arr);
int	fill_cells(char **arr, char **arr_result);
int	store_input(char *str, char **arr);

// Función principal rush01 que toma un puntero a char y devuelve un int
int	rush01(char *str)
{
    char	**arr; // Declaración de un puntero a puntero a char para almacenar el array de entrada
    char	**arr_result; // Declaración de un puntero a puntero a char para almacenar el array de resultados
    int		status; // Variable para almacenar el estado

    // Asignación de memoria para el array de entrada
    arr = (char **)malloc(sizeof(char *) * 4);
    arr[0] = (char *)malloc(sizeof(char) * 4);
    arr[1] = (char *)malloc(sizeof(char) * 4);
    arr[2] = (char *)malloc(sizeof(char) * 4);
    arr[3] = (char *)malloc(sizeof(char) * 4);

    // Asignación de memoria para el array de resultados
    arr_result = (char **)malloc(sizeof(char *) * 4);
    arr_result[0] = (char *)malloc(sizeof(char) * 4);
    arr_result[1] = (char *)malloc(sizeof(char) * 4);
    arr_result[2] = (char *)malloc(sizeof(char) * 4);
    arr_result[3] = (char *)malloc(sizeof(char) * 4);

    // Almacena la entrada en el array y actualiza el estado
    status = store_input(str, arr);
    if (status == 0) // Si el estado es 0 (sin errores)
        status = check_invalid(arr); // Verifica si la entrada es válida
    
    if(status == 0) // Si el estado sigue siendo 0
        status = fill_cells(arr, arr_result); // Llena las celdas del array de resultados
    if (status == 0) // Si el estado sigue siendo 0
        print_result(arr_result); // Imprime el resultado
    return (status); // Devuelve el estado
}