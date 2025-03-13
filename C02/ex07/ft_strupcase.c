/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:12:37 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/03 13:47:14 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "Alvaro";
	char str2[] = "pepe";

	printf("Cadena en mayuscula: %s\n", ft_strupcase(str));
	printf("Cadena en mayuscula: %s\n", ft_strupcase(str2));
}*/
