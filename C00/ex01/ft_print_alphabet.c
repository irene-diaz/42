/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:45:04 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/23 13:51:47 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;
	int		i;

	a = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &a, 1);
		a++;
		i++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
