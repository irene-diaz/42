/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortiz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:02:19 by aortiz-s          #+#    #+#             */
/*   Updated: 2025/02/22 14:26:53 by aortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/* imprime la linea de arriba a lo  ancho
 * si w = 1 pinta el caracter de la izq
 * si w = 2 pinta el de la izq y el de la dercha
 * si w >= 3 pinta lo de dentro */
void	ft_print_top(int w)
{
	int	i;

	i = 1;
	ft_putchar('/');
	while (i <= w - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (w > 1)
		ft_putchar('\\');
}

/* imprime todas las lineas del medio a lo ancho */
void	ft_print_medium(int w)
{
	int	j;

	j = 1;
	ft_putchar('*');
	while (j <= w - 2)
	{
		ft_putchar(' ');
		j++;
	}
	if (w > 1)
		ft_putchar('*');
}

/* imprime la ultima linea a lo ancho */
void	ft_print_bottom(int w)
{
	int	z;

	z = 1;
	ft_putchar('\\');
	while (z <= w - 2)
	{
		ft_putchar('*');
		z++;
	}
	if (w > 1)
		ft_putchar('/');
}

/* solo imprime si los valores son positivos 
 * si height = 1 pinta la linea de arriba
 * si height = 2 pinta la lina de arriba y abajo
 * si height >= 3 pinta lo de dentro */
void	rush(int width, int height)
{
	int	k;

	k = 1;
	if (width > 0 && height > 0)
	{
		ft_print_top(width);
		ft_putchar('\n');
		while (k <= height - 2)
		{
			ft_print_medium(width);
			ft_putchar('\n');
			k++;
		}
		if (height > 1)
		{
			ft_print_bottom(width);
			ft_putchar('\n');
		}
	}
	else
		write(1, "Rush solo acepta enteros positivos y no nulos\n", 46);
}
