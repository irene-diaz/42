/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:45:04 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/20 15:08:17 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_print_alphabet(void){
	char a='a';
	int i=0;
	while(i<26)
	{
		write(1, &a, 1);
		a++;
		i++;
	}
}

void main(){
    ft_print_alphabet();
    return;
}

