/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:21:01 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/02/25 17:16:49 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;

    	// Imprimir el array antes de invertirlo
    	printf("Array original: ");
	i=0;
	while (i<size)
	{
		printf("%d ", arr[i]);
		i++;
	}

	printf("\n");

  	// Llamar a la función para invertir el array
  	ft_rev_int_tab(arr, size);

 	// Imprimir el array después de invertirlo
 	printf("Array invertido: ");
	
	i=0;	
	while (i<size)
        {
                printf("%d ", arr[i]);
		i++;
        }

	printf("\n");

	return 0; 
}*/
