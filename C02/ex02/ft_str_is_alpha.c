/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:15:59 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/27 12:42:32 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!str)
	{
		return (1);
	}
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "Hello";

	char	str1[] = "1" ;
	printf("Daniel%d  Otmane%d", ft_str_is_alpha(str),ft_str_is_alpha(str1));
	return (0);
}
*/