/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:56:27 by dangonz3          #+#    #+#             */
/*   Updated: 2024/02/28 16:11:52 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	i;

	i = 0;
	first = 0;
	while (str[i] != '\0')
	{
		if (first == 0 && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
		}
		if (first == 1 && ('A' <= str[i] && str[i] <= 'Z'))
			str[i] += 'a' - 'A';
		first = 1;
		if (str[i] < '0' || (str[i] > '9'
				&& str[i] < 'A') || (str[i] > 'Z'
				&& str[i] < 'a') || (str[i] > 'z'))
			first = 0;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "ffuciona VVAMoss";

	printf("%s", ft_strcapitalize(str));
	return (0);
} */
