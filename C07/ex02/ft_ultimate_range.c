/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:06:02 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/07 14:11:05 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int	*dest;
	int	i;

	if (min >= max)
		return (NULL);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (NULL);
	str = dest;
	i = min;
	while (i < max)
	{
		*str = i;
		str++;
		i++;
	}
	return (dest);
}

/* int main(void)
{
	int	i;
	int	*dest;
	int	min = - 5;
	int	max = 15;
	int	size = max - min;
	
	i = 0;
	dest = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", dest[i]);
		i++;
	}
	return (0);
} */