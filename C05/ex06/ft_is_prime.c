/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:04:48 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/04 19:37:10 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	int nb;

	nb = 11;
	printf("%d", ft_is_prime(nb));
	return (0);
} */
