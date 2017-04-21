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

	ftret = ft_printf("Ft[%   d]\n", 0);
	orret = printf("Or[%   d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", 42);
	orret = printf("Or[%   d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", 4242);
	orret = printf("Or[%   d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", 424242);
	orret = printf("Or[%   d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", -0);
	orret = printf("Or[%   d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", -42);
	orret = printf("Or[%   d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", -4242);
	orret = printf("Or[%   d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   d]\n", -424242);
	orret = printf("Or[%   d]\n", -424242);
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

	ftret = ft_printf("Ft[%+++d]\n", 0);
	orret = printf("Or[%+++d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", 42);
	orret = printf("Or[%+++d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", 4242);
	orret = printf("Or[%+++d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", 424242);
	orret = printf("Or[%+++d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", -0);
	orret = printf("Or[%+++d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", -42);
	orret = printf("Or[%+++d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", -4242);
	orret = printf("Or[%+++d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++d]\n", -424242);
	orret = printf("Or[%+++d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [0][d]:\n");


	printf("Supérieur:\n");
	ftret = ft_printf("Ft[%010d]\n", 0);
	orret = printf("Or[%010d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", 42);
	orret = printf("Or[%010d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", 4242);
	orret = printf("Or[%010d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", 424242);
	orret = printf("Or[%010d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", -0);
	orret = printf("Or[%010d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", -42);
	orret = printf("Or[%010d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", -4242);
	orret = printf("Or[%010d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010d]\n", -424242);
	orret = printf("Or[%010d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", 0);
	orret = printf("Or[% 010d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", 42);
	orret = printf("Or[% 010d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", 4242);
	orret = printf("Or[% 010d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", 424242);
	orret = printf("Or[% 010d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", -0);
	orret = printf("Or[% 010d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", -42);
	orret = printf("Or[% 010d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010d]\n", -4242);
	orret = printf("Or[% 010d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010dd]\n", -424242);
	orret = printf("Or[% 010d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 0);
	orret = printf("Or[%+010d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 42);
	orret = printf("Or[%+010d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 4242);
	orret = printf("Or[%+010d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 424242);
	orret = printf("Or[%+010d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -0);
	orret = printf("Or[%+010d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -42);
	orret = printf("Or[%+010d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -4242);
	orret = printf("Or[%+010d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -424242);
	orret = printf("Or[%+010d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("Egale:\n");
	ftret = ft_printf("Ft[%01d]\n", 0);
	orret = printf("Or[%01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%02d]\n", 42);
	orret = printf("Or[%02d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%04d]\n", 4242);
	orret = printf("Or[%04d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%06d]\n", 424242);
	orret = printf("Or[%06d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%02d]\n", -0);
	orret = printf("Or[%02d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%03d]\n", -42);
	orret = printf("Or[%03d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%05d]\n", -4242);
	orret = printf("Or[%05d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%07d]\n", -424242);
	orret = printf("Or[%07d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", 0);
	orret = printf("Or[% 01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 02d]\n", 42);
	orret = printf("Or[% 02d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 04d]\n", 4242);
	orret = printf("Or[% 04d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 06d]\n", 424242);
	orret = printf("Or[% 06d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", -0);
	orret = printf("Or[% 01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 03d]\n", -42);
	orret = printf("Or[% 03d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 05d]\n", -4242);
	orret = printf("Or[% 05d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 07d]\n", -424242);
	orret = printf("Or[% 07d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 0);
	orret = printf("Or[%+01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02d]\n", 42);
	orret = printf("Or[%+02d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04d]\n", 4242);
	orret = printf("Or[%+04d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+06d]\n", 424242);
	orret = printf("Or[%+06d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -0);
	orret = printf("Or[%+01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03d]\n", -42);
	orret = printf("Or[%+03d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05d]\n", -4242);
	orret = printf("Or[%+05d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07d]\n", -424242);
	orret = printf("Or[%+07d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("Inférieur:\n");
	ftret = ft_printf("Ft[%01d]\n", 0);
	orret = printf("Or[%01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", 42);
	orret = printf("Or[%01d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", 4242);
	orret = printf("Or[%01d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", 424242);
	orret = printf("Or[%01d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", -0);
	orret = printf("Or[%01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", -42);
	orret = printf("Or[%01d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", -4242);
	orret = printf("Or[%01d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01d]\n", -424242);
	orret = printf("Or[%01d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", 0);
	orret = printf("Or[% 01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", 42);
	orret = printf("Or[% 01d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", 4242);
	orret = printf("Or[% 01d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", 424242);
	orret = printf("Or[% 01d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", -0);
	orret = printf("Or[% 01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", -42);
	orret = printf("Or[% 01d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", -4242);
	orret = printf("Or[% 01d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01d]\n", -424242);
	orret = printf("Or[% 01d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 0);
	orret = printf("Or[%+01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 42);
	orret = printf("Or[%+01d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 4242);
	orret = printf("Or[%+01d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 424242);
	orret = printf("Or[%+01d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -0);
	orret = printf("Or[%+01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -42);
	orret = printf("Or[%+01d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -4242);
	orret = printf("Or[%+01d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -424242);
	orret = printf("Or[%+01d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [dgt][d]:\n");

	printf("Supérieur:\n");
	ftret = ft_printf("Ft[%10d]\n", 0);
	orret = printf("Or[%10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", 42);
	orret = printf("Or[%10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", 4242);
	orret = printf("Or[%10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", 424242);
	orret = printf("Or[%10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", -0);
	orret = printf("Or[%10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", -42);
	orret = printf("Or[%10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", -4242);
	orret = printf("Or[%10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10d]\n", -424242);
	orret = printf("Or[%10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", 0);
	orret = printf("Or[% 10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", 42);
	orret = printf("Or[% 10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", 4242);
	orret = printf("Or[% 10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", 424242);
	orret = printf("Or[% 10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", -0);
	orret = printf("Or[% 10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", -42);
	orret = printf("Or[% 10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10d]\n", -4242);
	orret = printf("Or[% 10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10dd]\n", -424242);
	orret = printf("Or[% 10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", 0);
	orret = printf("Or[%+10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", 42);
	orret = printf("Or[%+10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", 4242);
	orret = printf("Or[%+10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", 424242);
	orret = printf("Or[%+10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", -0);
	orret = printf("Or[%+10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", -42);
	orret = printf("Or[%+10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", -4242);
	orret = printf("Or[%+10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10d]\n", -424242);
	orret = printf("Or[%+10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("Egale:\n");
	ftret = ft_printf("Ft[%1d]\n", 0);
	orret = printf("Or[%1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2d]\n", 42);
	orret = printf("Or[%2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4d]\n", 4242);
	orret = printf("Or[%4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%6d]\n", 424242);
	orret = printf("Or[%6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2d]\n", -0);
	orret = printf("Or[%2d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3d]\n", -42);
	orret = printf("Or[%3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5d]\n", -4242);
	orret = printf("Or[%5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7d]\n", -424242);
	orret = printf("Or[%7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", 0);
	orret = printf("Or[% 1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 2d]\n", 42);
	orret = printf("Or[% 2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 4d]\n", 4242);
	orret = printf("Or[% 4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 6d]\n", 424242);
	orret = printf("Or[% 6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", -0);
	orret = printf("Or[% 1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 3d]\n", -42);
	orret = printf("Or[% 3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 5d]\n", -4242);
	orret = printf("Or[% 5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 7d]\n", -424242);
	orret = printf("Or[% 7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", 0);
	orret = printf("Or[%+1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+2d]\n", 42);
	orret = printf("Or[%+2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+4d]\n", 4242);
	orret = printf("Or[%+4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+6d]\n", 424242);
	orret = printf("Or[%+6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", -0);
	orret = printf("Or[%+1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+3d]\n", -42);
	orret = printf("Or[%+3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+5d]\n", -4242);
	orret = printf("Or[%+5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+7d]\n", -424242);
	orret = printf("Or[%+7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("Inférieur:\n");
	ftret = ft_printf("Ft[%1d]\n", 0);
	orret = printf("Or[%1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", 42);
	orret = printf("Or[%1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", 4242);
	orret = printf("Or[%1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", 424242);
	orret = printf("Or[%1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", -0);
	orret = printf("Or[%1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", -42);
	orret = printf("Or[%1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", -4242);
	orret = printf("Or[%1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1d]\n", -424242);
	orret = printf("Or[%1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", 0);
	orret = printf("Or[% 1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", 42);
	orret = printf("Or[% 1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", 4242);
	orret = printf("Or[% 1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", 424242);
	orret = printf("Or[% 1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", -0);
	orret = printf("Or[% 1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", -42);
	orret = printf("Or[% 1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", -4242);
	orret = printf("Or[% 1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1d]\n", -424242);
	orret = printf("Or[% 1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", 0);
	orret = printf("Or[%+1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", 42);
	orret = printf("Or[%+1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", 4242);
	orret = printf("Or[%+1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", 424242);
	orret = printf("Or[%+1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", -0);
	orret = printf("Or[%+1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", -42);
	orret = printf("Or[%+1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", -4242);
	orret = printf("Or[%+1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1d]\n", -424242);
	orret = printf("Or[%+1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [-dgt][d]:\n");

	printf("Supérieur:\n");
	ftret = ft_printf("Ft[%-10d]\n", 0);
	orret = printf("Or[%-10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", 42);
	orret = printf("Or[%-10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", 4242);
	orret = printf("Or[%-10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", 424242);
	orret = printf("Or[%-10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", -0);
	orret = printf("Or[%-10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", -42);
	orret = printf("Or[%-10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", -4242);
	orret = printf("Or[%-10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10d]\n", -424242);
	orret = printf("Or[%-10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", 0);
	orret = printf("Or[% -10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", 42);
	orret = printf("Or[% -10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", 4242);
	orret = printf("Or[% -10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", 424242);
	orret = printf("Or[% -10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", -0);
	orret = printf("Or[% -10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", -42);
	orret = printf("Or[% -10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10d]\n", -4242);
	orret = printf("Or[% -10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10dd]\n", -424242);
	orret = printf("Or[% -10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", 0);
	orret = printf("Or[%-+10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", 42);
	orret = printf("Or[%-+10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", 4242);
	orret = printf("Or[%-+10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", 424242);
	orret = printf("Or[%-+10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", -0);
	orret = printf("Or[%-+10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", -42);
	orret = printf("Or[%-+10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", -4242);
	orret = printf("Or[%-+10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10d]\n", -424242);
	orret = printf("Or[%-+10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", 0);
	orret = printf("Or[%+-10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", 42);
	orret = printf("Or[%+-10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", 4242);
	orret = printf("Or[%+-10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", 424242);
	orret = printf("Or[%+-10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", -0);
	orret = printf("Or[%+-10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", -42);
	orret = printf("Or[%+-10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", -4242);
	orret = printf("Or[%+-10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10d]\n", -424242);
	orret = printf("Or[%+-10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);



	printf("Egale:\n");
	ftret = ft_printf("Ft[%-1d]\n", 0);
	orret = printf("Or[%-1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2d]\n", 42);
	orret = printf("Or[%-2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4d]\n", 4242);
	orret = printf("Or[%-4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-6d]\n", 424242);
	orret = printf("Or[%-6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2d]\n", -0);
	orret = printf("Or[%-2d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3d]\n", -42);
	orret = printf("Or[%-3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5d]\n", -4242);
	orret = printf("Or[%-5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7d]\n", -424242);
	orret = printf("Or[%-7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", 0);
	orret = printf("Or[% -1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -2d]\n", 42);
	orret = printf("Or[% -2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -4d]\n", 4242);
	orret = printf("Or[% -4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -6d]\n", 424242);
	orret = printf("Or[% -6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", -0);
	orret = printf("Or[% -1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -3d]\n", -42);
	orret = printf("Or[% -3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -5d]\n", -4242);
	orret = printf("Or[% -5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -7d]\n", -424242);
	orret = printf("Or[% -7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", 0);
	orret = printf("Or[%-+1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+2d]\n", 42);
	orret = printf("Or[%-+2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+4d]\n", 4242);
	orret = printf("Or[%-+4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+6d]\n", 424242);
	orret = printf("Or[%-+6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", -0);
	orret = printf("Or[%-+1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+3d]\n", -42);
	orret = printf("Or[%-+3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+5d]\n", -4242);
	orret = printf("Or[%-+5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+7d]\n", -424242);
	orret = printf("Or[%-+7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", 0);
	orret = printf("Or[%+-1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-2d]\n", 42);
	orret = printf("Or[%+-2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-4d]\n", 4242);
	orret = printf("Or[%+-4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-6d]\n", 424242);
	orret = printf("Or[%+-6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", -0);
	orret = printf("Or[%+-1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-3d]\n", -42);
	orret = printf("Or[%+-3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-5d]\n", -4242);
	orret = printf("Or[%+-5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-7d]\n", -424242);
	orret = printf("Or[%+-7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);



	printf("Inférieur:\n");
	ftret = ft_printf("Ft[%-1d]\n", 0);
	orret = printf("Or[%-1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", 42);
	orret = printf("Or[%-1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", 4242);
	orret = printf("Or[%-1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", 424242);
	orret = printf("Or[%-1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", -0);
	orret = printf("Or[%-1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", -42);
	orret = printf("Or[%-1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", -4242);
	orret = printf("Or[%-1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1d]\n", -424242);
	orret = printf("Or[%-1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", 0);
	orret = printf("Or[% -1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", 42);
	orret = printf("Or[% -1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", 4242);
	orret = printf("Or[% -1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", 424242);
	orret = printf("Or[% -1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", -0);
	orret = printf("Or[% -1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", -42);
	orret = printf("Or[% -1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", -4242);
	orret = printf("Or[% -1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1d]\n", -424242);
	orret = printf("Or[% -1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", 0);
	orret = printf("Or[%-+1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", 42);
	orret = printf("Or[%-+1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", 4242);
	orret = printf("Or[%-+1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", 424242);
	orret = printf("Or[%-+1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", -0);
	orret = printf("Or[%-+1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", -42);
	orret = printf("Or[%-+1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", -4242);
	orret = printf("Or[%-+1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1d]\n", -424242);
	orret = printf("Or[%-+1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", 0);
	orret = printf("Or[%+-1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", 42);
	orret = printf("Or[%+-1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", 4242);
	orret = printf("Or[%+-1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", 424242);
	orret = printf("Or[%+-1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", -0);
	orret = printf("Or[%+-1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", -42);
	orret = printf("Or[%+-1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", -4242);
	orret = printf("Or[%+-1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1d]\n", -424242);
	orret = printf("Or[%+-1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST multiple [d]:\n\n");

	ftret = ft_printf("Ft[%d][%d][%d][%d][%.d]\n", 0, 42, 4242, 424242, 42);
	orret = printf("Or[%d][%d][%d][%d][%.d]\n", 0, 42, 4242, 424242, 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d][%d][%d][%d][%.d]\n", -0, -42, -4242, -424242, -42);
	orret = printf("Or[%d][%d][%d][%d][%.d]\n", -0, -42, -4242, -424242, -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [+][0][dgt][d]:\n");

	ftret = ft_printf("Ft[%+010d]\n", 0);
	orret = printf("Or[%+010d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 42);
	orret = printf("Or[%+010d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 4242);
	orret = printf("Or[%+010d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", 424242);
	orret = printf("Or[%+010d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -0);
	orret = printf("Or[%+010d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -42);
	orret = printf("Or[%+010d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -4242);
	orret = printf("Or[%+010d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010d]\n", -424242);
	orret = printf("Or[%+010d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 0);
	orret = printf("Or[%+01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02d]\n", 42);
	orret = printf("Or[%+02d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04d]\n", 4242);
	orret = printf("Or[%+04d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+06d]\n", 424242);
	orret = printf("Or[%+06d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -0);
	orret = printf("Or[%+01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03d]\n", -42);
	orret = printf("Or[%+03d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05d]\n", -4242);
	orret = printf("Or[%+05d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07d]\n", -424242);
	orret = printf("Or[%+07d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 0);
	orret = printf("Or[%+01d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 42);
	orret = printf("Or[%+01d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 4242);
	orret = printf("Or[%+01d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", 424242);
	orret = printf("Or[%+01d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -0);
	orret = printf("Or[%+01d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -42);
	orret = printf("Or[%+01d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -4242);
	orret = printf("Or[%+01d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01d]\n", -424242);
	orret = printf("Or[%+01d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [dgt.dgt][d]:\n");

	ftret = ft_printf("Ft[%1.1d]\n", 0);
	orret = printf("Or[%1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 42);
	orret = printf("Or[%1.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 4242);
	orret = printf("Or[%1.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 424242);
	orret = printf("Or[%1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -0);
	orret = printf("Or[%1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -42);
	orret = printf("Or[%1.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -4242);
	orret = printf("Or[%1.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -424242);
	orret = printf("Or[%1.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 0);
	orret = printf("Or[%1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.2d]\n", 42);
	orret = printf("Or[%1.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.4d]\n", 4242);
	orret = printf("Or[%1.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.6d]\n", 424242);
	orret = printf("Or[%1.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -0);
	orret = printf("Or[%1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.3d]\n", -42);
	orret = printf("Or[%1.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.5d]\n", -4242);
	orret = printf("Or[%1.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.7d]\n", -424242);
	orret = printf("Or[%1.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 0);
	orret = printf("Or[%1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2.1d]\n", 42);
	orret = printf("Or[%2.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4.1d]\n", 4242);
	orret = printf("Or[%4.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 424242);
	orret = printf("Or[%1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -0);
	orret = printf("Or[%1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3.1d]\n", -42);
	orret = printf("Or[%3.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5.1d]\n", -4242);
	orret = printf("Or[%5.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7.1d]\n", -424242);
	orret = printf("Or[%7.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", 0);
	orret = printf("Or[%1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2.2d]\n", 42);
	orret = printf("Or[%2.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4.4d]\n", 4242);
	orret = printf("Or[%4.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%6.6d]\n", 424242);
	orret = printf("Or[%6.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1d]\n", -0);
	orret = printf("Or[%1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3.3d]\n", -42);
	orret = printf("Or[%3.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5.5d]\n", -4242);
	orret = printf("Or[%5.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7.7d]\n", -424242);
	orret = printf("Or[%7.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.1d]\n", 0);
	orret = printf("Or[%10.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.2d]\n", 42);
	orret = printf("Or[%10.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.4d]\n", 4242);
	orret = printf("Or[%10.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.4d]\n", 424242);
	orret = printf("Or[%10.4d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.1d]\n", -0);
	orret = printf("Or[%10.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.3d]\n", -42);
	orret = printf("Or[%10.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.5d]\n", -4242);
	orret = printf("Or[%10.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.7d]\n", -424242);
	orret = printf("Or[%10.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.10d]\n", 0);
	orret = printf("Or[%1.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2.10d]\n", 42);
	orret = printf("Or[%2.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4.10d]\n", 4242);
	orret = printf("Or[%4.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%6.10d]\n", 424242);
	orret = printf("Or[%6.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.10d]\n", -0);
	orret = printf("Or[%1.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3.10d]\n", -42);
	orret = printf("Or[%3.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5.10d]\n", -4242);
	orret = printf("Or[%5.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7.10d]\n", -424242);
	orret = printf("Or[%7.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", 0);
	orret = printf("Or[%10.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", 42);
	orret = printf("Or[%10.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", 4242);
	orret = printf("Or[%10.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", 424242);
	orret = printf("Or[%10.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", -0);
	orret = printf("Or[%10.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", -42);
	orret = printf("Or[%10.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", -4242);
	orret = printf("Or[%10.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10d]\n", -424242);
	orret = printf("Or[%10.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", 0);
	orret = printf("Or[%9.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", 42);
	orret = printf("Or[%9.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", 4242);
	orret = printf("Or[%9.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", 424242);
	orret = printf("Or[%9.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", -0);
	orret = printf("Or[%9.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", -42);
	orret = printf("Or[%9.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", -4242);
	orret = printf("Or[%9.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10d]\n", -424242);
	orret = printf("Or[%9.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", 0);
	orret = printf("Or[%10.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", 42);
	orret = printf("Or[%10.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", 4242);
	orret = printf("Or[%10.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", 424242);
	orret = printf("Or[%10.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", -0);
	orret = printf("Or[%10.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", -42);
	orret = printf("Or[%10.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", -4242);
	orret = printf("Or[%10.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9d]\n", -424242);
	orret = printf("Or[%10.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [-dgt.dgt][d]:\n");

	ftret = ft_printf("Ft[%-1.1d]\n", 0);
	orret = printf("Or[%-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 42);
	orret = printf("Or[%-1.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 4242);
	orret = printf("Or[%-1.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 424242);
	orret = printf("Or[%-1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -0);
	orret = printf("Or[%-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -42);
	orret = printf("Or[%-1.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -4242);
	orret = printf("Or[%-1.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -424242);
	orret = printf("Or[%-1.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 0);
	orret = printf("Or[%-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.2d]\n", 42);
	orret = printf("Or[%-1.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.4d]\n", 4242);
	orret = printf("Or[%-1.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.6d]\n", 424242);
	orret = printf("Or[%-1.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -0);
	orret = printf("Or[%-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.3d]\n", -42);
	orret = printf("Or[%-1.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.5d]\n", -4242);
	orret = printf("Or[%-1.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.7d]\n", -424242);
	orret = printf("Or[%-1.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 0);
	orret = printf("Or[%-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2.1d]\n", 42);
	orret = printf("Or[%-2.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4.1d]\n", 4242);
	orret = printf("Or[%-4.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 424242);
	orret = printf("Or[%-1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -0);
	orret = printf("Or[%-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3.1d]\n", -42);
	orret = printf("Or[%-3.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5.1d]\n", -4242);
	orret = printf("Or[%-5.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7.1d]\n", -424242);
	orret = printf("Or[%-7.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", 0);
	orret = printf("Or[%-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2.2d]\n", 42);
	orret = printf("Or[%-2.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4.4d]\n", 4242);
	orret = printf("Or[%-4.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-6.6d]\n", 424242);
	orret = printf("Or[%-6.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1d]\n", -0);
	orret = printf("Or[%-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3.3d]\n", -42);
	orret = printf("Or[%-3.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5.5d]\n", -4242);
	orret = printf("Or[%-5.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7.7d]\n", -424242);
	orret = printf("Or[%-7.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.1d]\n", 0);
	orret = printf("Or[%-10.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.2d]\n", 42);
	orret = printf("Or[%-10.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.4d]\n", 4242);
	orret = printf("Or[%-10.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.6d]\n", 424242);
	orret = printf("Or[%-10.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.1d]\n", -0);
	orret = printf("Or[%-10.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.3d]\n", -42);
	orret = printf("Or[%-10.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.5d]\n", -4242);
	orret = printf("Or[%-10.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.7d]\n", -424242);
	orret = printf("Or[%-10.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.10d]\n", 0);
	orret = printf("Or[%-1.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2.10d]\n", 42);
	orret = printf("Or[%-2.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4.10d]\n", 4242);
	orret = printf("Or[%-4.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-6.10d]\n", 424242);
	orret = printf("Or[%-6.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.10d]\n", -0);
	orret = printf("Or[%-1.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3.10d]\n", -42);
	orret = printf("Or[%-3.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5.10d]\n", -4242);
	orret = printf("Or[%-5.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7.10d]\n", -424242);
	orret = printf("Or[%-7.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", 0);
	orret = printf("Or[%-10.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", 42);
	orret = printf("Or[%-10.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", 4242);
	orret = printf("Or[%-10.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", 424242);
	orret = printf("Or[%-10.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", -0);
	orret = printf("Or[%-10.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", -42);
	orret = printf("Or[%-10.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", -4242);
	orret = printf("Or[%-10.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10d]\n", -424242);
	orret = printf("Or[%-10.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", 0);
	orret = printf("Or[%-9.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", 42);
	orret = printf("Or[%-9.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", 4242);
	orret = printf("Or[%-9.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", 424242);
	orret = printf("Or[%-9.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", -0);
	orret = printf("Or[%-9.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", -42);
	orret = printf("Or[%-9.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", -4242);
	orret = printf("Or[%-9.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10d]\n", -424242);
	orret = printf("Or[%-9.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", 0);
	orret = printf("Or[%-10.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", 42);
	orret = printf("Or[%-10.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", 4242);
	orret = printf("Or[%-10.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", 424242);
	orret = printf("Or[%-10.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", -0);
	orret = printf("Or[%-10.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", -42);
	orret = printf("Or[%-10.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", -4242);
	orret = printf("Or[%-10.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9d]\n", -424242);
	orret = printf("Or[%-10.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [ ][+][0][dgt.dgt]:\n");


	printf("\nTEST flags [ ][+][[-]dgt.dgt]:\n");
}
