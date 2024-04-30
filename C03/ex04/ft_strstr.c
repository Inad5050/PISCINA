/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:50:23 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/29 16:21:51 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*j;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = str;
		j = to_find;
		while (*i == *j)
		{
			i++;
			j++;
			if (*j == '\0')
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}

/* int	main(void)
{
	char	str[] = "wewffnweifiwenfienwfniweofionoianeseltoponqicnc";
	char	to_find[] = "oian";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}
 */