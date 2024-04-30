/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:31:00 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/04 19:33:36 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
}

/* int	main(void)
{
	int nb;

	nb = 11;
	printf("%d", ft_find_next_prime(nb));
	return (0);
} */