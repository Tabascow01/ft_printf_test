
#include "ft_printf.h"
#include <limits.h>

void	ft_test_j(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	printf("\nTEST min/max [j[d/i]]\n\n");

	ftret = ft_printf("Ft[%jd]\n",(intmax_t)INT_MAX);
	orret = printf("Or[%jd]\n",(intmax_t)INT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%jd]\n",(intmax_t)INT_MIN);
	orret = printf("Or[%jd]\n",(intmax_t)INT_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST min/max [j[o]]\n\n");

	ftret = ft_printf("Ft[%jo]\n",(uintmax_t)UINT_MAX);
	orret = printf("Or[%jo]\n",(uintmax_t)UINT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%jo]\n",(uintmax_t)UINT_MAX + 1);
	orret = printf("Or[%jo]\n",(uintmax_t)UINT_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST min/max [j[x/X]]\n\n");

	ftret = ft_printf("Ft[%jx]\n",(uintmax_t)UINT_MAX);
	orret = printf("Or[%jx]\n",(uintmax_t)UINT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%jx]\n",(uintmax_t)UINT_MAX + 1);
	orret = printf("Or[%jx]\n",(uintmax_t)UINT_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%jX]\n",(uintmax_t)UINT_MAX);
	orret = printf("Or[%jX]\n",(uintmax_t)UINT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%jX]\n",(uintmax_t)UINT_MAX + 1);
	orret = printf("Or[%jX]\n",(uintmax_t)UINT_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST min/max [j[u]]\n\n");

	ftret = ft_printf("Ft[%ju]\n",(uintmax_t)UINT_MAX);
	orret = printf("Or[%ju]\n",(uintmax_t)UINT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%ju]\n",(uintmax_t)UINT_MAX + 1);
	orret = printf("Or[%ju]\n",(uintmax_t)UINT_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
}
