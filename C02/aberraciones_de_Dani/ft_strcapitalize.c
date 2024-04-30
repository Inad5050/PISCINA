/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:19:43 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/27 13:20:08 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	upper_if(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	upper_if(str, i);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '.' || str[i] == '+')
		{
			upper_if(str, i + 1);
		}
		else
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			{
				str[i + 1] = str[i + 1] + 32;
			}
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[30] = "HELLO lalalala BrutaL";
	char	*start;

	ft_strcapitalize(str);
	start = str;
	printf("%s\n", start);
	return (0);
}
*/