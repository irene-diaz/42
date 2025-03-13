/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:12:06 by agarcia           #+#    #+#             */
/*   Updated: 2025/03/01 20:12:15 by agarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen_without_spaces(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			num++;
		i++;
	}
	return (num);
}

int	store_input(char *str, char **arr)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	num = strlen_without_spaces(str);
	if (num != 16)
		return (1);
	while (i < 4)
	{
		j = 0;
		while (j < 4 && *str)
		{
			arr[i][j] = *str;
			j++;
			str += 2;
		}
		i++;
	}
	return (0);
} 
