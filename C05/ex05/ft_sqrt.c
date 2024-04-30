/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:03:25 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/05 20:49:13 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (result * result <= nb && result <= 46340)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}

/* int	main(void)
{
	int	nb;

	nb = 2147483646;
	printf("%d", ft_sqrt(nb));
	return (0);
} */
