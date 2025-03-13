/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:06:58 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/03 13:41:13 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//#include <stdio.h>

int	check_alpha(char c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ret;

	ret = 1;
	i = 0;
	while (ret && str[i])
	{
		ret = check_alpha(str[i]);
		i++;
	}
	return (ret);
}

/*int	main(void)
{
	//prueba con caracter no imprimible
	char str[] = "32½";
	//prueba con caracteres imprimibles
	char str2[] = "323 ";

	int a = ft_str_is_printable(str);
	int b = ft_str_is_printable(str2); 

	printf("Salida: %d\n" , a);
	printf("Salida: %d\n" , b);
}*/
