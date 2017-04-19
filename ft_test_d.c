/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 06:58:53 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 10:15:53 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_d(void)
{
	int ftret;
	int orret;

	printf("\nTEST simple [d]:\n\n");

	ftret = 0;
	orret = 0;

	ftret = ft_printf("Ft[%d]\n", 0);
	orret = printf("Or[%d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 42);
	orret = printf("Or[%d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 4242);
	orret = printf("Or[%d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 424242);
	orret = printf("Or[%d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -0);
	orret = printf("Or[%d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -42);
	orret = printf("Or[%d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -4242);
	orret = printf("Or[%d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -424242);
	orret = printf("Or[%d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [ ][d]:\n");

	ftret = ft_printf("Ft[% d]\n", 0);
	orret = printf("Or[% d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", 42);
	orret = printf("Or[% d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", 4242);
	orret = printf("Or[% d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", 424242);
	orret = printf("Or[% d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", -0);
	orret = printf("Or[% d]\n", -0);
	printf("ft[%d]\nOr[% d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", -42);
	orret = printf("Or[% d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", -4242);
	orret = printf("Or[% d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% d]\n", -424242);
	orret = printf("Or[% d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [+][d]:\n");

	ftret = ft_printf("Ft[%+d]\n", 0);
	orret = printf("Or[%+d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", 42);
	orret = printf("Or[%+d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", 4242);
	orret = printf("Or[%+d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", 424242);
	orret = printf("Or[%+d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", -0);
	orret = printf("Or[%+d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", -42);
	orret = printf("Or[%+d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", -4242);
	orret = printf("Or[%+d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+d]\n", -424242);
	orret = printf("Or[%+d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [0][d]:\n");

	ftret = ft_printf("Ft[%d]\n", 0);
	orret = printf("Or[%d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 42);
	orret = printf("Or[%d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 4242);
	orret = printf("Or[%d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 424242);
	orret = printf("Or[%d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -0);
	orret = printf("Or[%d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -42);
	orret = printf("Or[%d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -4242);
	orret = printf("Or[%d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -424242);
	orret = printf("Or[%d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
	printf("\nTEST flags [dgt][d]:\n");
	ftret = ft_printf("Ft[%d]\n", 0);
	orret = printf("Or[%d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 42);
	orret = printf("Or[%d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 4242);
	orret = printf("Or[%d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 424242);
	orret = printf("Or[%d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -0);
	orret = printf("Or[%d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -42);
	orret = printf("Or[%d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -4242);
	orret = printf("Or[%d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -424242);
	orret = printf("Or[%d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [-dgt][d]:\n");

	ftret = ft_printf("Ft[%d]\n", 0);
	orret = printf("Or[%d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 42);
	orret = printf("Or[%d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 4242);
	orret = printf("Or[%d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 424242);
	orret = printf("Or[%d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -0);
	orret = printf("Or[%d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -42);
	orret = printf("Or[%d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -4242);
	orret = printf("Or[%d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -424242);
	orret = printf("Or[%d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

/*
	printf("\nTEST flags [dgt.dgt][d]:\n");

	ftret = ft_printf("Ft[%d]\n", 0);
	orret = printf("Or[%d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 42);
	orret = printf("Or[%d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 4242);
	orret = printf("Or[%d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 424242);
	orret = printf("Or[%d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -0);
	orret = printf("Or[%d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -42);
	orret = printf("Or[%d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -4242);
	orret = printf("Or[%d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -424242);
	orret = printf("Or[%d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
*/
/*
	printf("\nTEST flags [-dgt.dgt][d]:\n");

	ftret = ft_printf("Ft[%d]\n", 0);
	orret = printf("Or[%d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 42);
	orret = printf("Or[%d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 4242);
	orret = printf("Or[%d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", 424242);
	orret = printf("Or[%d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -0);
	orret = printf("Or[%d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -42);
	orret = printf("Or[%d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -4242);
	orret = printf("Or[%d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d]\n", -424242);
	orret = printf("Or[%d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
*/

	printf("\nTEST multiple [d]:\n\n");

	ftret = ft_printf("Ft[%d][%d][%d][%d]\n", 0, 42, 4242, 424242);
	orret = printf("Or[%d][%d][%d][%d]\n", 0, 42, 4242, 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d][%d][%d][%d]\n", -0, -42, -4242, -424242);
	orret = printf("Or[%d][%d][%d][%d]\n", -0, -42, -4242, -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	printf("\nTEST flags [+][0][dgt][d]:\n");

	printf("\nTEST flags [ ][+][0][[-]dgt.dgt]:\n");
}
