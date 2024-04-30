/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:22:34 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/01 10:56:46 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	leng_d;

	i = 0;
	leng_d = 0;
	while (dest[leng_d] != '\0' && leng_d < size)
	{
		leng_d++;
	}
	while (src[i] != '\0' && (leng_d + i) < (size - 1))
	{
		dest[leng_d + i] = src[i];
		i++;
	}
	if ((leng_d + i) < size)
		dest[leng_d + i] = '\0';
	return (leng_d + i);
}

int	main(void)
{
	char	src[] = " ES EL TOPO";
	char	dest[] = "oian";
	unsigned int	size = 12;

	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s", dest);
	return (0);
}
