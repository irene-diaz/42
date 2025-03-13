/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_invalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:44:23 by agarcia           #+#    #+#             */
/*   Updated: 2025/03/01 17:44:25 by agarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_is_invalid_number(char **arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (arr[i][j] != '1' && arr[i][j] != '2' && arr[i][j] != '3'
				&& arr[i][j] != '4')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_invalid_pairs(char **arr)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (arr[0][j] - '0' + arr[1][j] - '0' < 3)
			return (1);
		if (arr[0][j] - '0' + arr[1][j] - '0' > 5)
			return (1);
		if (arr[2][j] - '0' + arr[3][j] - '0' < 3)
			return (1);
		if (arr[2][j] - '0' + arr[3][j] - '0' > 5)
			return (1);
		j++;
	}
	return (0);
}

int	check_invalid(char **arr)
{
	int	result;

	result = check_is_invalid_number(arr);
	result = check_invalid_pairs(arr);
	return (0);
}
