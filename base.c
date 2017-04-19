
#include <stdio.h>

int		ft_reverse_int(int oldres)
{
	int		res;
	int		tmp;

	res = 0;
	while (oldres != 0)
	{
		tmp = oldres % 10;
		res += tmp;
		if (oldres > 10)
			res *= 10;
		oldres /= 10;
	}
	return (res);
}

int		ft_octal(int integer)
{
	int		res;
	int		tmp;

	tmp = 0;
	res = 0;
	if (integer > 0)
	{
		while (integer != 0)
		{
			tmp = integer % 8;
			res += tmp;
			if (integer > 10)
				res *= 10;
			integer /= 8;
		}
	}
	res = ft_reverse_int(res);
	return (res);
}

int		main(void)
{
	int decimal;
	int octal;

	decimal = 1158;
	octal = ft_octal(decimal); //octal should be egal to 745
	printf("decimal[%d]\noctal[%d]\n",decimal,octal);
	return (0);
}
