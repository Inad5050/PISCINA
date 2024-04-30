
#include <stdio.h>
/* #include <stdlib.h> */

int ft_atoi(char *str)
{
	int	i;
	int negative;
	int result;

	i = 0;
	negative = 0;
	result = 0;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (negative > 0 && (negative % 2 != 0))
		result = -result;
	return (result);
}

/* int	main(void)
{
	char	str[] = "   +--+--3847847ggg66";
	char	str2[] = "   +--+--3847847ggg66";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str2));
	return (0);
} */
