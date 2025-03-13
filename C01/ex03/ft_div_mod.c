/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:23:04 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/25 11:29:17 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*void    ft_putnbr(int n)
{
        char c;

        c = n + '0';  // Convertir el número a carácter
        write(1, &c, 1);
}

int     main(void)
{
        int     a;
        int     b;
        int     div;
        int     mod;

        a = 10;
        b = 2;
        ft_div_mod(a, b, &div, &mod);

        ft_putnbr(div);  // Imprimir el cociente
        write(1, "\n", 1);
        ft_putnbr(mod);  // Imprimir el resto
        write(1, "\n", 1);
}*/
