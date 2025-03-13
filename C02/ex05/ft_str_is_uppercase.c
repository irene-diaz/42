/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:52:05 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/03 12:01:24 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//#include <stdio.h>

int	check_alpha(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_str_is_uppercase(char *str)
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
	char str[] = "DA";
	char str2[] = "daR";
	int a = ft_str_is_uppercase(str);
	int b = ft_str_is_uppercase(str2);

	printf("Salida: %d\n" , a);
	printf("Salida: %d\n" , b);
}*/
