/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prme.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:33:33 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/12 19:09:39 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	cont;

	i = 1;
	cont = 0;
	if (nb <= 1)
		return (2);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			cont++;
		}
		i++;
	}
	if (cont == 2)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*int main(void)
{
    printf("%d",ft_find_next_prime(3)); //devuelve 3
    printf("%c",'\n');
    printf("%d",ft_find_next_prime(15)); //devuelve 17
}*/
