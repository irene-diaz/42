/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:40:45 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/23 17:29:32 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	//creo la variable
	int	a;
	//creo el puntero
	int	*p;
	
	//asigno 0 a a
	a = 0;
	//asigno al puntero la direccion de memoria de a
	p = &a;
	
	//paso a la funcion al puntero
	ft_ft(p);
	//comprobacion de 42 en ASCII
	write(1, &a, 1);
}*/
