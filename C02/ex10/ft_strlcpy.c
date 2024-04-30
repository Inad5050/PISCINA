/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:29:52 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/28 17:59:06 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size - 1)
	{
		dest[i] = '\0';
	}
	return (i);
}

/* int	main(void)
{
	char	dest[] = " ";
	char	src[] = "ASI ES!!";
	unsigned int	size = 3;

	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s", dest);
	return (0);
} */
