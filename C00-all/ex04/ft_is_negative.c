/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:48:11 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/20 18:55:13 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n){
	if(n<0){
	write(1,"N",1);
	}else{
	write(1,"P",1);
	}

}

void main(){
	int num = 0;
	ft_is_negative(num);

}
