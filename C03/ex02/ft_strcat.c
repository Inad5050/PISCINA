/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:24:07 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/29 16:17:51 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	leng;
	int	i;

	leng = 0;
	i = 0;
	while (dest[leng] != '\0')
	{
		leng++;
	}
	while (src[i] != '\0')
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

	printf("%s", ft_strcat(dest, src));
	printf("\n%s", strcat(dest, src));
	return (0);
} */
