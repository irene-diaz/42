/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:13:00 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/11 09:53:51 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionarie.h"

//is_space: verifica si un carácter es un espacio.
int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

//print_num: imprime la palabra asociada con un número.
void	print_num(t_dict *dict, unsigned long n)
{
	//Se declara un puntero a la estructura t_dict llamado entry.
	t_dict	*entry;

	//Si n es igual a 0, se busca la palabra en el diccionario.
	if (n == 0)
	{
		entry = find_num(dict, 0);
		//Si entry es diferente de NULL, se imprime la palabra.
		if (entry)
			print_str(entry->word);
		return ;
	}
	if (n >= 1000000 && find_num(dict, 1000000))
	{
		print_scale(dict, n, 1000000);
	}
	else if (n >= 1000)
	{
		print_scale(dict, n, 1000);
	}
	else
	{
		print_under_1000(dict, n);
	}
}
