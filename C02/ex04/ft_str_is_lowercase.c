/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:35:06 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/03 13:39:50 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <unistd.h>

//#include <stdio.h>

int	check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_lowercase(char *str)
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
	char str[] = "123a";
	char str2[] = "ba";
	int a = ft_str_is_lowercase(str);
	int b = ft_str_is_lowercase(str2);

	printf("Salida: %d\n" , a);
	printf("Salida: %d\n" , b);
}*/
