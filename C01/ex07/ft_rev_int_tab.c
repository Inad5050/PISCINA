/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:58:10 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/25 21:14:55 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	left;
	int	right;

	left = 0;
	right = size -1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}


int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d", tab[0],tab[1],tab[2],tab[3],tab[4]);
	return (0);
}
