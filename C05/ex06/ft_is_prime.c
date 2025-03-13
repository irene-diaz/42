/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:00:46 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/12 19:08:35 by idiaz-ca         ###   ########.fr       */
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
		return (0);
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

/*int main(void)
{
    printf("%d",ft_is_prime(1)); //devuelve 1
    printf("%c",'\n');
    printf("%d",ft_is_prime(10)); //devuelve 0
}*/
