/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:10:52 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/03/09 21:37:18 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c){
    write(1, &c, 1);
}
int main(int argc, char *argv[])
{
    if(argc<2)
    {
        write(1, "\n", 1);
        return (0);
    }

    char *str = argv[1];
    int i=0;
    while (*str){
        write(1, str, 1);
        str++;
    }

}