/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:15:58 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/20 15:16:06 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void){
        char a='z';
        int i=0;
        while(i<26)
        {
                write(1, &a, 1);
                a--;
                i++;
        }
}

void main(){
    ft_print_alphabet();
    return;
}

