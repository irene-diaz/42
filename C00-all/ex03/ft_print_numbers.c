/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:54:04 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/20 18:12:00 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void){
        int i= 	0;
        char d='0';
        while(i<10){
	  write(1, &d, 1);
	  i++;
	  d++;
}
}

void main(){
	ft_print_numbers();
	return;
}
