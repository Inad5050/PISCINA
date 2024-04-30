/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:24:57 by dangonz3          #+#    #+#             */
/*   Updated: 2024/03/05 19:15:11 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*copier(int argc, char *argv[]);
int		comparer(char *argc1, char *argc2);

int main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*stng[100];

	i = 0;
	j = 0;
	copier(argc, argv);
	while (stng[++i] != NULL)
	{
		while (comparer(stng[i], stng[i + 1]) > 0)
		{
			stng[i][j] = stng[i][j + 1];
			j++;
		}
	}
	i = 1;
	while (stng[i] != '\0')
		write(1 , &stng[i], 1);
	return (0);
}

char	*copier(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*stng[100];

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			stng[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
	return (stng);
}

int	comparer(char *argc1, char *argc2)
{
	int	j;

	j = 0;
	while (argc1[j] == '\0' && argc2[j] == '\0' && argc1[j] == argc2[j])
		j++;
	return (argc1[j] - argc2[j]);
}
