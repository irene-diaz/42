/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:22:55 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/12 18:21:46 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		n = n * (i + 1);
		i++;
	}
	return (n);
}

/*int main()
{
    int f = ft_iterative_factorial(5);
    printf("%d", f);
}*/
