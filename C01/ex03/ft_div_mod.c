/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:27:40 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/25 19:47:22 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a = 11;
	int b = 3;
	int *div;
	int *mod;

	ft_div_mod (11, 3, div, mod);
	return (0);
}
*/
