/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionarie.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:41:39 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/11 09:41:22 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Estas líneas previenen múltiples inclusiones de este archivo de encabezado, 
lo que puede causar errores de redefinición.*/
#ifndef DICTIONARIE_H 
# define DICTIONARIE_H

# include <unistd.h>
# include <stdlib.h>
//Incluye la biblioteca de funciones de entrada/salida.
# include <fcntl.h>

typedef struct s_dict
{
	unsigned long	num;
	char			*word;
	//estructura de tipo t_dict que se llama next(siguiente lista)
	struct s_dict	*next;
}	t_dict; //alias para llamar a la estructura

//parse_dict: lee un archivo y crea un diccionario.
t_dict			*parse_dict(char *filename);
//Encuentra una entrada del diccionario por número.
t_dict			*find_num(t_dict *dict, unsigned long num);
int				is_valid_dict(t_dict *dict);
//Imprime la palabra asociada con un número.
void			print_num(t_dict *dict, unsigned long num);
void			print_scale(t_dict *dict, unsigned long n, unsigned long scale);
void			print_under_1000(t_dict *dict, unsigned long n);
void			print_under_100(t_dict *dict, unsigned long n);
void			clean_memory(t_dict *dict);
//Verifica si un carácter es un espacio.
int				is_space(char c);
//Verifica si un carácter es un número.
unsigned long	str_to_num(char *str);
//Verifica si una cadena es un número válido.
int				is_valid_number(char *str);
void			print_str(char *str);
int				str_len(char *str);
//Duplique una cadena.
char			*str_dup(char *str);

#endif