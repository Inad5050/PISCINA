/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:19:19 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/04 20:28:31 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	WRITEME(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		WRITEME('-');
		WRITEME('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = -nb;
		WRITEME('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		WRITEME(nb + '0');
	}
}

int	main(void)
{
	int	nb = 245;

	ft_putnbr(nb);
	return (0);
}
