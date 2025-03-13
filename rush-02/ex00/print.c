/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:00:19 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/11 09:59:47 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionarie.h"

//busca en la lista de diccionario la palabra asociada al número n
t_dict	*find_num(t_dict *dict, unsigned long num)
{
	while (dict)
	{
		if (dict->num == num)
			return (dict);
		dict = dict->next;
	}
	return (NULL);
}

//is_valid_dict: verifica si el diccionario contiene todas las palabras necesarias para imprimir cualquier número entre 0 y 1000.
int	is_valid_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (i <= 20)
	{
		if (!find_num(dict, i++))
			return (0);
	}
	i = 30;
	while (i <= 90)
	{
		if (!find_num(dict, i))
			return (0);
		i += 10;
	}
	if (!find_num(dict, 100) || !find_num(dict, 1000))
		return (0);
	return (1);
}

void	print_under_100(t_dict *dict, unsigned long n)
{
	t_dict	*entry;

	entry = NULL;
	if (n <= 20)
	{
		entry = find_num(dict, n);
		if (entry)
			print_str(entry->word);
	}
	else
	{
		entry = find_num(dict, (n / 10) * 10);
		if (entry)
			print_str(entry->word);
		if (n % 10)
		{
			print_str(" ");
			entry = find_num(dict, n % 10);
			if (entry)
				print_str(entry->word);
		}
	}
}

void	print_under_1000(t_dict *dict, unsigned long n)
{
	t_dict	*entry;

	if (n < 100)
	{
		print_under_100(dict, n);
		return ;
	}
	entry = find_num(dict, n / 100);
	if (entry)
		print_str(entry->word);
	print_str(" ");
	entry = find_num(dict, 100);
	if (entry)
		print_str(entry->word);
	if (n % 100)
	{
		print_str(" ");
		print_under_100(dict, n % 100);
	}
}

//En resumen, la función print_scale divide el número n por la scale, imprime la parte entera, la palabra correspondiente a scale y, si hay un resto, imprime " and " seguido del resto del número.
void	print_scale(t_dict *dict, unsigned long n, unsigned long scale)
{
	t_dict	*entry;

	if (n < scale)
		return ;
	if (scale == 1000)
		print_under_1000(dict, n / scale);
	else
		print_num(dict, n / scale);
	print_str(" ");
	entry = find_num(dict, scale);
	if (!entry)
		return ;
	print_str(entry->word);
	if (n % scale)
	{
		print_str(" and ");
		if (scale == 1000)
			print_under_1000(dict, n % scale);
		else
			print_num(dict, n % scale);
	}
}
