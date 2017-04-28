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

static void	ft_flags_zero_sup(void);
static void	ft_flags_zero_eg(void);
static void	ft_flags_zero_inf(void);
static void	ft_flags_dgt_sup(void);
static void	ft_flags_dgt_eg(void);
static void	ft_flags_dgt_inf(void);
static void	ft_flags_dgt2_sup(void);
static void	ft_flags_dgt2_eg(void);
static void	ft_flags_dgt2_inf(void);

	int ftret = 0;
	int orret = 0;


static void	ft_simple(void)
{
	printf("\nTEST simple [d]:\n\n");

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
}

static void	ft_flags_spc(void)
{
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
}

static void	ft_flags_sign(void)
{
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
}

static void	ft_flags_zero(void)
{
	printf("\nTEST flags [0][d]:\n");
	ft_flags_zero_sup();
	ft_flags_zero_eg();
	ft_flags_zero_inf();
}

static void	ft_flags_zero_sup(void)
{
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
}

static void	ft_flags_zero_eg(void)
{
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
}

static void	ft_flags_zero_inf(void)
{
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
}

static void	ft_flags_dgt(void)
{
	printf("\nTEST flags [dgt][d]:\n");
	ft_flags_dgt_sup();
	ft_flags_dgt_eg();
	ft_flags_dgt_inf();
}

static void	ft_flags_dgt_sup(void)
{
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
}

static void	ft_flags_dgt_eg(void)
{
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
}

static void	ft_flags_dgt_inf(void)
{
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
}

static void	ft_flags_dgt2(void)
{
	printf("\nTEST flags [-dgt][d]:\n");
	ft_flags_dgt2_sup();
	ft_flags_dgt2_eg();
	ft_flags_dgt2_inf();
}

static void	ft_flags_dgt2_sup(void)
{
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
}

static void	ft_flags_dgt2_eg(void)
{
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
}

static void	ft_flags_dgt2_inf(void)
{
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
}

