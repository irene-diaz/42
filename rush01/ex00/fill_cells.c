/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_cells.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:03:21 by agarcia           #+#    #+#             */
/*   Updated: 2025/03/01 21:03:27 by agarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col(char c, int col, char **arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr[i][col] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_row(char c, int row, char **arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr[row][i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	fill_colup(char **arr, char **arr_result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		if (arr[0][i] == '4')
		{
			arr_result[0][i] = '1';
			arr_result[1][i] = '2';
			arr_result[2][i] = '3';
			arr_result[3][i] = '4';
		}
		else if (arr[0][i] == '1')
			arr_result[0][i] = '4';
		i++;
	}
	j = 0;
	k = 0;
	return (0);
}

int	fill_rowleft(char **arr, char **arr_result)
{
	int	j;
	int	k;
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr[0][i] == '4')
		{
			arr_result[i][0] = '1';
			arr_result[i][1] = '2';
			arr_result[i][2] = '3';
			arr_result[i][3] = '4';
		}
		else if (arr[0][i] == '1')
		{
			arr_result[i][0] = '4';
			if (check_row('4', i, arr))
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	fill_cells(char **arr, char **arr_result)
{
	int status;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr_result[i][j] = '0';
		}
	}

	status = 0;
	status = fill_colup(arr, arr_result);
	status = fill_rowleft(arr, arr_result);

	return (status);
}