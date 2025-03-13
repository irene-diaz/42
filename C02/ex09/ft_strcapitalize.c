/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:52:11 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/03 12:43:09 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
			str[i] -= ('a' - 'A');
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !new_word)
			str[i] += ('a' - 'A');
		new_word = !(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A'
				&& str[i] <= 'Z') && !(str[i] >= '0'
				&& str[i] <= '9');
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "salUt, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Cadena con las primeras letras en mayusculas:  %s\n",
       	ft_strcapitalize(str));
}*/
