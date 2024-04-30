/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:56:07 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/06 19:30:16 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer2(char *stnga, char *stngb)
{
	write(1, &stnga[0], 1);
	write(1, &stnga[1], 1);
	write(1, " ", 1);
	write(1, &stngb[0], 1);
	write(1, &stngb[1], 1);
	write(1, ",", 1);
}

void printer(int a, int b)
{
	char	stnga[2];
	char	stngb[2];

	stnga[0] = '0';
	stngb[0] = '0';
	if (a > 9)
		stnga[0] = a / 10 + '0';
		stnga[1] = a % 10 + '0';
	if (a <= 9)
		stnga[1] = a + '0'; 
	if (b > 9)
		stngb[0] = b / 10 + '0';
		stngb[1] = b % 10 + '0';
	if (b <= 9)
		stnga[1] = b + '0'; 
	printer2(stnga, stngb);
}

void ft_print_comb2(void)
{
	int		a;
	int 	b;

	a = 0;
	b = 0;
	while (a < 99 || b < 99)
	{
		while (b < 99)
		{
			if (b != 0)
				write(1, " ", 1);
			printer(0, b);
			b++;
		}
		a++;
		write(1, " ", 1);
		printer(a, b);
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}