/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:19:19 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/02 15:50:17 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


f
void	ft_putnbr(int nb)
{
	int	i;
	char	str[100];

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	while (nb != 0)
	{
		str[i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
		while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

/* int	main(void)
{
	int	nb = 42;

	ft_putnbr(nb);
	return (0);
} */
