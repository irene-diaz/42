/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:52:38 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/23 13:52:34 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	int		i;

	a = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &a, 1);
		a--;
		i++;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
