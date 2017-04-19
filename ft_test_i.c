/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createi: 2017/02/25 07:46:27 by mchemakh          #+#    #+#             */
/*   Upiatei: 2017/02/25 07:50:38 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_i(void)
{
	int ftret;
	int orret;

	printf("\nTEST simple [i]:\n\n");

	ftret = 0;
	orret = 0;

	ftret = ft_printf("Ft[%i]\n", 0);
	orret = printf("Or[%i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", 42);
	orret = printf("Or[%i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", 4242);
	orret = printf("Or[%i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", 424242);
	orret = printf("Or[%i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", -0);
	orret = printf("Or[%i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", -42);
	orret = printf("Or[%i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", -4242);
	orret = printf("Or[%i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i]\n", -424242);
	orret = printf("Or[%i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [ ][i]:\n");

	printf("\nTEST flags [+][i]:\n");

	printf("\nTEST flags [0][i]:\n");

	printf("\nTEST flags [dgt][i]:\n");

	printf("\nTEST flags [-dgt][i]:\n");

	printf("\nTEST flags [dgt.dgt][i]:\n");

	printf("\nTEST flags [-dgt.dgt][i]:\n");

	printf("\nTEST multiple [i]:\n\n");

	ftret = ft_printf("Ft[%i][%i][%i][%i]\n", 0, 42, 4242, 424242);
	orret = printf("Or[%i][%i][%i][%i]\n", 0, 42, 4242, 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i][%i][%i][%i]\n", -0, -42, -4242, -424242);
	orret = printf("Or[%i][%i][%i][%i]\n", -0, -42, -4242, -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	printf("\nTEST flags [+][0][dgt][i]:\n");

	printf("\nTEST flags [ ][+][0][[-]dgt.dgt]:\n");
}
