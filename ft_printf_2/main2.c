#include <stdio.h>
#define FLAG "-+ #0"

int		ft_strchr_opt(char ch, char *str)
{
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (ch == *str)
			return (1);
		str++;
	}
	return (0);
}

int main()
{
	int res;
	char ch = '0';

	res = ft_strchr_opt('0', FLAG);
	printf("%d\n", res);
}
