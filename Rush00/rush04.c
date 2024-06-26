/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:00:35 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/18 17:49:50 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int izq, int medio, int dcha)
{
	int	espacio;

	espacio = 1;
	if (x > 0)
	{
		ft_putchar(izq);
	}
	while (espacio < (x - 1))
	{
		ft_putchar(medio);
		espacio++;
	}
	if (x > 1)
	{
		ft_putchar(dcha);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	espacio;

	espacio = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'C');
	}
	while (espacio < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		espacio++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'C', 'B', 'A');
	}
}
