/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:26:39 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/04 10:55:06 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//#include <stdio.h>

int	check_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ret;

	ret = 1;
	i = 0;
	while (ret && str[i])
	{
		ret = check_numeric(str[i]);
		i++;
	}
	return (ret);
}

/*int     main(void)
{
        char str[] = "12";
        char str2[] = "Ba1";
        char str3[] = "";

        //comprobacion con caracteres numericos
        int a = ft_str_is_numeric(str);
        //comprobacion con caracteres no numericos
        int b = ft_str_is_numeric(str2);
        //comprobacion con String vacio
        int c = ft_str_is_numeric(str3);

        printf("Salida: %d\n" , a);
        printf("Salida: %d\n" , b);
        printf("Salida: %d\n" , c);
}*/
