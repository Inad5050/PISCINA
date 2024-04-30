
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int	i;
	int j;
	int strI[100];
	int negative;
	int result;

	i = 0;
	j = 0; 
	negative = 0;
	result = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ')
	{
		i++;
		if (str[i] == '-')
			negative++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		strI[j] = str[i] - '0';
		i++;
		j++;
	}
	strI[j] = '\0';
	j = 0;
	while (str[j] != '\0')
	{
		result = result + (str[j] * (10 ^ j));
		j++;
	}
	if (negative > 0 && (negative % 2 != 0))
		result = -result;
	return (result);
}

int	main(void)
{
	char	str[] = "+-+-+    +-+--38472384732847ggg66";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}
