
#include "ft_printf.h"
#include <limits.h>

void	ft_test_hlhhll(void)
{
	int	ftret;
	int	orret;

	ftret = 0;
	orret = 0;

	printf("\nTest min/max[h][d/i]\n\n");

	ftret = ft_printf("Ft[%hd]\n",(short)SHRT_MAX);
	orret = printf("Or[%hd]\n",(short)SHRT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hd]\n",(short)SHRT_MIN);
	orret = printf("Or[%hd]\n",(short)SHRT_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[h][o]\n\n");

	ftret = ft_printf("Ft[%ho]\n",(unsigned short)USHRT_MAX);
	orret = printf("Or[%ho]\n",(unsigned short)USHRT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%ho]\n",(unsigned short)-1);
	orret = printf("Or[%ho]\n",(unsigned short)-1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[h][x]\n\n");

	ftret = ft_printf("Ft[%hx]\n",(unsigned short)USHRT_MAX);
	orret = printf("Or[%hx]\n",(unsigned short)USHRT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hx]\n",(unsigned short)-1);
	orret = printf("Or[%hx]\n",(unsigned short)-1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[h][X]\n\n");

	ftret = ft_printf("Ft[%hX]\n",(unsigned short)USHRT_MAX);
	orret = printf("Or[%hX]\n",(unsigned short)USHRT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hX]\n",(unsigned short)-1);
	orret = printf("Or[%hX]\n",(unsigned short)-1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[h][u]\n\n");

	ftret = ft_printf("Ft[%hu]\n",(unsigned short)USHRT_MAX);
	orret = printf("Or[%hu]\n",(unsigned short)USHRT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hu]\n",(unsigned short)-1);
	orret = printf("Or[%hu]\n",(unsigned short)-1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[l][d/i]\n\n");

	ftret = ft_printf("Ft[%ld]\n",LONG_MAX);
	orret = printf("Or[%ld]\n",LONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%ld]\n",LONG_MIN);
	orret = printf("Or[%ld]\n",LONG_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%ld]\n",LONG_MAX + 1);
	orret = printf("Or[%ld]\n",LONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[l][o]\n\n");

	ftret = ft_printf("Ft[%lo]\n",ULONG_MAX);
	orret = printf("Or[%lo]\n",ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%lo]\n",ULONG_MAX + 1);
	orret = printf("Or[%lo]\n",ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[l][x]\n\n");

	ftret = ft_printf("Ft[%lx]\n",ULONG_MAX);
	orret = printf("Or[%lx]\n",ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%lx]\n",ULONG_MAX + 1);
	orret = printf("Or[%lx]\n",ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[l][X]\n\n");

	ftret = ft_printf("Ft[%lX]\n",ULONG_MAX);
	orret = printf("Or[%lX]\n",ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%lX]\n",ULONG_MAX + 1);
	orret = printf("Or[%lX]\n",ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[l][u]\n\n");

	ftret = ft_printf("Ft[%lu]\n",ULONG_MAX);
	orret = printf("Or[%lu]\n",ULONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%lu]\n",ULONG_MAX + 1);
	orret = printf("Or[%lu]\n",ULONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[hh][d/i]\n\n");

	ftret = ft_printf("Ft[%hhd]\n",(char)CHAR_MAX);
	orret = printf("Or[%hhd]\n",(char)CHAR_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hhd]\n",(char)CHAR_MIN);
	orret = printf("Or[%hhd]\n",(char)CHAR_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[hh][o]\n\n");

	ftret = ft_printf("Ft[%hho]\n",(unsigned char)UCHAR_MAX);
	orret = printf("Or[%hho]\n",(unsigned char)UCHAR_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hho]\n",(unsigned char) -1);
	orret = printf("Or[%hho]\n",(unsigned char) -1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[hh][x]\n\n");

	ftret = ft_printf("Ft[%hhx]\n",(unsigned char)UCHAR_MAX);
	orret = printf("Or[%hhx]\n",(unsigned char)UCHAR_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hhx]\n",(unsigned char) -1);
	orret = printf("Or[%hhx]\n",(unsigned char) -1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[hh][X]\n\n");

	ftret = ft_printf("Ft[%hhX]\n",(unsigned char)UCHAR_MAX);
	orret = printf("Or[%hhX]\n",(unsigned char)UCHAR_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hhX]\n",(unsigned char) -1);
	orret = printf("Or[%hhX]\n",(unsigned char) -1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[hh][u]\n\n");

	ftret = ft_printf("Ft[%hhu]\n",(unsigned char)UCHAR_MAX);
	orret = printf("Or[%hhu]\n",(unsigned char)UCHAR_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%hhu]\n",(unsigned char) -1);
	orret = printf("Or[%hhu]\n",(unsigned char) -1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[ll][d/i]\n\n");

	ftret = ft_printf("Ft[%lld]\n",LLONG_MAX);
	orret = printf("Or[%lld]\n",LLONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%lld]\n",LLONG_MIN);
	orret = printf("Or[%lld]\n",LLONG_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%lld]\n",LLONG_MAX + 1);
	orret = printf("Or[%lld]\n",LLONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[ll][o]\n\n");

	ftret = ft_printf("Ft[%llo]\n",ULLONG_MAX);
	orret = printf("Or[%llo]\n",ULLONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%llo]\n",ULLONG_MAX + 1);
	orret = printf("Or[%llo]\n",ULLONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[ll][x]\n\n");

	ftret = ft_printf("Ft[%llx]\n",ULLONG_MAX);
	orret = printf("Or[%llx]\n",ULLONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%llx]\n",ULLONG_MAX + 1);
	orret = printf("Or[%llx]\n",ULLONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[ll][X]\n\n");

	ftret = ft_printf("Ft[%llX]\n",ULLONG_MAX);
	orret = printf("Or[%llX]\n",ULLONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%llX]\n",ULLONG_MAX + 1);
	orret = printf("Or[%llX]\n",ULLONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTest min/max[ll][u]\n\n");

	ftret = ft_printf("Ft[%llu]\n",ULLONG_MAX);
	orret = printf("Or[%llu]\n",ULLONG_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%llu]\n",ULLONG_MAX + 1);
	orret = printf("Or[%llu]\n",ULLONG_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
}
