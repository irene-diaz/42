/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:08:03 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/24 16:20:41 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;

	*a = d;
	*b = r;

}


void    ft_putnbr(int n)
{
        char	c;

        c = n + '0';  // Convertir el número a carácter
        write(1, &c, 1);
}

int     main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 10;
	b = 2;
	pa = &a;
	pb = &b;

	ft_ultimate_div_mod(pa, pb);

        ft_putnbr(*pa);  // Imprimir el cociente
        write(1, "\n", 1);
        ft_putnbr(*pb);  // Imprimir el resto
        write(1, "\n", 1);
}
