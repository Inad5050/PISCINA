/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:19:04 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/01 10:54:33 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	leng;

	i = 0;
	leng = 0;
	while (dest[leng] != '\0')
	{
		leng++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[leng + i] = src[i];
		i++;
	}
	dest[leng + i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	dest[200] = "oian es el topo";
	char	src[] = " quien sera?";
	unsigned int	nb = 5;

	printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest, src, nb));
} */
