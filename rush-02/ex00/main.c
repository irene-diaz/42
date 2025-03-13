/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:00:35 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/11 10:05:06 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionarie.h"
//es doble puntero porquue se modifica el valor de dict
int	parse_args(int argc, char **argv, char **dict_path, char **num_str)
{
	if (argc < 2 || argc > 3)
	{
		print_str("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		*dict_path = "numbers.dict";
		*num_str = argv[1];
	}
	else
	{
		*dict_path = argv[1];
		*num_str = argv[2];
	}
	if (!is_valid_number(*num_str))
	{
		print_str("Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict			*dict;
	char			*dict_path;
	char			*num_str;
	unsigned long	num;

	if (!parse_args(argc, argv, &dict_path, &num_str))
		return (1);
	dict = parse_dict(dict_path);
	if (!dict || !is_valid_dict(dict))
	{
		print_str("Dict Error\n");
		if (dict)
			clean_memory(dict);
		return (1);
	}
	num = str_to_num(num_str);
	print_num(dict, num);
	print_str("\n");
	clean_memory(dict);
	return (0);
}
