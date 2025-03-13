/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:31:58 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/28 12:00:40 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//#include <stdio.h>

int	check_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
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
	char str[] = "12a";
	char str2[] = "Bao";
	char str3[] = "";

	//comprobacion con caracteres no alfabeticos
	int a = ft_str_is_alpha(str);
	//comprobacion con caracteres alfabeticos
	int b = ft_str_is_alpha(str2);
	//comprobacion con String vacio
	int c = ft_str_is_alpha(str3);

	printf("Salida: %d\n" , a);
	printf("Salida: %d\n" , b);
	printf("Salida: %d\n" , c);
}*/
