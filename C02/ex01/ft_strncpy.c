/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:28:44 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/27 12:42:20 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char	*start;

	start = dest;
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (start);
}

/*
int	main(void)
{
	char dest[] = "hello2";
	const char	src[] = "HELLO";

	printf("%s", ft_strncpy(dest, src, 8));
	return (0);
}
*/