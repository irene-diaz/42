/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:16:05 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/11 09:51:49 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionarie.h"
//Elimina espacios en blanco al principio y al final de una cadena.
char	*trim(char *str)
{
	int	i;
	int	end;

	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '\0')
		return (str + i);
	end = str_len(str) - 1;
	while (end > i && is_space(str[end]))
		end--;
	str[end + 1] = '\0';
	return (str + i);
}
//add_entry: crea una nueva entrada en el diccionario.
void	add_entry(unsigned long num, char *word, t_dict **dict)
{
	t_dict	*new;

	new = (t_dict *)malloc(sizeof(t_dict));
	if (!new)
		return ;
	//asigna el número y la palabra a la nueva entrada del diccionario.
	new->num = num;
	new->word = str_dup(word);
	if (!new->word)
	{
		free(new);
		return ;
	}
	new->next = *dict;
	*dict = new;
}

//parse_line: divide la línea en dos partes, el número y la palabra, y llama a add_entry para agregar la entrada al diccionario.
void	parse_line(char *line, t_dict **dict)
{
	int				i; //indice para recorrer la línea
	char			*colon; //puntero a la posición del carácter ':' en la línea
	unsigned long	num; //número convertido de la cadena

	i = 0;
	//busca el carácter ':' en la línea.
	while (line[i] && line[i] != ':')
		i++;
	if (!line[i])
		return ;
	//si no se encuentra el carácter ':' en la línea, la función devuelve NULL.
	colon = &line[i];
	*colon = '\0';
	num = str_to_num(line);
	//si la cadena no es un número válido, la función devuelve NULL.
	if (num == (unsigned long)-1)
	{
		*colon = ':';
		return ;
	}
	add_entry(num, trim(colon + 1), dict);
	*colon = ':';
}

//process_buffer: divide el buffer en líneas y llama a parse_line para cada línea.
void	process_buffer(char *buf, t_dict **dict)
{
	int		i;
	char	*line;

	i = 0;
	line = buf;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			buf[i] = '\0';
			if (line[0] != '\0')
				parse_line(line, dict);
			line = &buf[i + 1];
		}
		i++;
	}
	if (line[0] != '\0')
		parse_line(line, dict);
}

//la función parse_dict lee el archivo de diccionario y devuelve una lista enlazada de estructuras de diccionario.
t_dict	*parse_dict(char *filename)
{
	int		fd;
	//el número 4096 se elige como tamaño del buffer porque es eficiente para operaciones de lectura/escritura, es una potencia de 2, y es un tamaño comúnmente utilizado en sistemas de archivos y programas.
	char	buf[4096];
	int		bytes;//e_dict lee el archivo de diccionario y devuelve una lista enlazada de estr
	t_dict	*dict;

	dict = NULL;
	//abre el archivo en modo de solo lectura
	fd = open(filename, O_RDONLY);
	//si el archivo no se puede abrir, la función devuelve NULL.
	if (fd == -1)
		return (NULL);
		
	
	bytes = read(fd, buf, 4095);//lee el archivo y almacena los datos en el buffer buf.
	if (bytes <= 0)
	{
		close(fd);
		return (NULL);
	}
	buf[bytes] = '\0';
	close(fd);
	process_buffer(buf, &dict);
	return (dict);
}
