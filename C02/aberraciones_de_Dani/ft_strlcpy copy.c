/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:29:52 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/28 17:17:12 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	leng;

	i = 0;
	leng = 0;
	while (dest[leng] != '\0')
	{
		leng++;
	}
	while (leng + i <= size - 1 && src[i] != '\0')
	{
		leng = 0;
		dest[leng + i] = src[i];
		i++;
	}
	if (leng <= size)
	{
		dest[leng + i] = '\0';
	}
	return (leng + i);
}

int	main(void)
{
	char	dest[] = "olaaaa";
	char	src[] = "ASI ES!!";
	unsigned int	size = 3;

	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s", dest);
	return (0);
}
