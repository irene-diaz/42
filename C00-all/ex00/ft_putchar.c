/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:14:27 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/20 14:15:32 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void main(){
    char c ='o';
    ft_putchar(c);
    return;
}*/
#include <unistd.h>

void ft_print_numbers(void){
        int i = 0;      
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


       
  
