/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:26:57 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/10 19:33:08 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionarie.h"

// check this later to pass valgrind loll!!!!
//Revisar más tarde para asegurar que pase las pruebas de Valgrind(despues de compilar)
//clean_memory: libera la memoria asignada a la lista de diccionario.
/*Valgrind es una herramienta de análisis de memoria que se utiliza para detectar errores 
relacionados con la gestión de memoria en programas escritos en C y C++. Aquí hay una explicación 
detallada de Valgrind:*/
void	clean_memory(t_dict *dict)
{
	t_dict	*tmp;

	while (dict)
	{
		tmp = dict;
		dict = dict->next;
		//Primero se libera la palabra y luego el nodo temporal para evitar fugas de memoria.
		free(tmp->word);
		free(tmp);
	}
}
