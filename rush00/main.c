/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortiz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:53:41 by aortiz-s          #+#    #+#             */
/*   Updated: 2025/02/22 14:31:27 by aortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int width, int height);

void	ft_putchar(char c);

int	main(void)
{
	rush(5,3);
	ft_putchar('\n');
	rush(5,1);
	ft_putchar('\n');
	rush(1,1);
	ft_putchar('\n');
	rush(1,5);
	ft_putchar('\n');
	rush(4,4);
	ft_putchar('\n');
	rush(0,0);
	ft_putchar('\n');
        rush(123,42);
	ft_putchar('\n');
        rush(-10,21);

	return (0);
}
