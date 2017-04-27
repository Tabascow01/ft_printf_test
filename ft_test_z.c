
#include "ft_printf.h"
#include <limits.h>

void	ft_test_z(void)
{
	int ftret;
	int orret;
	
	ftret = 0;
	orret = 0;

	printf("\nTest min/max [z][d/i]\n\n");

	ftret= ft_printf("Ft[%zd]\n",LLONG_MAX);
	orret = printf("Or[%zd]\n",LLONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);

	ftret= ft_printf("Ft[%zd]\n",LLONG_MIN);
	orret = printf("Or[%zd]\n",LLONG_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);


	printf("\nTest min/max [z][o]\n\n");

	ftret= ft_printf("Ft[%zo]\n",(size_t)ULONG_MAX);
	orret = printf("Or[%zo]\n",(size_t)ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);

	ftret= ft_printf("Ft[%zo]\n",(size_t)ULONG_MAX + 1);
	orret = printf("Or[%zo]\n",(size_t)ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);


	printf("\nTest min/max [z][x]\n\n");

	ftret= ft_printf("Ft[%zx]\n",(size_t)ULONG_MAX);
	orret = printf("Or[%zx]\n",(size_t)ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);

	ftret= ft_printf("Ft[%zx]\n",(size_t)ULONG_MAX + 1);
	orret = printf("Or[%zx]\n",(size_t)ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);


	printf("\nTest min/max [z][X]\n\n");

	ftret= ft_printf("Ft[%zX]\n",(size_t)ULONG_MAX);
	orret = printf("Or[%zX]\n",(size_t)ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);

	ftret= ft_printf("Ft[%zX]\n",(size_t)ULONG_MAX + 1);
	orret = printf("Or[%zX]\n",(size_t)ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);


	printf("\nTest min/max [z][u]\n\n");

	ftret= ft_printf("Ft[%zu]\n",(size_t)ULONG_MAX);
	orret = printf("Or[%zu]\n",(size_t)ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);

	ftret= ft_printf("Ft[%zu]\n",(size_t)ULONG_MAX + 1);
	orret = printf("Or[%zu]\n",(size_t)ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret, orret);
}