static void	ft_multiple(void)
{
	printf("\nTEST multiple [d]:\n\n");

	ftret = ft_printf("Ft[%d][%d][%d][%d][%.d]\n", 0, 42, 4242, 424242, 42);
	orret = printf("Or[%d][%d][%d][%d][%.d]\n", 0, 42, 4242, 424242, 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%d][%d][%d][%d][%.d]\n", -0, -42, -4242, -424242, -42);
	orret = printf("Or[%d][%d][%d][%d][%.d]\n", -0, -42, -4242, -424242, -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
}

static void	ft_flags_szdgt(void)
{
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
}

static void	ft_flags_prec_dgt(void)
{
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
}

static void	ft_flags_prec_dgt2(void)
{
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
}

static void	ft_flags_spczprec_dgt(void)
{
	printf("\nTEST flags [ ][0][dgt.dgt]:\n");

	ftret = ft_printf("Ft[% 1.1d]\n", 0);
	orret = printf("Or[% 1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 42);
	orret = printf("Or[% 1.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 4242);
	orret = printf("Or[% 1.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 424242);
	orret = printf("Or[% 1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -0);
	orret = printf("Or[% 1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -42);
	orret = printf("Or[% 1.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -4242);
	orret = printf("Or[% 1.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -424242);
	orret = printf("Or[% 1.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 0);
	orret = printf("Or[% 1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.2d]\n", 42);
	orret = printf("Or[% 1.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.4d]\n", 4242);
	orret = printf("Or[% 1.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.6d]\n", 424242);
	orret = printf("Or[% 1.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -0);
	orret = printf("Or[% 1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.3d]\n", -42);
	orret = printf("Or[% 1.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.5d]\n", -4242);
	orret = printf("Or[% 1.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.7d]\n", -424242);
	orret = printf("Or[% 1.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 0);
	orret = printf("Or[% 1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 2.1d]\n", 42);
	orret = printf("Or[% 2.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 4.1d]\n", 4242);
	orret = printf("Or[% 4.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 424242);
	orret = printf("Or[% 1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -0);
	orret = printf("Or[% 1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 3.1d]\n", -42);
	orret = printf("Or[% 3.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 5.1d]\n", -4242);
	orret = printf("Or[% 5.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 7.1d]\n", -424242);
	orret = printf("Or[% 7.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", 0);
	orret = printf("Or[% 1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 2.2d]\n", 42);
	orret = printf("Or[% 2.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 4.4d]\n", 4242);
	orret = printf("Or[% 4.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 6.6d]\n", 424242);
	orret = printf("Or[% 6.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.1d]\n", -0);
	orret = printf("Or[% 1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 3.3d]\n", -42);
	orret = printf("Or[% 3.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 5.5d]\n", -4242);
	orret = printf("Or[% 5.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 7.7d]\n", -424242);
	orret = printf("Or[% 7.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.1d]\n", 0);
	orret = printf("Or[% 10.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.2d]\n", 42);
	orret = printf("Or[% 10.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.4d]\n", 4242);
	orret = printf("Or[% 10.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.6d]\n", 424242);
	orret = printf("Or[% 10.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.1d]\n", -0);
	orret = printf("Or[% 10.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.3d]\n", -42);
	orret = printf("Or[% 10.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.5d]\n", -4242);
	orret = printf("Or[% 10.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.7d]\n", -424242);
	orret = printf("Or[% 10.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.10d]\n", 0);
	orret = printf("Or[% 1.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 2.10d]\n", 42);
	orret = printf("Or[% 2.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 4.10d]\n", 4242);
	orret = printf("Or[% 4.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 6.10d]\n", 424242);
	orret = printf("Or[% 6.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1.10d]\n", -0);
	orret = printf("Or[% 1.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 3.10d]\n", -42);
	orret = printf("Or[% 3.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 5.10d]\n", -4242);
	orret = printf("Or[% 5.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 7.10d]\n", -424242);
	orret = printf("Or[% 7.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", 0);
	orret = printf("Or[% 10.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", 42);
	orret = printf("Or[% 10.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", 4242);
	orret = printf("Or[% 10.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", 424242);
	orret = printf("Or[% 10.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", -0);
	orret = printf("Or[% 10.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", -42);
	orret = printf("Or[% 10.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", -4242);
	orret = printf("Or[% 10.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.10d]\n", -424242);
	orret = printf("Or[% 10.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", 0);
	orret = printf("Or[% 9.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", 42);
	orret = printf("Or[% 9.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", 4242);
	orret = printf("Or[% 9.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", 424242);
	orret = printf("Or[% 9.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", -0);
	orret = printf("Or[% 9.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", -42);
	orret = printf("Or[% 9.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", -4242);
	orret = printf("Or[% 9.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 9.10d]\n", -424242);
	orret = printf("Or[% 9.10d]\n", -424242);
	
	ftret = ft_printf("Ft[% 10.9d]\n", 0);
	orret = printf("Or[% 10.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", 42);
	orret = printf("Or[% 10.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", 4242);
	orret = printf("Or[% 10.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", 424242);
	orret = printf("Or[% 10.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", -0);
	orret = printf("Or[% 10.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", -42);
	orret = printf("Or[% 10.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", -4242);
	orret = printf("Or[% 10.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10.9d]\n", -424242);
	orret = printf("Or[% 10.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);


	ftret = ft_printf("Ft[% 01.1d]\n", 0);
	orret = printf("Or[% 01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 42);
	orret = printf("Or[% 01.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 4242);
	orret = printf("Or[% 01.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 424242);
	orret = printf("Or[% 01.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -0);
	orret = printf("Or[% 01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -42);
	orret = printf("Or[% 01.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -4242);
	orret = printf("Or[% 01.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -424242);
	orret = printf("Or[% 01.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 0);
	orret = printf("Or[% 01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.2d]\n", 42);
	orret = printf("Or[% 01.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.4d]\n", 4242);
	orret = printf("Or[% 01.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.6d]\n", 424242);
	orret = printf("Or[% 01.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -0);
	orret = printf("Or[% 01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.3d]\n", -42);
	orret = printf("Or[% 01.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.5d]\n", -4242);
	orret = printf("Or[% 01.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.7d]\n", -424242);
	orret = printf("Or[% 01.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 0);
	orret = printf("Or[% 01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 02.1d]\n", 42);
	orret = printf("Or[% 02.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 04.1d]\n", 4242);
	orret = printf("Or[% 04.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 424242);
	orret = printf("Or[% 01.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -0);
	orret = printf("Or[% 01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 03.1d]\n", -42);
	orret = printf("Or[% 03.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 05.1d]\n", -4242);
	orret = printf("Or[% 05.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 07.1d]\n", -424242);
	orret = printf("Or[% 07.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", 0);
	orret = printf("Or[% 01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 02.2d]\n", 42);
	orret = printf("Or[% 02.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 04.4d]\n", 4242);
	orret = printf("Or[% 04.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 06.6d]\n", 424242);
	orret = printf("Or[% 06.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.1d]\n", -0);
	orret = printf("Or[% 01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 03.3d]\n", -42);
	orret = printf("Or[% 03.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 05.5d]\n", -4242);
	orret = printf("Or[% 05.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 07.7d]\n", -424242);
	orret = printf("Or[% 07.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.1d]\n", 0);
	orret = printf("Or[% 010.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.2d]\n", 42);
	orret = printf("Or[% 010.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.4d]\n", 4242);
	orret = printf("Or[% 010.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.6d]\n", 424242);
	orret = printf("Or[% 010.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.1d]\n", -0);
	orret = printf("Or[% 010.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.3d]\n", -42);
	orret = printf("Or[% 010.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.5d]\n", -4242);
	orret = printf("Or[% 010.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.7d]\n", -424242);
	orret = printf("Or[% 010.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.10d]\n", 0);
	orret = printf("Or[% 01.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 02.10d]\n", 42);
	orret = printf("Or[% 02.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 04.10d]\n", 4242);
	orret = printf("Or[% 04.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 06.10d]\n", 424242);
	orret = printf("Or[% 06.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01.10d]\n", -0);
	orret = printf("Or[% 01.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 03.10d]\n", -42);
	orret = printf("Or[% 03.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 05.10d]\n", -4242);
	orret = printf("Or[% 05.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 07.10d]\n", -424242);
	orret = printf("Or[% 07.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", 0);
	orret = printf("Or[% 010.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", 42);
	orret = printf("Or[% 010.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", 4242);
	orret = printf("Or[% 010.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", 424242);
	orret = printf("Or[% 010.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", -0);
	orret = printf("Or[% 010.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", -42);
	orret = printf("Or[% 010.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", -4242);
	orret = printf("Or[% 010.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.10d]\n", -424242);
	orret = printf("Or[% 010.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", 0);
	orret = printf("Or[% 09.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", 42);
	orret = printf("Or[% 09.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", 4242);
	orret = printf("Or[% 09.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", 424242);
	orret = printf("Or[% 09.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", -0);
	orret = printf("Or[% 09.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", -42);
	orret = printf("Or[% 09.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", -4242);
	orret = printf("Or[% 09.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 09.10d]\n", -424242);
	orret = printf("Or[% 09.10d]\n", -424242);
	
	ftret = ft_printf("Ft[% 010.9d]\n", 0);
	orret = printf("Or[% 010.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", 42);
	orret = printf("Or[% 010.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", 4242);
	orret = printf("Or[% 010.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", 424242);
	orret = printf("Or[% 010.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", -0);
	orret = printf("Or[% 010.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", -42);
	orret = printf("Or[% 010.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", -4242);
	orret = printf("Or[% 010.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010.9d]\n", -424242);
	orret = printf("Or[% 010.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
}

static void	ft_flags_signprec_dgt(void)
{
	printf("\nTEST flags [+][dgt.dgt]:\n");


	ftret = ft_printf("Ft[%++1.1d]\n", 0);
	orret = printf("Or[%++1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 42);
	orret = printf("Or[%++1.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 4242);
	orret = printf("Or[%++1.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 424242);
	orret = printf("Or[%++1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -0);
	orret = printf("Or[%++1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -42);
	orret = printf("Or[%++1.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -4242);
	orret = printf("Or[%++1.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -424242);
	orret = printf("Or[%++1.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 0);
	orret = printf("Or[%++1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.2d]\n", 42);
	orret = printf("Or[%++1.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.4d]\n", 4242);
	orret = printf("Or[%++1.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.6d]\n", 424242);
	orret = printf("Or[%++1.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -0);
	orret = printf("Or[%++1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.3d]\n", -42);
	orret = printf("Or[%++1.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.5d]\n", -4242);
	orret = printf("Or[%++1.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.7d]\n", -424242);
	orret = printf("Or[%++1.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 0);
	orret = printf("Or[%++1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++2.1d]\n", 42);
	orret = printf("Or[%++2.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++4.1d]\n", 4242);
	orret = printf("Or[%++4.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 424242);
	orret = printf("Or[%++1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -0);
	orret = printf("Or[%++1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++3.1d]\n", -42);
	orret = printf("Or[%++3.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++5.1d]\n", -4242);
	orret = printf("Or[%++5.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++7.1d]\n", -424242);
	orret = printf("Or[%++7.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", 0);
	orret = printf("Or[%++1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++2.2d]\n", 42);
	orret = printf("Or[%++2.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++4.4d]\n", 4242);
	orret = printf("Or[%++4.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++6.6d]\n", 424242);
	orret = printf("Or[%++6.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.1d]\n", -0);
	orret = printf("Or[%++1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++3.3d]\n", -42);
	orret = printf("Or[%++3.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++5.5d]\n", -4242);
	orret = printf("Or[%++5.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++7.7d]\n", -424242);
	orret = printf("Or[%++7.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.1d]\n", 0);
	orret = printf("Or[%++10.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.2d]\n", 42);
	orret = printf("Or[%++10.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.4d]\n", 4242);
	orret = printf("Or[%++0.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.6d]\n", 424242);
	orret = printf("Or[%++10.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.1d]\n", -0);
	orret = printf("Or[%++10.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.3d]\n", -42);
	orret = printf("Or[%++10.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.5d]\n", -4242);
	orret = printf("Or[%++10.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.7d]\n", -424242);
	orret = printf("Or[%++10.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.10d]\n", 0);
	orret = printf("Or[%++1.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++2.10d]\n", 42);
	orret = printf("Or[%++2.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++4.10d]\n", 4242);
	orret = printf("Or[%++4.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++6.10d]\n", 424242);
	orret = printf("Or[%++6.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++1.10d]\n", -0);
	orret = printf("Or[%++1.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++3.10d]\n", -42);
	orret = printf("Or[%++3.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++5.10d]\n", -4242);
	orret = printf("Or[%++5.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++7.10d]\n", -424242);
	orret = printf("Or[%++7.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", 0);
	orret = printf("Or[%++10.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", 42);
	orret = printf("Or[%++10.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", 4242);
	orret = printf("Or[%++10.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", 424242);
	orret = printf("Or[%++10.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", -0);
	orret = printf("Or[%++10.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", -42);
	orret = printf("Or[%++10.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", -4242);
	orret = printf("Or[%++10.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.10d]\n", -424242);
	orret = printf("Or[%++10.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", 0);
	orret = printf("Or[%++9.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", 42);
	orret = printf("Or[%++9.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", 4242);
	orret = printf("Or[%++9.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", 424242);
	orret = printf("Or[%++9.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", -0);
	orret = printf("Or[%++9.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", -42);
	orret = printf("Or[%++9.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", -4242);
	orret = printf("Or[%++9.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++9.10d]\n", -424242);
	orret = printf("Or[%++9.10d]\n", -424242);
	
	ftret = ft_printf("Ft[%++10.9d]\n", 0);
	orret = printf("Or[%++10.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", 42);
	orret = printf("Or[%++10.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", 4242);
	orret = printf("Or[%++10.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", 424242);
	orret = printf("Or[%++10.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", -0);
	orret = printf("Or[%++10.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", -42);
	orret = printf("Or[%++10.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", -4242);
	orret = printf("Or[%++10.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%++10.9d]\n", -424242);
	orret = printf("Or[%++10.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
}

static void	ft_flags_signzprec_dgt(void)
{
	printf("\nTEST flags [+][0][dgt.dgt]:\n");

	ftret = ft_printf("Ft[%+01.1d]\n", 0);
	orret = printf("Or[%+01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 42);
	orret = printf("Or[%+01.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 4242);
	orret = printf("Or[%+01.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 424242);
	orret = printf("Or[%+01.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -0);
	orret = printf("Or[%+01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -42);
	orret = printf("Or[%+01.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -4242);
	orret = printf("Or[%+01.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -424242);
	orret = printf("Or[%+01.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 0);
	orret = printf("Or[%+01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.2d]\n", 42);
	orret = printf("Or[%+01.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.4d]\n", 4242);
	orret = printf("Or[%+01.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.6d]\n", 424242);
	orret = printf("Or[%+01.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -0);
	orret = printf("Or[%+01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.3d]\n", -42);
	orret = printf("Or[%+01.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.5d]\n", -4242);
	orret = printf("Or[%+01.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.7d]\n", -424242);
	orret = printf("Or[%+01.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 0);
	orret = printf("Or[%+01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02.1d]\n", 42);
	orret = printf("Or[%+02.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04.1d]\n", 4242);
	orret = printf("Or[%+04.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 424242);
	orret = printf("Or[%+01.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -0);
	orret = printf("Or[%+01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03.1d]\n", -42);
	orret = printf("Or[%+03.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05.1d]\n", -4242);
	orret = printf("Or[%+05.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07.1d]\n", -424242);
	orret = printf("Or[%+07.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", 0);
	orret = printf("Or[%+01.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02.2d]\n", 42);
	orret = printf("Or[%+02.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04.4d]\n", 4242);
	orret = printf("Or[%+04.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+06.6d]\n", 424242);
	orret = printf("Or[%+06.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.1d]\n", -0);
	orret = printf("Or[%+01.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03.3d]\n", -42);
	orret = printf("Or[%+03.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05.5d]\n", -4242);
	orret = printf("Or[%+05.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07.7d]\n", -424242);
	orret = printf("Or[%+07.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.1d]\n", 0);
	orret = printf("Or[%+010.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.2d]\n", 42);
	orret = printf("Or[%+010.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.4d]\n", 4242);
	orret = printf("Or[%+010.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.6d]\n", 424242);
	orret = printf("Or[%+010.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.1d]\n", -0);
	orret = printf("Or[%+010.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.3d]\n", -42);
	orret = printf("Or[%+010.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.5d]\n", -4242);
	orret = printf("Or[%+010.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.7d]\n", -424242);
	orret = printf("Or[%+010.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.10d]\n", 0);
	orret = printf("Or[%+01.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02.10d]\n", 42);
	orret = printf("Or[%+02.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04.10d]\n", 4242);
	orret = printf("Or[%+04.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+06.10d]\n", 424242);
	orret = printf("Or[%+06.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01.10d]\n", -0);
	orret = printf("Or[%+01.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03.10d]\n", -42);
	orret = printf("Or[%+03.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05.10d]\n", -4242);
	orret = printf("Or[%+05.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07.10d]\n", -424242);
	orret = printf("Or[%+07.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", 0);
	orret = printf("Or[%+010.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", 42);
	orret = printf("Or[%+010.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", 4242);
	orret = printf("Or[%+010.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", 424242);
	orret = printf("Or[%+010.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", -0);
	orret = printf("Or[%+010.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", -42);
	orret = printf("Or[%+010.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", -4242);
	orret = printf("Or[%+010.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.10d]\n", -424242);
	orret = printf("Or[%+010.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", 0);
	orret = printf("Or[%+09.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", 42);
	orret = printf("Or[%+09.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", 4242);
	orret = printf("Or[%+09.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", 424242);
	orret = printf("Or[%+09.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", -0);
	orret = printf("Or[%+09.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", -42);
	orret = printf("Or[%+09.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", -4242);
	orret = printf("Or[%+09.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+09.10d]\n", -424242);
	orret = printf("Or[%+09.10d]\n", -424242);
	
	ftret = ft_printf("Ft[%+010.9d]\n", 0);
	orret = printf("Or[%+010.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", 42);
	orret = printf("Or[%+010.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", 4242);
	orret = printf("Or[%+010.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", 424242);
	orret = printf("Or[%+010.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", -0);
	orret = printf("Or[%+010.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", -42);
	orret = printf("Or[%+010.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", -4242);
	orret = printf("Or[%+010.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010.9d]\n", -424242);
	orret = printf("Or[%+010.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
}

static void	ft_flags_signprec_dgt2(void)
{
	printf("\nTEST flags [-][+][dgt.dgt]:\n");

	ftret = ft_printf("Ft[%-+1.1d]\n", 0);
	orret = printf("Or[%-+1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 42);
	orret = printf("Or[%-+1.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 4242);
	orret = printf("Or[%-+1.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 424242);
	orret = printf("Or[%-+1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -0);
	orret = printf("Or[%-+1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -42);
	orret = printf("Or[%-+1.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -4242);
	orret = printf("Or[%-+1.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -424242);
	orret = printf("Or[%-+1.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 0);
	orret = printf("Or[%-+1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.2d]\n", 42);
	orret = printf("Or[%-+1.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.4d]\n", 4242);
	orret = printf("Or[%-+1.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.6d]\n", 424242);
	orret = printf("Or[%-+1.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -0);
	orret = printf("Or[%-+1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.3d]\n", -42);
	orret = printf("Or[%-+1.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.5d]\n", -4242);
	orret = printf("Or[%-+1.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.7d]\n", -424242);
	orret = printf("Or[%-+1.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 0);
	orret = printf("Or[%-+1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+2.1d]\n", 42);
	orret = printf("Or[%-+2.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+4.1d]\n", 4242);
	orret = printf("Or[%-+4.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 424242);
	orret = printf("Or[%-+1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -0);
	orret = printf("Or[%-+1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+3.1d]\n", -42);
	orret = printf("Or[%-+3.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+5.1d]\n", -4242);
	orret = printf("Or[%-+5.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+7.1d]\n", -424242);
	orret = printf("Or[%-+7.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", 0);
	orret = printf("Or[%-+1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+2.2d]\n", 42);
	orret = printf("Or[%-+2.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+4.4d]\n", 4242);
	orret = printf("Or[%-+4.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+6.6d]\n", 424242);
	orret = printf("Or[%-+6.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.1d]\n", -0);
	orret = printf("Or[%-+1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+3.3d]\n", -42);
	orret = printf("Or[%-+3.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+5.5d]\n", -4242);
	orret = printf("Or[%-+5.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+7.7d]\n", -424242);
	orret = printf("Or[%-+7.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.1d]\n", 0);
	orret = printf("Or[%-+10.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.2d]\n", 42);
	orret = printf("Or[%-+10.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.4d]\n", 4242);
	orret = printf("Or[%-+10.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.6d]\n", 424242);
	orret = printf("Or[%-+10.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.1d]\n", -0);
	orret = printf("Or[%-+10.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.3d]\n", -42);
	orret = printf("Or[%-+10.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.5d]\n", -4242);
	orret = printf("Or[%-+10.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.7d]\n", -424242);
	orret = printf("Or[%-+10.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.10d]\n", 0);
	orret = printf("Or[%-+1.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+2.10d]\n", 42);
	orret = printf("Or[%-+2.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+4.10d]\n", 4242);
	orret = printf("Or[%-+4.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+6.10d]\n", 424242);
	orret = printf("Or[%-+6.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1.10d]\n", -0);
	orret = printf("Or[%-+1.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+3.10d]\n", -42);
	orret = printf("Or[%-+3.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+5.10d]\n", -4242);
	orret = printf("Or[%-+5.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+7.10d]\n", -424242);
	orret = printf("Or[%-+7.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", 0);
	orret = printf("Or[%-+10.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", 42);
	orret = printf("Or[%-+10.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", 4242);
	orret = printf("Or[%-+10.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", 424242);
	orret = printf("Or[%-+10.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", -0);
	orret = printf("Or[%-+10.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", -42);
	orret = printf("Or[%-+10.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", -4242);
	orret = printf("Or[%-+10.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.10d]\n", -424242);
	orret = printf("Or[%-+10.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", 0);
	orret = printf("Or[%-+9.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", 42);
	orret = printf("Or[%-+9.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", 4242);
	orret = printf("Or[%-+9.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", 424242);
	orret = printf("Or[%-+9.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", -0);
	orret = printf("Or[%-+9.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", -42);
	orret = printf("Or[%-+9.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", -4242);
	orret = printf("Or[%-+9.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+9.10d]\n", -424242);
	orret = printf("Or[%-+9.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", 0);
	orret = printf("Or[%-+10.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", 42);
	orret = printf("Or[%-+10.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", 4242);
	orret = printf("Or[%-+10.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", 424242);
	orret = printf("Or[%-+10.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", -0);
	orret = printf("Or[%-+10.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", -42);
	orret = printf("Or[%-+10.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", -4242);
	orret = printf("Or[%-+10.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10.9d]\n", -424242);
	orret = printf("Or[%-+10.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
}

static void		ft_flags_signdgt2(void)
{
	printf("\nTEST flags [+][[-]dgt.dgt]:\n");

	ftret = ft_printf("Ft[%+-1.1d]\n", 0);
	orret = printf("Or[%+-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 42);
	orret = printf("Or[%+-1.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 4242);
	orret = printf("Or[%+-1.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 424242);
	orret = printf("Or[%+-1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -0);
	orret = printf("Or[%+-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -42);
	orret = printf("Or[%+-1.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -4242);
	orret = printf("Or[%+-1.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -424242);
	orret = printf("Or[%+-1.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 0);
	orret = printf("Or[%+-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.2d]\n", 42);
	orret = printf("Or[%+-1.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.4d]\n", 4242);
	orret = printf("Or[%+-1.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.6d]\n", 424242);
	orret = printf("Or[%+-1.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -0);
	orret = printf("Or[%+-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.3d]\n", -42);
	orret = printf("Or[%+-1.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.5d]\n", -4242);
	orret = printf("Or[%+-1.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.7d]\n", -424242);
	orret = printf("Or[%+-1.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 0);
	orret = printf("Or[%+-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-2.1d]\n", 42);
	orret = printf("Or[%+-2.1d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-4.1d]\n", 4242);
	orret = printf("Or[%+-4.1d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 424242);
	orret = printf("Or[%+-1.1d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -0);
	orret = printf("Or[%+-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-3.1d]\n", -42);
	orret = printf("Or[%+-3.1d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-5.1d]\n", -4242);
	orret = printf("Or[%+-5.1d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-7.1d]\n", -424242);
	orret = printf("Or[%+-7.1d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", 0);
	orret = printf("Or[%+-1.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-2.2d]\n", 42);
	orret = printf("Or[%+-2.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-4.4d]\n", 4242);
	orret = printf("Or[%+-4.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-6.6d]\n", 424242);
	orret = printf("Or[%+-6.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.1d]\n", -0);
	orret = printf("Or[%+-1.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-3.3d]\n", -42);
	orret = printf("Or[%+-3.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-5.5d]\n", -4242);
	orret = printf("Or[%+-5.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-7.7d]\n", -424242);
	orret = printf("Or[%+-7.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.1d]\n", 0);
	orret = printf("Or[%+-10.1d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.2d]\n", 42);
	orret = printf("Or[%+-10.2d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.4d]\n", 4242);
	orret = printf("Or[%+-10.4d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.6d]\n", 424242);
	orret = printf("Or[%+-10.6d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.1d]\n", -0);
	orret = printf("Or[%+-10.1d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.3d]\n", -42);
	orret = printf("Or[%+-10.3d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.5d]\n", -4242);
	orret = printf("Or[%+-10.5d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.7d]\n", -424242);
	orret = printf("Or[%+-10.7d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.10d]\n", 0);
	orret = printf("Or[%+-1.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-2.10d]\n", 42);
	orret = printf("Or[%+-2.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-4.10d]\n", 4242);
	orret = printf("Or[%+-4.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-6.10d]\n", 424242);
	orret = printf("Or[%+-6.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1.10d]\n", -0);
	orret = printf("Or[%+-1.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-3.10d]\n", -42);
	orret = printf("Or[%+-3.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-5.10d]\n", -4242);
	orret = printf("Or[%+-5.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-7.10d]\n", -424242);
	orret = printf("Or[%+-7.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", 0);
	orret = printf("Or[%+-10.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", 42);
	orret = printf("Or[%+-10.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", 4242);
	orret = printf("Or[%+-10.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", 424242);
	orret = printf("Or[%+-10.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", -0);
	orret = printf("Or[%+-10.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", -42);
	orret = printf("Or[%+-10.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", -4242);
	orret = printf("Or[%+-10.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.10d]\n", -424242);
	orret = printf("Or[%+-10.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", 0);
	orret = printf("Or[%+-9.10d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", 42);
	orret = printf("Or[%+-9.10d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", 4242);
	orret = printf("Or[%+-9.10d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", 424242);
	orret = printf("Or[%+-9.10d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", -0);
	orret = printf("Or[%+-9.10d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", -42);
	orret = printf("Or[%+-9.10d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", -4242);
	orret = printf("Or[%+-9.10d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-9.10d]\n", -424242);
	orret = printf("Or[%+-9.10d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", 0);
	orret = printf("Or[%+-10.9d]\n", 0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", 42);
	orret = printf("Or[%+-10.9d]\n", 42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", 4242);
	orret = printf("Or[%+-10.9d]\n", 4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", 424242);
	orret = printf("Or[%+-10.9d]\n", 424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", -0);
	orret = printf("Or[%+-10.9d]\n", -0);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", -42);
	orret = printf("Or[%+-10.9d]\n", -42);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", -4242);
	orret = printf("Or[%+-10.9d]\n", -4242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10.9d]\n", -424242);
	orret = printf("Or[%+-10.9d]\n", -424242);
	printf("ft[%d]\nOr[%d]\n--------------------------------------\n", ftret, orret);
}

void	ft_test_d(int nb)
{
	if(nb == 1)
		ft_simple();
	else if (nb == 2)
		ft_multiple();
	else if (nb == 3)
		ft_flags_spc();
	else if (nb == 4)
		ft_flags_sign();
	else if (nb == 5)
		ft_flags_zero();
	else if (nb == 6)
		ft_flags_dgt();
	else if (nb == 7)
		ft_flags_dgt2();
	else if (nb == 8)
		ft_flags_szdgt();
	else if (nb == 9)
		ft_flags_prec_dgt();
	else if (nb == 10)
		ft_flags_prec_dgt2();
	else if (nb == 11)
		ft_flags_spczprec_dgt();
	else if (nb == 12)
		ft_flags_signprec_dgt();
	else if (nb == 13)
		ft_flags_signzprec_dgt();
	else if (nb == 14)
		ft_flags_signprec_dgt2();
	else if (nb == 15)
		ft_flags_signdgt2();
	else
	{
		ft_simple();
		ft_multiple();
		ft_flags_spc();
		ft_flags_sign();
		ft_flags_zero();
		ft_flags_dgt();
		ft_flags_dgt2();
		ft_flags_szdgt();
		ft_flags_prec_dgt();
		ft_flags_prec_dgt2();
		ft_flags_spczprec_dgt();
		ft_flags_signprec_dgt();
		ft_flags_signzprec_dgt();
		ft_flags_signprec_dgt2();
		ft_flags_signdgt2();
	}
}
