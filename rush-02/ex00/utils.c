/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:26:58 by cruiz-go          #+#    #+#             */
/*   Updated: 2025/03/10 19:36:32 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionarie.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_dup(char *str)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(str_len(str) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	print_str(char *str)
{
	write(1, str, str_len(str));
}

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (is_space(str[i]))
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

//str_to_num: convierte una cadena en un número.
unsigned long	str_to_num(char *str)
{
	unsigned long	num;
	int				i;

	num = 0;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return ((unsigned long)-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	while (is_space(str[i]))
		i++;
	if (str[i] != '\0')
		return ((unsigned long)-1);
	return (num);
}
