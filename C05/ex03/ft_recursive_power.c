/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:45:14 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/12 19:00:26 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/*int main()
{
    int p = ft_recursive_power(2, 4);
    int p1 = ft_recursive_power(0, 0);
    int p2 = ft_recursive_power(2, 4);
    printf("%d", p);
}*/
