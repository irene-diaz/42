/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:54:12 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/12 17:20:53 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

/*int main()
{
    char str1[] = "   ---+--+1234ab567";
    char str2[] = "42";
    char str3[] = "   -987";
    char str4[] = "   +00056";
    
    ft_putnbr(ft_atoi(str1)); write(1, "\n", 1); // Esperado: -1234
    ft_putnbr(ft_atoi(str2)); write(1, "\n", 1); // Esperado: 42
    ft_putnbr(ft_atoi(str3)); write(1, "\n", 1); // Esperado: -987
    ft_putnbr(ft_atoi(str4)); write(1, "\n", 1); // Esperado: 56

    return 0;
}*/
