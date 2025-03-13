/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:16:08 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/24 17:35:41 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int	i;

	i=0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void    ft_putnbr(int n)
{
        char	c;

        c = n + '0';  // Convertir el número a carácter
        write(1, &c, 1);
}

int	main(void)
{
	char	 *str2;
	//int		i;

	str2 = "Hola";
	//i = ft_strlen(str2);
	ft_putnbr(ft_strlen(str2));
}
