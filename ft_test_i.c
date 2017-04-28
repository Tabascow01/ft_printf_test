/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createi: 2017/02/25 06:58:53 by mchemakh          #+#    #+#             */
/*   Upiatei: 2017/02/25 10:15:53 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_flags_zero_sup_i(void);
static void	ft_flags_zero_eg_i(void);
static void	ft_flags_zero_inf_i(void);
static void	ft_flags_dgt_sup_i(void);
static void	ft_flags_dgt_eg_i(void);
static void	ft_flags_dgt_inf_i(void);
static void	ft_flags_dgt2_sup_i(void);
static void	ft_flags_dgt2_eg_i(void);
static void	ft_flags_dgt2_inf_i(void);

	int ftret_i = 0;
	int orret_i = 0;


static void	ft_simple_i(void)
{
	printf("\nTEST simple [i]:\n\n");

	ftret_i = ft_printf("Ft[%i]\n", 0);
	orret_i = printf("Or[%i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", 42);
	orret_i = printf("Or[%i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", 4242);
	orret_i = printf("Or[%i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", 424242);
	orret_i = printf("Or[%i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", -0);
	orret_i = printf("Or[%i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", -42);
	orret_i = printf("Or[%i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", -4242);
	orret_i = printf("Or[%i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i]\n", -424242);
	orret_i = printf("Or[%i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_spc_i(void)
{
	printf("\nTEST flags [ ][i]:\n");

	ftret_i = ft_printf("Ft[% i]\n", 0);
	orret_i = printf("Or[% i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", 42);
	orret_i = printf("Or[% i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", 4242);
	orret_i = printf("Or[% i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", 424242);
	orret_i = printf("Or[% i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", -0);
	orret_i = printf("Or[% i]\n", -0);
	printf("ft[%i]\nOr[% i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", -42);
	orret_i = printf("Or[% i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", -4242);
	orret_i = printf("Or[% i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% i]\n", -424242);
	orret_i = printf("Or[% i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", 0);
	orret_i = printf("Or[%   i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", 42);
	orret_i = printf("Or[%   i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", 4242);
	orret_i = printf("Or[%   i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", 424242);
	orret_i = printf("Or[%   i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", -0);
	orret_i = printf("Or[%   i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", -42);
	orret_i = printf("Or[%   i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", -4242);
	orret_i = printf("Or[%   i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%   i]\n", -424242);
	orret_i = printf("Or[%   i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_sign_i(void)
{
	printf("\nTEST flags [+][i]:\n");

	ftret_i = ft_printf("Ft[%+i]\n", 0);
	orret_i = printf("Or[%+i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", 42);
	orret_i = printf("Or[%+i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", 4242);
	orret_i = printf("Or[%+i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", 424242);
	orret_i = printf("Or[%+i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", -0);
	orret_i = printf("Or[%+i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", -42);
	orret_i = printf("Or[%+i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", -4242);
	orret_i = printf("Or[%+i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+i]\n", -424242);
	orret_i = printf("Or[%+i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", 0);
	orret_i = printf("Or[%+++i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", 42);
	orret_i = printf("Or[%+++i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", 4242);
	orret_i = printf("Or[%+++i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", 424242);
	orret_i = printf("Or[%+++i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", -0);
	orret_i = printf("Or[%+++i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", -42);
	orret_i = printf("Or[%+++i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", -4242);
	orret_i = printf("Or[%+++i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+++i]\n", -424242);
	orret_i = printf("Or[%+++i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_zero_i(void)
{
	printf("\nTEST flags [0][i]:\n");
	ft_flags_zero_sup_i();
	ft_flags_zero_eg_i();
	ft_flags_zero_inf_i();
}

static void	ft_flags_zero_sup_i(void)
{
	printf("Supérieur:\n");
	ftret_i = ft_printf("Ft[%010i]\n", 0);
	orret_i = printf("Or[%010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", 42);
	orret_i = printf("Or[%010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", 4242);
	orret_i = printf("Or[%010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", 424242);
	orret_i = printf("Or[%010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", -0);
	orret_i = printf("Or[%010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", -42);
	orret_i = printf("Or[%010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", -4242);
	orret_i = printf("Or[%010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%010i]\n", -424242);
	orret_i = printf("Or[%010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", 0);
	orret_i = printf("Or[% 010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", 42);
	orret_i = printf("Or[% 010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", 4242);
	orret_i = printf("Or[% 010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", 424242);
	orret_i = printf("Or[% 010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", -0);
	orret_i = printf("Or[% 010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", -42);
	orret_i = printf("Or[% 010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010i]\n", -4242);
	orret_i = printf("Or[% 010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010ii]\n", -424242);
	orret_i = printf("Or[% 010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 0);
	orret_i = printf("Or[%+010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 42);
	orret_i = printf("Or[%+010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 4242);
	orret_i = printf("Or[%+010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 424242);
	orret_i = printf("Or[%+010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -0);
	orret_i = printf("Or[%+010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -42);
	orret_i = printf("Or[%+010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -4242);
	orret_i = printf("Or[%+010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -424242);
	orret_i = printf("Or[%+010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_zero_eg_i(void)
{
	printf("Egale:\n");
	ftret_i = ft_printf("Ft[%01i]\n", 0);
	orret_i = printf("Or[%01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%02i]\n", 42);
	orret_i = printf("Or[%02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%04i]\n", 4242);
	orret_i = printf("Or[%04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%06i]\n", 424242);
	orret_i = printf("Or[%06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%02i]\n", -0);
	orret_i = printf("Or[%02i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%03i]\n", -42);
	orret_i = printf("Or[%03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%05i]\n", -4242);
	orret_i = printf("Or[%05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%07i]\n", -424242);
	orret_i = printf("Or[%07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", 0);
	orret_i = printf("Or[% 01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 02i]\n", 42);
	orret_i = printf("Or[% 02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 04i]\n", 4242);
	orret_i = printf("Or[% 04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 06i]\n", 424242);
	orret_i = printf("Or[% 06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", -0);
	orret_i = printf("Or[% 01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 03i]\n", -42);
	orret_i = printf("Or[% 03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 05i]\n", -4242);
	orret_i = printf("Or[% 05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 07i]\n", -424242);
	orret_i = printf("Or[% 07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 0);
	orret_i = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+02i]\n", 42);
	orret_i = printf("Or[%+02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+04i]\n", 4242);
	orret_i = printf("Or[%+04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+06i]\n", 424242);
	orret_i = printf("Or[%+06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -0);
	orret_i = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+03i]\n", -42);
	orret_i = printf("Or[%+03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+05i]\n", -4242);
	orret_i = printf("Or[%+05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+07i]\n", -424242);
	orret_i = printf("Or[%+07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_zero_inf_i(void)
{
	printf("Inférieur:\n");
	ftret_i = ft_printf("Ft[%01i]\n", 0);
	orret_i = printf("Or[%01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", 42);
	orret_i = printf("Or[%01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", 4242);
	orret_i = printf("Or[%01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", 424242);
	orret_i = printf("Or[%01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", -0);
	orret_i = printf("Or[%01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", -42);
	orret_i = printf("Or[%01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", -4242);
	orret_i = printf("Or[%01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%01i]\n", -424242);
	orret_i = printf("Or[%01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", 0);
	orret_i = printf("Or[% 01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", 42);
	orret_i = printf("Or[% 01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", 4242);
	orret_i = printf("Or[% 01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", 424242);
	orret_i = printf("Or[% 01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", -0);
	orret_i = printf("Or[% 01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", -42);
	orret_i = printf("Or[% 01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", -4242);
	orret_i = printf("Or[% 01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01i]\n", -424242);
	orret_i = printf("Or[% 01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 0);
	orret_i = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 42);
	orret_i = printf("Or[%+01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 4242);
	orret_i = printf("Or[%+01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 424242);
	orret_i = printf("Or[%+01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -0);
	orret_i = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -42);
	orret_i = printf("Or[%+01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -4242);
	orret_i = printf("Or[%+01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -424242);
	orret_i = printf("Or[%+01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_dgt_i(void)
{
	printf("\nTEST flags [dgt][i]:\n");
	ft_flags_dgt_sup_i();
	ft_flags_dgt_eg_i();
	ft_flags_dgt_inf_i();
}

static void	ft_flags_dgt_sup_i(void)
{
	printf("Supérieur:\n");
	ftret_i = ft_printf("Ft[%10i]\n", 0);
	orret_i = printf("Or[%10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", 42);
	orret_i = printf("Or[%10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", 4242);
	orret_i = printf("Or[%10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", 424242);
	orret_i = printf("Or[%10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", -0);
	orret_i = printf("Or[%10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", -42);
	orret_i = printf("Or[%10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", -4242);
	orret_i = printf("Or[%10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10i]\n", -424242);
	orret_i = printf("Or[%10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", 0);
	orret_i = printf("Or[% 10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", 42);
	orret_i = printf("Or[% 10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", 4242);
	orret_i = printf("Or[% 10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", 424242);
	orret_i = printf("Or[% 10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", -0);
	orret_i = printf("Or[% 10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", -42);
	orret_i = printf("Or[% 10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10i]\n", -4242);
	orret_i = printf("Or[% 10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10ii]\n", -424242);
	orret_i = printf("Or[% 10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", 0);
	orret_i = printf("Or[%+10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", 42);
	orret_i = printf("Or[%+10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", 4242);
	orret_i = printf("Or[%+10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", 424242);
	orret_i = printf("Or[%+10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", -0);
	orret_i = printf("Or[%+10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", -42);
	orret_i = printf("Or[%+10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", -4242);
	orret_i = printf("Or[%+10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+10i]\n", -424242);
	orret_i = printf("Or[%+10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_dgt_eg_i(void)
{
	printf("Egale:\n");
	ftret_i = ft_printf("Ft[%1i]\n", 0);
	orret_i = printf("Or[%1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%2i]\n", 42);
	orret_i = printf("Or[%2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%4i]\n", 4242);
	orret_i = printf("Or[%4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%6i]\n", 424242);
	orret_i = printf("Or[%6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%2i]\n", -0);
	orret_i = printf("Or[%2i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%3i]\n", -42);
	orret_i = printf("Or[%3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%5i]\n", -4242);
	orret_i = printf("Or[%5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%7i]\n", -424242);
	orret_i = printf("Or[%7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", 0);
	orret_i = printf("Or[% 1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 2i]\n", 42);
	orret_i = printf("Or[% 2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 4i]\n", 4242);
	orret_i = printf("Or[% 4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 6i]\n", 424242);
	orret_i = printf("Or[% 6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", -0);
	orret_i = printf("Or[% 1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 3i]\n", -42);
	orret_i = printf("Or[% 3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 5i]\n", -4242);
	orret_i = printf("Or[% 5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 7i]\n", -424242);
	orret_i = printf("Or[% 7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", 0);
	orret_i = printf("Or[%+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+2i]\n", 42);
	orret_i = printf("Or[%+2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+4i]\n", 4242);
	orret_i = printf("Or[%+4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+6i]\n", 424242);
	orret_i = printf("Or[%+6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", -0);
	orret_i = printf("Or[%+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+3i]\n", -42);
	orret_i = printf("Or[%+3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+5i]\n", -4242);
	orret_i = printf("Or[%+5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+7i]\n", -424242);
	orret_i = printf("Or[%+7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_dgt_inf_i(void)
{
	printf("Inférieur:\n");
	ftret_i = ft_printf("Ft[%1i]\n", 0);
	orret_i = printf("Or[%1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", 42);
	orret_i = printf("Or[%1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", 4242);
	orret_i = printf("Or[%1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", 424242);
	orret_i = printf("Or[%1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", -0);
	orret_i = printf("Or[%1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", -42);
	orret_i = printf("Or[%1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", -4242);
	orret_i = printf("Or[%1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1i]\n", -424242);
	orret_i = printf("Or[%1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", 0);
	orret_i = printf("Or[% 1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", 42);
	orret_i = printf("Or[% 1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", 4242);
	orret_i = printf("Or[% 1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", 424242);
	orret_i = printf("Or[% 1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", -0);
	orret_i = printf("Or[% 1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", -42);
	orret_i = printf("Or[% 1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", -4242);
	orret_i = printf("Or[% 1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1i]\n", -424242);
	orret_i = printf("Or[% 1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", 0);
	orret_i = printf("Or[%+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", 42);
	orret_i = printf("Or[%+1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", 4242);
	orret_i = printf("Or[%+1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", 424242);
	orret_i = printf("Or[%+1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", -0);
	orret_i = printf("Or[%+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", -42);
	orret_i = printf("Or[%+1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", -4242);
	orret_i = printf("Or[%+1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+1i]\n", -424242);
	orret_i = printf("Or[%+1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_dgt2_i(void)
{
	printf("\nTEST flags [-dgt][i]:\n");
	ft_flags_dgt2_sup_i();
	ft_flags_dgt2_eg_i();
	ft_flags_dgt2_inf_i();
}

static void	ft_flags_dgt2_sup_i(void)
{
	printf("Supérieur:\n");
	ftret_i = ft_printf("Ft[%-10i]\n", 0);
	orret_i = printf("Or[%-10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", 42);
	orret_i = printf("Or[%-10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", 4242);
	orret_i = printf("Or[%-10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", 424242);
	orret_i = printf("Or[%-10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", -0);
	orret_i = printf("Or[%-10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", -42);
	orret_i = printf("Or[%-10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", -4242);
	orret_i = printf("Or[%-10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10i]\n", -424242);
	orret_i = printf("Or[%-10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", 0);
	orret_i = printf("Or[% -10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", 42);
	orret_i = printf("Or[% -10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", 4242);
	orret_i = printf("Or[% -10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", 424242);
	orret_i = printf("Or[% -10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", -0);
	orret_i = printf("Or[% -10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", -42);
	orret_i = printf("Or[% -10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10i]\n", -4242);
	orret_i = printf("Or[% -10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -10ii]\n", -424242);
	orret_i = printf("Or[% -10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", 0);
	orret_i = printf("Or[%-+10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", 42);
	orret_i = printf("Or[%-+10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", 4242);
	orret_i = printf("Or[%-+10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", 424242);
	orret_i = printf("Or[%-+10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", -0);
	orret_i = printf("Or[%-+10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", -42);
	orret_i = printf("Or[%-+10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", -4242);
	orret_i = printf("Or[%-+10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10i]\n", -424242);
	orret_i = printf("Or[%-+10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", 0);
	orret_i = printf("Or[%+-10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", 42);
	orret_i = printf("Or[%+-10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", 4242);
	orret_i = printf("Or[%+-10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", 424242);
	orret_i = printf("Or[%+-10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", -0);
	orret_i = printf("Or[%+-10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", -42);
	orret_i = printf("Or[%+-10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", -4242);
	orret_i = printf("Or[%+-10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10i]\n", -424242);
	orret_i = printf("Or[%+-10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_dgt2_eg_i(void)
{
	printf("Egale:\n");
	ftret_i = ft_printf("Ft[%-1i]\n", 0);
	orret_i = printf("Or[%-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-2i]\n", 42);
	orret_i = printf("Or[%-2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-4i]\n", 4242);
	orret_i = printf("Or[%-4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-6i]\n", 424242);
	orret_i = printf("Or[%-6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-2i]\n", -0);
	orret_i = printf("Or[%-2i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-3i]\n", -42);
	orret_i = printf("Or[%-3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-5i]\n", -4242);
	orret_i = printf("Or[%-5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-7i]\n", -424242);
	orret_i = printf("Or[%-7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", 0);
	orret_i = printf("Or[% -1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -2i]\n", 42);
	orret_i = printf("Or[% -2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -4i]\n", 4242);
	orret_i = printf("Or[% -4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -6i]\n", 424242);
	orret_i = printf("Or[% -6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", -0);
	orret_i = printf("Or[% -1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -3i]\n", -42);
	orret_i = printf("Or[% -3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -5i]\n", -4242);
	orret_i = printf("Or[% -5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -7i]\n", -424242);
	orret_i = printf("Or[% -7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", 0);
	orret_i = printf("Or[%-+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+2i]\n", 42);
	orret_i = printf("Or[%-+2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+4i]\n", 4242);
	orret_i = printf("Or[%-+4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+6i]\n", 424242);
	orret_i = printf("Or[%-+6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", -0);
	orret_i = printf("Or[%-+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+3i]\n", -42);
	orret_i = printf("Or[%-+3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+5i]\n", -4242);
	orret_i = printf("Or[%-+5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+7i]\n", -424242);
	orret_i = printf("Or[%-+7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", 0);
	orret_i = printf("Or[%+-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-2i]\n", 42);
	orret_i = printf("Or[%+-2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-4i]\n", 4242);
	orret_i = printf("Or[%+-4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-6i]\n", 424242);
	orret_i = printf("Or[%+-6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", -0);
	orret_i = printf("Or[%+-1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-3i]\n", -42);
	orret_i = printf("Or[%+-3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-5i]\n", -4242);
	orret_i = printf("Or[%+-5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-7i]\n", -424242);
	orret_i = printf("Or[%+-7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_dgt2_inf_i(void)
{
	printf("Inférieur:\n");
	ftret_i = ft_printf("Ft[%-1i]\n", 0);
	orret_i = printf("Or[%-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", 42);
	orret_i = printf("Or[%-1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", 4242);
	orret_i = printf("Or[%-1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", 424242);
	orret_i = printf("Or[%-1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", -0);
	orret_i = printf("Or[%-1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", -42);
	orret_i = printf("Or[%-1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", -4242);
	orret_i = printf("Or[%-1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1i]\n", -424242);
	orret_i = printf("Or[%-1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", 0);
	orret_i = printf("Or[% -1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", 42);
	orret_i = printf("Or[% -1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", 4242);
	orret_i = printf("Or[% -1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", 424242);
	orret_i = printf("Or[% -1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", -0);
	orret_i = printf("Or[% -1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", -42);
	orret_i = printf("Or[% -1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", -4242);
	orret_i = printf("Or[% -1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% -1i]\n", -424242);
	orret_i = printf("Or[% -1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", 0);
	orret_i = printf("Or[%-+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", 42);
	orret_i = printf("Or[%-+1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", 4242);
	orret_i = printf("Or[%-+1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", 424242);
	orret_i = printf("Or[%-+1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", -0);
	orret_i = printf("Or[%-+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", -42);
	orret_i = printf("Or[%-+1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", -4242);
	orret_i = printf("Or[%-+1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1i]\n", -424242);
	orret_i = printf("Or[%-+1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", 0);
	orret_i = printf("Or[%+-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", 42);
	orret_i = printf("Or[%+-1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", 4242);
	orret_i = printf("Or[%+-1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", 424242);
	orret_i = printf("Or[%+-1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", -0);
	orret_i = printf("Or[%+-1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", -42);
	orret_i = printf("Or[%+-1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", -4242);
	orret_i = printf("Or[%+-1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1i]\n", -424242);
	orret_i = printf("Or[%+-1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_multiple_i(void)
{
	printf("\nTEST multiple [i]:\n\n");

	ftret_i = ft_printf("Ft[%i][%i][%i][%i][%.i]\n", 0, 42, 4242, 424242, 42);
	orret_i = printf("Or[%i][%i][%i][%i][%.i]\n", 0, 42, 4242, 424242, 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%i][%i][%i][%i][%.i]\n", -0, -42, -4242, -424242, -42);
	orret_i = printf("Or[%i][%i][%i][%i][%.i]\n", -0, -42, -4242, -424242, -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_szdgt_i(void)
{
	printf("\nTEST flags [+][0][dgt][i]:\n");

	ftret_i = ft_printf("Ft[%+010i]\n", 0);
	orret_i = printf("Or[%+010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 42);
	orret_i = printf("Or[%+010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 4242);
	orret_i = printf("Or[%+010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", 424242);
	orret_i = printf("Or[%+010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -0);
	orret_i = printf("Or[%+010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -42);
	orret_i = printf("Or[%+010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -4242);
	orret_i = printf("Or[%+010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010i]\n", -424242);
	orret_i = printf("Or[%+010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 0);
	orret_i = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+02i]\n", 42);
	orret_i = printf("Or[%+02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+04i]\n", 4242);
	orret_i = printf("Or[%+04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+06i]\n", 424242);
	orret_i = printf("Or[%+06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -0);
	orret_i = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+03i]\n", -42);
	orret_i = printf("Or[%+03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+05i]\n", -4242);
	orret_i = printf("Or[%+05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+07i]\n", -424242);
	orret_i = printf("Or[%+07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 0);
	orret_i = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 42);
	orret_i = printf("Or[%+01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 4242);
	orret_i = printf("Or[%+01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", 424242);
	orret_i = printf("Or[%+01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -0);
	orret_i = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -42);
	orret_i = printf("Or[%+01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -4242);
	orret_i = printf("Or[%+01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01i]\n", -424242);
	orret_i = printf("Or[%+01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_prec_dgt_i(void)
{
	printf("\nTEST flags [dgt.dgt][i]:\n");

	ftret_i = ft_printf("Ft[%1.1i]\n", 0);
	orret_i = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 42);
	orret_i = printf("Or[%1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 4242);
	orret_i = printf("Or[%1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 424242);
	orret_i = printf("Or[%1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -0);
	orret_i = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -42);
	orret_i = printf("Or[%1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -4242);
	orret_i = printf("Or[%1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -424242);
	orret_i = printf("Or[%1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 0);
	orret_i = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.2i]\n", 42);
	orret_i = printf("Or[%1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.4i]\n", 4242);
	orret_i = printf("Or[%1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.6i]\n", 424242);
	orret_i = printf("Or[%1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -0);
	orret_i = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.3i]\n", -42);
	orret_i = printf("Or[%1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.5i]\n", -4242);
	orret_i = printf("Or[%1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.7i]\n", -424242);
	orret_i = printf("Or[%1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 0);
	orret_i = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%2.1i]\n", 42);
	orret_i = printf("Or[%2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%4.1i]\n", 4242);
	orret_i = printf("Or[%4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 424242);
	orret_i = printf("Or[%1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -0);
	orret_i = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%3.1i]\n", -42);
	orret_i = printf("Or[%3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%5.1i]\n", -4242);
	orret_i = printf("Or[%5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%7.1i]\n", -424242);
	orret_i = printf("Or[%7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", 0);
	orret_i = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%2.2i]\n", 42);
	orret_i = printf("Or[%2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%4.4i]\n", 4242);
	orret_i = printf("Or[%4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%6.6i]\n", 424242);
	orret_i = printf("Or[%6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.1i]\n", -0);
	orret_i = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%3.3i]\n", -42);
	orret_i = printf("Or[%3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%5.5i]\n", -4242);
	orret_i = printf("Or[%5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%7.7i]\n", -424242);
	orret_i = printf("Or[%7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.1i]\n", 0);
	orret_i = printf("Or[%10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.2i]\n", 42);
	orret_i = printf("Or[%10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.4i]\n", 4242);
	orret_i = printf("Or[%10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.4i]\n", 424242);
	orret_i = printf("Or[%10.4i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.1i]\n", -0);
	orret_i = printf("Or[%10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.3i]\n", -42);
	orret_i = printf("Or[%10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.5i]\n", -4242);
	orret_i = printf("Or[%10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.7i]\n", -424242);
	orret_i = printf("Or[%10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.10i]\n", 0);
	orret_i = printf("Or[%1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%2.10i]\n", 42);
	orret_i = printf("Or[%2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%4.10i]\n", 4242);
	orret_i = printf("Or[%4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%6.10i]\n", 424242);
	orret_i = printf("Or[%6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%1.10i]\n", -0);
	orret_i = printf("Or[%1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%3.10i]\n", -42);
	orret_i = printf("Or[%3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%5.10i]\n", -4242);
	orret_i = printf("Or[%5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%7.10i]\n", -424242);
	orret_i = printf("Or[%7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", 0);
	orret_i = printf("Or[%10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", 42);
	orret_i = printf("Or[%10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", 4242);
	orret_i = printf("Or[%10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", 424242);
	orret_i = printf("Or[%10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", -0);
	orret_i = printf("Or[%10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", -42);
	orret_i = printf("Or[%10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", -4242);
	orret_i = printf("Or[%10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.10i]\n", -424242);
	orret_i = printf("Or[%10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", 0);
	orret_i = printf("Or[%9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", 42);
	orret_i = printf("Or[%9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", 4242);
	orret_i = printf("Or[%9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", 424242);
	orret_i = printf("Or[%9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", -0);
	orret_i = printf("Or[%9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", -42);
	orret_i = printf("Or[%9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", -4242);
	orret_i = printf("Or[%9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%9.10i]\n", -424242);
	orret_i = printf("Or[%9.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", 0);
	orret_i = printf("Or[%10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", 42);
	orret_i = printf("Or[%10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", 4242);
	orret_i = printf("Or[%10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", 424242);
	orret_i = printf("Or[%10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", -0);
	orret_i = printf("Or[%10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", -42);
	orret_i = printf("Or[%10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", -4242);
	orret_i = printf("Or[%10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%10.9i]\n", -424242);
	orret_i = printf("Or[%10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_prec_dgt2_i(void)
{
	printf("\nTEST flags [-dgt.dgt][i]:\n");

	ftret_i = ft_printf("Ft[%-1.1i]\n", 0);
	orret_i = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 42);
	orret_i = printf("Or[%-1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 4242);
	orret_i = printf("Or[%-1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 424242);
	orret_i = printf("Or[%-1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -0);
	orret_i = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -42);
	orret_i = printf("Or[%-1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -4242);
	orret_i = printf("Or[%-1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -424242);
	orret_i = printf("Or[%-1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 0);
	orret_i = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.2i]\n", 42);
	orret_i = printf("Or[%-1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.4i]\n", 4242);
	orret_i = printf("Or[%-1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.6i]\n", 424242);
	orret_i = printf("Or[%-1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -0);
	orret_i = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.3i]\n", -42);
	orret_i = printf("Or[%-1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.5i]\n", -4242);
	orret_i = printf("Or[%-1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.7i]\n", -424242);
	orret_i = printf("Or[%-1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 0);
	orret_i = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-2.1i]\n", 42);
	orret_i = printf("Or[%-2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-4.1i]\n", 4242);
	orret_i = printf("Or[%-4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 424242);
	orret_i = printf("Or[%-1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -0);
	orret_i = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-3.1i]\n", -42);
	orret_i = printf("Or[%-3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-5.1i]\n", -4242);
	orret_i = printf("Or[%-5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-7.1i]\n", -424242);
	orret_i = printf("Or[%-7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", 0);
	orret_i = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-2.2i]\n", 42);
	orret_i = printf("Or[%-2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-4.4i]\n", 4242);
	orret_i = printf("Or[%-4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-6.6i]\n", 424242);
	orret_i = printf("Or[%-6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.1i]\n", -0);
	orret_i = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-3.3i]\n", -42);
	orret_i = printf("Or[%-3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-5.5i]\n", -4242);
	orret_i = printf("Or[%-5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-7.7i]\n", -424242);
	orret_i = printf("Or[%-7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.1i]\n", 0);
	orret_i = printf("Or[%-10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.2i]\n", 42);
	orret_i = printf("Or[%-10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.4i]\n", 4242);
	orret_i = printf("Or[%-10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.6i]\n", 424242);
	orret_i = printf("Or[%-10.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.1i]\n", -0);
	orret_i = printf("Or[%-10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.3i]\n", -42);
	orret_i = printf("Or[%-10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.5i]\n", -4242);
	orret_i = printf("Or[%-10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.7i]\n", -424242);
	orret_i = printf("Or[%-10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.10i]\n", 0);
	orret_i = printf("Or[%-1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-2.10i]\n", 42);
	orret_i = printf("Or[%-2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-4.10i]\n", 4242);
	orret_i = printf("Or[%-4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-6.10i]\n", 424242);
	orret_i = printf("Or[%-6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-1.10i]\n", -0);
	orret_i = printf("Or[%-1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-3.10i]\n", -42);
	orret_i = printf("Or[%-3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-5.10i]\n", -4242);
	orret_i = printf("Or[%-5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-7.10i]\n", -424242);
	orret_i = printf("Or[%-7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", 0);
	orret_i = printf("Or[%-10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", 42);
	orret_i = printf("Or[%-10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", 4242);
	orret_i = printf("Or[%-10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", 424242);
	orret_i = printf("Or[%-10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", -0);
	orret_i = printf("Or[%-10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", -42);
	orret_i = printf("Or[%-10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", -4242);
	orret_i = printf("Or[%-10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.10i]\n", -424242);
	orret_i = printf("Or[%-10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", 0);
	orret_i = printf("Or[%-9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", 42);
	orret_i = printf("Or[%-9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", 4242);
	orret_i = printf("Or[%-9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", 424242);
	orret_i = printf("Or[%-9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", -0);
	orret_i = printf("Or[%-9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", -42);
	orret_i = printf("Or[%-9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", -4242);
	orret_i = printf("Or[%-9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-9.10i]\n", -424242);
	orret_i = printf("Or[%-9.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", 0);
	orret_i = printf("Or[%-10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", 42);
	orret_i = printf("Or[%-10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", 4242);
	orret_i = printf("Or[%-10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", 424242);
	orret_i = printf("Or[%-10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", -0);
	orret_i = printf("Or[%-10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", -42);
	orret_i = printf("Or[%-10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", -4242);
	orret_i = printf("Or[%-10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-10.9i]\n", -424242);
	orret_i = printf("Or[%-10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_spczprec_dgt_i(void)
{
	printf("\nTEST flags [ ][0][dgt.dgt]:\n");

	ftret_i = ft_printf("Ft[% 1.1i]\n", 0);
	orret_i = printf("Or[% 1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 42);
	orret_i = printf("Or[% 1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 4242);
	orret_i = printf("Or[% 1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 424242);
	orret_i = printf("Or[% 1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -0);
	orret_i = printf("Or[% 1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -42);
	orret_i = printf("Or[% 1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -4242);
	orret_i = printf("Or[% 1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -424242);
	orret_i = printf("Or[% 1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 0);
	orret_i = printf("Or[% 1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.2i]\n", 42);
	orret_i = printf("Or[% 1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.4i]\n", 4242);
	orret_i = printf("Or[% 1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.6i]\n", 424242);
	orret_i = printf("Or[% 1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -0);
	orret_i = printf("Or[% 1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.3i]\n", -42);
	orret_i = printf("Or[% 1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.5i]\n", -4242);
	orret_i = printf("Or[% 1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.7i]\n", -424242);
	orret_i = printf("Or[% 1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 0);
	orret_i = printf("Or[% 1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 2.1i]\n", 42);
	orret_i = printf("Or[% 2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 4.1i]\n", 4242);
	orret_i = printf("Or[% 4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 424242);
	orret_i = printf("Or[% 1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -0);
	orret_i = printf("Or[% 1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 3.1i]\n", -42);
	orret_i = printf("Or[% 3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 5.1i]\n", -4242);
	orret_i = printf("Or[% 5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 7.1i]\n", -424242);
	orret_i = printf("Or[% 7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", 0);
	orret_i = printf("Or[% 1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 2.2i]\n", 42);
	orret_i = printf("Or[% 2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 4.4i]\n", 4242);
	orret_i = printf("Or[% 4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 6.6i]\n", 424242);
	orret_i = printf("Or[% 6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.1i]\n", -0);
	orret_i = printf("Or[% 1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 3.3i]\n", -42);
	orret_i = printf("Or[% 3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 5.5i]\n", -4242);
	orret_i = printf("Or[% 5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 7.7i]\n", -424242);
	orret_i = printf("Or[% 7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.1i]\n", 0);
	orret_i = printf("Or[% 10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.2i]\n", 42);
	orret_i = printf("Or[% 10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.4i]\n", 4242);
	orret_i = printf("Or[% 10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.6i]\n", 424242);
	orret_i = printf("Or[% 10.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.1i]\n", -0);
	orret_i = printf("Or[% 10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.3i]\n", -42);
	orret_i = printf("Or[% 10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.5i]\n", -4242);
	orret_i = printf("Or[% 10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.7i]\n", -424242);
	orret_i = printf("Or[% 10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.10i]\n", 0);
	orret_i = printf("Or[% 1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 2.10i]\n", 42);
	orret_i = printf("Or[% 2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 4.10i]\n", 4242);
	orret_i = printf("Or[% 4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 6.10i]\n", 424242);
	orret_i = printf("Or[% 6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 1.10i]\n", -0);
	orret_i = printf("Or[% 1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 3.10i]\n", -42);
	orret_i = printf("Or[% 3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 5.10i]\n", -4242);
	orret_i = printf("Or[% 5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 7.10i]\n", -424242);
	orret_i = printf("Or[% 7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", 0);
	orret_i = printf("Or[% 10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", 42);
	orret_i = printf("Or[% 10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", 4242);
	orret_i = printf("Or[% 10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", 424242);
	orret_i = printf("Or[% 10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", -0);
	orret_i = printf("Or[% 10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", -42);
	orret_i = printf("Or[% 10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", -4242);
	orret_i = printf("Or[% 10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.10i]\n", -424242);
	orret_i = printf("Or[% 10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", 0);
	orret_i = printf("Or[% 9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", 42);
	orret_i = printf("Or[% 9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", 4242);
	orret_i = printf("Or[% 9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", 424242);
	orret_i = printf("Or[% 9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", -0);
	orret_i = printf("Or[% 9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", -42);
	orret_i = printf("Or[% 9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", -4242);
	orret_i = printf("Or[% 9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 9.10i]\n", -424242);
	orret_i = printf("Or[% 9.10i]\n", -424242);
	
	ftret_i = ft_printf("Ft[% 10.9i]\n", 0);
	orret_i = printf("Or[% 10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", 42);
	orret_i = printf("Or[% 10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", 4242);
	orret_i = printf("Or[% 10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", 424242);
	orret_i = printf("Or[% 10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", -0);
	orret_i = printf("Or[% 10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", -42);
	orret_i = printf("Or[% 10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", -4242);
	orret_i = printf("Or[% 10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 10.9i]\n", -424242);
	orret_i = printf("Or[% 10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);


	ftret_i = ft_printf("Ft[% 01.1i]\n", 0);
	orret_i = printf("Or[% 01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 42);
	orret_i = printf("Or[% 01.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 4242);
	orret_i = printf("Or[% 01.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 424242);
	orret_i = printf("Or[% 01.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -0);
	orret_i = printf("Or[% 01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -42);
	orret_i = printf("Or[% 01.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -4242);
	orret_i = printf("Or[% 01.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -424242);
	orret_i = printf("Or[% 01.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 0);
	orret_i = printf("Or[% 01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.2i]\n", 42);
	orret_i = printf("Or[% 01.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.4i]\n", 4242);
	orret_i = printf("Or[% 01.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.6i]\n", 424242);
	orret_i = printf("Or[% 01.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -0);
	orret_i = printf("Or[% 01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.3i]\n", -42);
	orret_i = printf("Or[% 01.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.5i]\n", -4242);
	orret_i = printf("Or[% 01.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.7i]\n", -424242);
	orret_i = printf("Or[% 01.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 0);
	orret_i = printf("Or[% 01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 02.1i]\n", 42);
	orret_i = printf("Or[% 02.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 04.1i]\n", 4242);
	orret_i = printf("Or[% 04.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 424242);
	orret_i = printf("Or[% 01.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -0);
	orret_i = printf("Or[% 01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 03.1i]\n", -42);
	orret_i = printf("Or[% 03.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 05.1i]\n", -4242);
	orret_i = printf("Or[% 05.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 07.1i]\n", -424242);
	orret_i = printf("Or[% 07.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", 0);
	orret_i = printf("Or[% 01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 02.2i]\n", 42);
	orret_i = printf("Or[% 02.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 04.4i]\n", 4242);
	orret_i = printf("Or[% 04.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 06.6i]\n", 424242);
	orret_i = printf("Or[% 06.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.1i]\n", -0);
	orret_i = printf("Or[% 01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 03.3i]\n", -42);
	orret_i = printf("Or[% 03.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 05.5i]\n", -4242);
	orret_i = printf("Or[% 05.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 07.7i]\n", -424242);
	orret_i = printf("Or[% 07.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.1i]\n", 0);
	orret_i = printf("Or[% 010.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.2i]\n", 42);
	orret_i = printf("Or[% 010.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.4i]\n", 4242);
	orret_i = printf("Or[% 010.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.6i]\n", 424242);
	orret_i = printf("Or[% 010.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.1i]\n", -0);
	orret_i = printf("Or[% 010.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.3i]\n", -42);
	orret_i = printf("Or[% 010.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.5i]\n", -4242);
	orret_i = printf("Or[% 010.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.7i]\n", -424242);
	orret_i = printf("Or[% 010.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.10i]\n", 0);
	orret_i = printf("Or[% 01.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 02.10i]\n", 42);
	orret_i = printf("Or[% 02.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 04.10i]\n", 4242);
	orret_i = printf("Or[% 04.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 06.10i]\n", 424242);
	orret_i = printf("Or[% 06.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 01.10i]\n", -0);
	orret_i = printf("Or[% 01.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 03.10i]\n", -42);
	orret_i = printf("Or[% 03.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 05.10i]\n", -4242);
	orret_i = printf("Or[% 05.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 07.10i]\n", -424242);
	orret_i = printf("Or[% 07.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", 0);
	orret_i = printf("Or[% 010.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", 42);
	orret_i = printf("Or[% 010.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", 4242);
	orret_i = printf("Or[% 010.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", 424242);
	orret_i = printf("Or[% 010.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", -0);
	orret_i = printf("Or[% 010.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", -42);
	orret_i = printf("Or[% 010.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", -4242);
	orret_i = printf("Or[% 010.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.10i]\n", -424242);
	orret_i = printf("Or[% 010.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", 0);
	orret_i = printf("Or[% 09.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", 42);
	orret_i = printf("Or[% 09.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", 4242);
	orret_i = printf("Or[% 09.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", 424242);
	orret_i = printf("Or[% 09.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", -0);
	orret_i = printf("Or[% 09.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", -42);
	orret_i = printf("Or[% 09.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", -4242);
	orret_i = printf("Or[% 09.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 09.10i]\n", -424242);
	orret_i = printf("Or[% 09.10i]\n", -424242);
	
	ftret_i = ft_printf("Ft[% 010.9i]\n", 0);
	orret_i = printf("Or[% 010.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", 42);
	orret_i = printf("Or[% 010.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", 4242);
	orret_i = printf("Or[% 010.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", 424242);
	orret_i = printf("Or[% 010.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", -0);
	orret_i = printf("Or[% 010.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", -42);
	orret_i = printf("Or[% 010.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", -4242);
	orret_i = printf("Or[% 010.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[% 010.9i]\n", -424242);
	orret_i = printf("Or[% 010.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_signprec_dgt_i(void)
{
	printf("\nTEST flags [+][dgt.dgt]:\n");


	ftret_i = ft_printf("Ft[%++1.1i]\n", 0);
	orret_i = printf("Or[%++1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 42);
	orret_i = printf("Or[%++1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 4242);
	orret_i = printf("Or[%++1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 424242);
	orret_i = printf("Or[%++1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -0);
	orret_i = printf("Or[%++1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -42);
	orret_i = printf("Or[%++1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -4242);
	orret_i = printf("Or[%++1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -424242);
	orret_i = printf("Or[%++1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 0);
	orret_i = printf("Or[%++1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.2i]\n", 42);
	orret_i = printf("Or[%++1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.4i]\n", 4242);
	orret_i = printf("Or[%++1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.6i]\n", 424242);
	orret_i = printf("Or[%++1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -0);
	orret_i = printf("Or[%++1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.3i]\n", -42);
	orret_i = printf("Or[%++1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.5i]\n", -4242);
	orret_i = printf("Or[%++1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.7i]\n", -424242);
	orret_i = printf("Or[%++1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 0);
	orret_i = printf("Or[%++1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++2.1i]\n", 42);
	orret_i = printf("Or[%++2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++4.1i]\n", 4242);
	orret_i = printf("Or[%++4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 424242);
	orret_i = printf("Or[%++1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -0);
	orret_i = printf("Or[%++1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++3.1i]\n", -42);
	orret_i = printf("Or[%++3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++5.1i]\n", -4242);
	orret_i = printf("Or[%++5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++7.1i]\n", -424242);
	orret_i = printf("Or[%++7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", 0);
	orret_i = printf("Or[%++1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++2.2i]\n", 42);
	orret_i = printf("Or[%++2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++4.4i]\n", 4242);
	orret_i = printf("Or[%++4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++6.6i]\n", 424242);
	orret_i = printf("Or[%++6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.1i]\n", -0);
	orret_i = printf("Or[%++1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++3.3i]\n", -42);
	orret_i = printf("Or[%++3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++5.5i]\n", -4242);
	orret_i = printf("Or[%++5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++7.7i]\n", -424242);
	orret_i = printf("Or[%++7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.1i]\n", 0);
	orret_i = printf("Or[%++10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.2i]\n", 42);
	orret_i = printf("Or[%++10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.4i]\n", 4242);
	orret_i = printf("Or[%++0.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.6i]\n", 424242);
	orret_i = printf("Or[%++10.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.1i]\n", -0);
	orret_i = printf("Or[%++10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.3i]\n", -42);
	orret_i = printf("Or[%++10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.5i]\n", -4242);
	orret_i = printf("Or[%++10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.7i]\n", -424242);
	orret_i = printf("Or[%++10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.10i]\n", 0);
	orret_i = printf("Or[%++1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++2.10i]\n", 42);
	orret_i = printf("Or[%++2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++4.10i]\n", 4242);
	orret_i = printf("Or[%++4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++6.10i]\n", 424242);
	orret_i = printf("Or[%++6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++1.10i]\n", -0);
	orret_i = printf("Or[%++1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++3.10i]\n", -42);
	orret_i = printf("Or[%++3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++5.10i]\n", -4242);
	orret_i = printf("Or[%++5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++7.10i]\n", -424242);
	orret_i = printf("Or[%++7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", 0);
	orret_i = printf("Or[%++10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", 42);
	orret_i = printf("Or[%++10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", 4242);
	orret_i = printf("Or[%++10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", 424242);
	orret_i = printf("Or[%++10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", -0);
	orret_i = printf("Or[%++10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", -42);
	orret_i = printf("Or[%++10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", -4242);
	orret_i = printf("Or[%++10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.10i]\n", -424242);
	orret_i = printf("Or[%++10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", 0);
	orret_i = printf("Or[%++9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", 42);
	orret_i = printf("Or[%++9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", 4242);
	orret_i = printf("Or[%++9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", 424242);
	orret_i = printf("Or[%++9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", -0);
	orret_i = printf("Or[%++9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", -42);
	orret_i = printf("Or[%++9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", -4242);
	orret_i = printf("Or[%++9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++9.10i]\n", -424242);
	orret_i = printf("Or[%++9.10i]\n", -424242);
	
	ftret_i = ft_printf("Ft[%++10.9i]\n", 0);
	orret_i = printf("Or[%++10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", 42);
	orret_i = printf("Or[%++10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", 4242);
	orret_i = printf("Or[%++10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", 424242);
	orret_i = printf("Or[%++10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", -0);
	orret_i = printf("Or[%++10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", -42);
	orret_i = printf("Or[%++10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", -4242);
	orret_i = printf("Or[%++10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%++10.9i]\n", -424242);
	orret_i = printf("Or[%++10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_signzprec_dgt_i(void)
{
	printf("\nTEST flags [+][0][dgt.dgt]:\n");

	ftret_i = ft_printf("Ft[%+01.1i]\n", 0);
	orret_i = printf("Or[%+01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 42);
	orret_i = printf("Or[%+01.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 4242);
	orret_i = printf("Or[%+01.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 424242);
	orret_i = printf("Or[%+01.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -0);
	orret_i = printf("Or[%+01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -42);
	orret_i = printf("Or[%+01.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -4242);
	orret_i = printf("Or[%+01.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -424242);
	orret_i = printf("Or[%+01.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 0);
	orret_i = printf("Or[%+01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.2i]\n", 42);
	orret_i = printf("Or[%+01.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.4i]\n", 4242);
	orret_i = printf("Or[%+01.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.6i]\n", 424242);
	orret_i = printf("Or[%+01.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -0);
	orret_i = printf("Or[%+01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.3i]\n", -42);
	orret_i = printf("Or[%+01.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.5i]\n", -4242);
	orret_i = printf("Or[%+01.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.7i]\n", -424242);
	orret_i = printf("Or[%+01.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 0);
	orret_i = printf("Or[%+01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+02.1i]\n", 42);
	orret_i = printf("Or[%+02.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+04.1i]\n", 4242);
	orret_i = printf("Or[%+04.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 424242);
	orret_i = printf("Or[%+01.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -0);
	orret_i = printf("Or[%+01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+03.1i]\n", -42);
	orret_i = printf("Or[%+03.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+05.1i]\n", -4242);
	orret_i = printf("Or[%+05.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+07.1i]\n", -424242);
	orret_i = printf("Or[%+07.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", 0);
	orret_i = printf("Or[%+01.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+02.2i]\n", 42);
	orret_i = printf("Or[%+02.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+04.4i]\n", 4242);
	orret_i = printf("Or[%+04.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+06.6i]\n", 424242);
	orret_i = printf("Or[%+06.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.1i]\n", -0);
	orret_i = printf("Or[%+01.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+03.3i]\n", -42);
	orret_i = printf("Or[%+03.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+05.5i]\n", -4242);
	orret_i = printf("Or[%+05.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+07.7i]\n", -424242);
	orret_i = printf("Or[%+07.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.1i]\n", 0);
	orret_i = printf("Or[%+010.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.2i]\n", 42);
	orret_i = printf("Or[%+010.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.4i]\n", 4242);
	orret_i = printf("Or[%+010.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.6i]\n", 424242);
	orret_i = printf("Or[%+010.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.1i]\n", -0);
	orret_i = printf("Or[%+010.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.3i]\n", -42);
	orret_i = printf("Or[%+010.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.5i]\n", -4242);
	orret_i = printf("Or[%+010.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.7i]\n", -424242);
	orret_i = printf("Or[%+010.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.10i]\n", 0);
	orret_i = printf("Or[%+01.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+02.10i]\n", 42);
	orret_i = printf("Or[%+02.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+04.10i]\n", 4242);
	orret_i = printf("Or[%+04.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+06.10i]\n", 424242);
	orret_i = printf("Or[%+06.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+01.10i]\n", -0);
	orret_i = printf("Or[%+01.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+03.10i]\n", -42);
	orret_i = printf("Or[%+03.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+05.10i]\n", -4242);
	orret_i = printf("Or[%+05.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+07.10i]\n", -424242);
	orret_i = printf("Or[%+07.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", 0);
	orret_i = printf("Or[%+010.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", 42);
	orret_i = printf("Or[%+010.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", 4242);
	orret_i = printf("Or[%+010.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", 424242);
	orret_i = printf("Or[%+010.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", -0);
	orret_i = printf("Or[%+010.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", -42);
	orret_i = printf("Or[%+010.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", -4242);
	orret_i = printf("Or[%+010.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.10i]\n", -424242);
	orret_i = printf("Or[%+010.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", 0);
	orret_i = printf("Or[%+09.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", 42);
	orret_i = printf("Or[%+09.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", 4242);
	orret_i = printf("Or[%+09.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", 424242);
	orret_i = printf("Or[%+09.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", -0);
	orret_i = printf("Or[%+09.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", -42);
	orret_i = printf("Or[%+09.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", -4242);
	orret_i = printf("Or[%+09.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+09.10i]\n", -424242);
	orret_i = printf("Or[%+09.10i]\n", -424242);
	
	ftret_i = ft_printf("Ft[%+010.9i]\n", 0);
	orret_i = printf("Or[%+010.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", 42);
	orret_i = printf("Or[%+010.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", 4242);
	orret_i = printf("Or[%+010.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", 424242);
	orret_i = printf("Or[%+010.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", -0);
	orret_i = printf("Or[%+010.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", -42);
	orret_i = printf("Or[%+010.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", -4242);
	orret_i = printf("Or[%+010.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+010.9i]\n", -424242);
	orret_i = printf("Or[%+010.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void	ft_flags_signprec_dgt2_i(void)
{
	printf("\nTEST flags [-][+][dgt.dgt]:\n");

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 0);
	orret_i = printf("Or[%-+1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 42);
	orret_i = printf("Or[%-+1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 4242);
	orret_i = printf("Or[%-+1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 424242);
	orret_i = printf("Or[%-+1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -0);
	orret_i = printf("Or[%-+1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -42);
	orret_i = printf("Or[%-+1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -4242);
	orret_i = printf("Or[%-+1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -424242);
	orret_i = printf("Or[%-+1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 0);
	orret_i = printf("Or[%-+1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.2i]\n", 42);
	orret_i = printf("Or[%-+1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.4i]\n", 4242);
	orret_i = printf("Or[%-+1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.6i]\n", 424242);
	orret_i = printf("Or[%-+1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -0);
	orret_i = printf("Or[%-+1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.3i]\n", -42);
	orret_i = printf("Or[%-+1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.5i]\n", -4242);
	orret_i = printf("Or[%-+1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.7i]\n", -424242);
	orret_i = printf("Or[%-+1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 0);
	orret_i = printf("Or[%-+1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+2.1i]\n", 42);
	orret_i = printf("Or[%-+2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+4.1i]\n", 4242);
	orret_i = printf("Or[%-+4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 424242);
	orret_i = printf("Or[%-+1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -0);
	orret_i = printf("Or[%-+1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+3.1i]\n", -42);
	orret_i = printf("Or[%-+3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+5.1i]\n", -4242);
	orret_i = printf("Or[%-+5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+7.1i]\n", -424242);
	orret_i = printf("Or[%-+7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", 0);
	orret_i = printf("Or[%-+1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+2.2i]\n", 42);
	orret_i = printf("Or[%-+2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+4.4i]\n", 4242);
	orret_i = printf("Or[%-+4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+6.6i]\n", 424242);
	orret_i = printf("Or[%-+6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.1i]\n", -0);
	orret_i = printf("Or[%-+1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+3.3i]\n", -42);
	orret_i = printf("Or[%-+3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+5.5i]\n", -4242);
	orret_i = printf("Or[%-+5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+7.7i]\n", -424242);
	orret_i = printf("Or[%-+7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.1i]\n", 0);
	orret_i = printf("Or[%-+10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.2i]\n", 42);
	orret_i = printf("Or[%-+10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.4i]\n", 4242);
	orret_i = printf("Or[%-+10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.6i]\n", 424242);
	orret_i = printf("Or[%-+10.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.1i]\n", -0);
	orret_i = printf("Or[%-+10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.3i]\n", -42);
	orret_i = printf("Or[%-+10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.5i]\n", -4242);
	orret_i = printf("Or[%-+10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.7i]\n", -424242);
	orret_i = printf("Or[%-+10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.10i]\n", 0);
	orret_i = printf("Or[%-+1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+2.10i]\n", 42);
	orret_i = printf("Or[%-+2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+4.10i]\n", 4242);
	orret_i = printf("Or[%-+4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+6.10i]\n", 424242);
	orret_i = printf("Or[%-+6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+1.10i]\n", -0);
	orret_i = printf("Or[%-+1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+3.10i]\n", -42);
	orret_i = printf("Or[%-+3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+5.10i]\n", -4242);
	orret_i = printf("Or[%-+5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+7.10i]\n", -424242);
	orret_i = printf("Or[%-+7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", 0);
	orret_i = printf("Or[%-+10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", 42);
	orret_i = printf("Or[%-+10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", 4242);
	orret_i = printf("Or[%-+10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", 424242);
	orret_i = printf("Or[%-+10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", -0);
	orret_i = printf("Or[%-+10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", -42);
	orret_i = printf("Or[%-+10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", -4242);
	orret_i = printf("Or[%-+10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.10i]\n", -424242);
	orret_i = printf("Or[%-+10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", 0);
	orret_i = printf("Or[%-+9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", 42);
	orret_i = printf("Or[%-+9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", 4242);
	orret_i = printf("Or[%-+9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", 424242);
	orret_i = printf("Or[%-+9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", -0);
	orret_i = printf("Or[%-+9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", -42);
	orret_i = printf("Or[%-+9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", -4242);
	orret_i = printf("Or[%-+9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+9.10i]\n", -424242);
	orret_i = printf("Or[%-+9.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", 0);
	orret_i = printf("Or[%-+10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", 42);
	orret_i = printf("Or[%-+10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", 4242);
	orret_i = printf("Or[%-+10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", 424242);
	orret_i = printf("Or[%-+10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", -0);
	orret_i = printf("Or[%-+10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", -42);
	orret_i = printf("Or[%-+10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", -4242);
	orret_i = printf("Or[%-+10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%-+10.9i]\n", -424242);
	orret_i = printf("Or[%-+10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

static void		ft_flags_signdgt2_i(void)
{
	printf("\nTEST flags [+][[-]dgt.dgt]:\n");

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 0);
	orret_i = printf("Or[%+-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 42);
	orret_i = printf("Or[%+-1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 4242);
	orret_i = printf("Or[%+-1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 424242);
	orret_i = printf("Or[%+-1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -0);
	orret_i = printf("Or[%+-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -42);
	orret_i = printf("Or[%+-1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -4242);
	orret_i = printf("Or[%+-1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -424242);
	orret_i = printf("Or[%+-1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 0);
	orret_i = printf("Or[%+-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.2i]\n", 42);
	orret_i = printf("Or[%+-1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.4i]\n", 4242);
	orret_i = printf("Or[%+-1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.6i]\n", 424242);
	orret_i = printf("Or[%+-1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -0);
	orret_i = printf("Or[%+-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.3i]\n", -42);
	orret_i = printf("Or[%+-1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.5i]\n", -4242);
	orret_i = printf("Or[%+-1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.7i]\n", -424242);
	orret_i = printf("Or[%+-1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 0);
	orret_i = printf("Or[%+-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-2.1i]\n", 42);
	orret_i = printf("Or[%+-2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-4.1i]\n", 4242);
	orret_i = printf("Or[%+-4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 424242);
	orret_i = printf("Or[%+-1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -0);
	orret_i = printf("Or[%+-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-3.1i]\n", -42);
	orret_i = printf("Or[%+-3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-5.1i]\n", -4242);
	orret_i = printf("Or[%+-5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-7.1i]\n", -424242);
	orret_i = printf("Or[%+-7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", 0);
	orret_i = printf("Or[%+-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-2.2i]\n", 42);
	orret_i = printf("Or[%+-2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-4.4i]\n", 4242);
	orret_i = printf("Or[%+-4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-6.6i]\n", 424242);
	orret_i = printf("Or[%+-6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.1i]\n", -0);
	orret_i = printf("Or[%+-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-3.3i]\n", -42);
	orret_i = printf("Or[%+-3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-5.5i]\n", -4242);
	orret_i = printf("Or[%+-5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-7.7i]\n", -424242);
	orret_i = printf("Or[%+-7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.1i]\n", 0);
	orret_i = printf("Or[%+-10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.2i]\n", 42);
	orret_i = printf("Or[%+-10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.4i]\n", 4242);
	orret_i = printf("Or[%+-10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.6i]\n", 424242);
	orret_i = printf("Or[%+-10.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.1i]\n", -0);
	orret_i = printf("Or[%+-10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.3i]\n", -42);
	orret_i = printf("Or[%+-10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.5i]\n", -4242);
	orret_i = printf("Or[%+-10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.7i]\n", -424242);
	orret_i = printf("Or[%+-10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.10i]\n", 0);
	orret_i = printf("Or[%+-1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-2.10i]\n", 42);
	orret_i = printf("Or[%+-2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-4.10i]\n", 4242);
	orret_i = printf("Or[%+-4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-6.10i]\n", 424242);
	orret_i = printf("Or[%+-6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-1.10i]\n", -0);
	orret_i = printf("Or[%+-1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-3.10i]\n", -42);
	orret_i = printf("Or[%+-3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-5.10i]\n", -4242);
	orret_i = printf("Or[%+-5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-7.10i]\n", -424242);
	orret_i = printf("Or[%+-7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", 0);
	orret_i = printf("Or[%+-10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", 42);
	orret_i = printf("Or[%+-10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", 4242);
	orret_i = printf("Or[%+-10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", 424242);
	orret_i = printf("Or[%+-10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", -0);
	orret_i = printf("Or[%+-10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", -42);
	orret_i = printf("Or[%+-10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", -4242);
	orret_i = printf("Or[%+-10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.10i]\n", -424242);
	orret_i = printf("Or[%+-10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", 0);
	orret_i = printf("Or[%+-9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", 42);
	orret_i = printf("Or[%+-9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", 4242);
	orret_i = printf("Or[%+-9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", 424242);
	orret_i = printf("Or[%+-9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", -0);
	orret_i = printf("Or[%+-9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", -42);
	orret_i = printf("Or[%+-9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", -4242);
	orret_i = printf("Or[%+-9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-9.10i]\n", -424242);
	orret_i = printf("Or[%+-9.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", 0);
	orret_i = printf("Or[%+-10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", 42);
	orret_i = printf("Or[%+-10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", 4242);
	orret_i = printf("Or[%+-10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", 424242);
	orret_i = printf("Or[%+-10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", -0);
	orret_i = printf("Or[%+-10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", -42);
	orret_i = printf("Or[%+-10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", -4242);
	orret_i = printf("Or[%+-10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);

	ftret_i = ft_printf("Ft[%+-10.9i]\n", -424242);
	orret_i = printf("Or[%+-10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret_i, orret_i);
}

void	ft_test_i(int nb)
{
	if(nb == 1)
		ft_simple();
	else if (nb == 2)
		ft_multiple_i();
	else if (nb == 3)
		ft_flags_spc_i();
	else if (nb == 4)
		ft_flags_sign_i();
	else if (nb == 5)
		ft_flags_zero_i();
	else if (nb == 6)
		ft_flags_dgt_i();
	else if (nb == 7)
		ft_flags_dgt2_i();
	else if (nb == 8)
		ft_flags_szdgt_i();
	else if (nb == 9)
		ft_flags_prec_dgt_i();
	else if (nb == 10)
		ft_flags_prec_dgt2_i();
	else if (nb == 11)
		ft_flags_spczprec_dgt_i();
	else if (nb == 12)
		ft_flags_signprec_dgt_i();
	else if (nb == 13)
		ft_flags_signzprec_dgt_i();
	else if (nb == 14)
		ft_flags_signprec_dgt2_i();
	else if (nb == 15)
		ft_flags_signdgt2_i();
	else
	{
		ft_simple_i();
		ft_multiple_i();
		ft_flags_spc_i();
		ft_flags_sign_i();
		ft_flags_zero_i();
		ft_flags_dgt_i();
		ft_flags_dgt2_i();
		ft_flags_szdgt_i();
		ft_flags_prec_dgt_i();
		ft_flags_prec_dgt2_i();
		ft_flags_spczprec_dgt_i();
		ft_flags_signprec_dgt_i();
		ft_flags_signzprec_dgt_i();
		ft_flags_signprec_dgt2_i();
		ft_flags_signdgt2_i();
	}
}
