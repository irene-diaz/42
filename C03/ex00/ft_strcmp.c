/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:12:48 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/07 10:59:12 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	status;

	status = 0;
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char str[] = "abc";
	char str2[] = "abc";
	char str3[] = "abx";
	int n= ft_strcmp(str, str2);
	int n2 = ft_strcmp(str, str3);
	int n3 = ft_strcmp(str3, str);

	printf("%i\n", n);
	printf("%i\n", n2);
	printf("%i\n", n3);
}*/
