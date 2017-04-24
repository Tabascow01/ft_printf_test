/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 06:58:53 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 10:15:53 by mchemakh         ###   ########.fr       */
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

	ftret = ft_printf("Ft[% i]\n", 0);
	orret = printf("Or[% i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", 42);
	orret = printf("Or[% i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", 4242);
	orret = printf("Or[% i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", 424242);
	orret = printf("Or[% i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", -0);
	orret = printf("Or[% i]\n", -0);
	printf("ft[%i]\nOr[% i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", -42);
	orret = printf("Or[% i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", -4242);
	orret = printf("Or[% i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% i]\n", -424242);
	orret = printf("Or[% i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", 0);
	orret = printf("Or[%   i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", 42);
	orret = printf("Or[%   i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", 4242);
	orret = printf("Or[%   i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", 424242);
	orret = printf("Or[%   i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", -0);
	orret = printf("Or[%   i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", -42);
	orret = printf("Or[%   i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", -4242);
	orret = printf("Or[%   i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%   i]\n", -424242);
	orret = printf("Or[%   i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [+][i]:\n");

	ftret = ft_printf("Ft[%+i]\n", 0);
	orret = printf("Or[%+i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", 42);
	orret = printf("Or[%+i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", 4242);
	orret = printf("Or[%+i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", 424242);
	orret = printf("Or[%+i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", -0);
	orret = printf("Or[%+i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", -42);
	orret = printf("Or[%+i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", -4242);
	orret = printf("Or[%+i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+i]\n", -424242);
	orret = printf("Or[%+i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", 0);
	orret = printf("Or[%+++i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", 42);
	orret = printf("Or[%+++i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", 4242);
	orret = printf("Or[%+++i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", 424242);
	orret = printf("Or[%+++i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", -0);
	orret = printf("Or[%+++i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", -42);
	orret = printf("Or[%+++i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", -4242);
	orret = printf("Or[%+++i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+++i]\n", -424242);
	orret = printf("Or[%+++i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [0][i]:\n");


	printf("Supérieur:\n");
	ftret = ft_printf("Ft[%010i]\n", 0);
	orret = printf("Or[%010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", 42);
	orret = printf("Or[%010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", 4242);
	orret = printf("Or[%010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", 424242);
	orret = printf("Or[%010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", -0);
	orret = printf("Or[%010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", -42);
	orret = printf("Or[%010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", -4242);
	orret = printf("Or[%010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%010i]\n", -424242);
	orret = printf("Or[%010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", 0);
	orret = printf("Or[% 010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", 42);
	orret = printf("Or[% 010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", 4242);
	orret = printf("Or[% 010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", 424242);
	orret = printf("Or[% 010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", -0);
	orret = printf("Or[% 010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", -42);
	orret = printf("Or[% 010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010i]\n", -4242);
	orret = printf("Or[% 010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 010ii]\n", -424242);
	orret = printf("Or[% 010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 0);
	orret = printf("Or[%+010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 42);
	orret = printf("Or[%+010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 4242);
	orret = printf("Or[%+010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 424242);
	orret = printf("Or[%+010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -0);
	orret = printf("Or[%+010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -42);
	orret = printf("Or[%+010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -4242);
	orret = printf("Or[%+010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -424242);
	orret = printf("Or[%+010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("Egale:\n");
	ftret = ft_printf("Ft[%01i]\n", 0);
	orret = printf("Or[%01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%02i]\n", 42);
	orret = printf("Or[%02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%04i]\n", 4242);
	orret = printf("Or[%04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%06i]\n", 424242);
	orret = printf("Or[%06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%02i]\n", -0);
	orret = printf("Or[%02i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%03i]\n", -42);
	orret = printf("Or[%03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%05i]\n", -4242);
	orret = printf("Or[%05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%07i]\n", -424242);
	orret = printf("Or[%07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", 0);
	orret = printf("Or[% 01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 02i]\n", 42);
	orret = printf("Or[% 02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 04i]\n", 4242);
	orret = printf("Or[% 04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 06i]\n", 424242);
	orret = printf("Or[% 06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", -0);
	orret = printf("Or[% 01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 03i]\n", -42);
	orret = printf("Or[% 03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 05i]\n", -4242);
	orret = printf("Or[% 05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 07i]\n", -424242);
	orret = printf("Or[% 07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 0);
	orret = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02i]\n", 42);
	orret = printf("Or[%+02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04i]\n", 4242);
	orret = printf("Or[%+04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+06i]\n", 424242);
	orret = printf("Or[%+06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -0);
	orret = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03i]\n", -42);
	orret = printf("Or[%+03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05i]\n", -4242);
	orret = printf("Or[%+05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07i]\n", -424242);
	orret = printf("Or[%+07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("Inférieur:\n");
	ftret = ft_printf("Ft[%01i]\n", 0);
	orret = printf("Or[%01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", 42);
	orret = printf("Or[%01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", 4242);
	orret = printf("Or[%01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", 424242);
	orret = printf("Or[%01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", -0);
	orret = printf("Or[%01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", -42);
	orret = printf("Or[%01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", -4242);
	orret = printf("Or[%01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%01i]\n", -424242);
	orret = printf("Or[%01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", 0);
	orret = printf("Or[% 01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", 42);
	orret = printf("Or[% 01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", 4242);
	orret = printf("Or[% 01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", 424242);
	orret = printf("Or[% 01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", -0);
	orret = printf("Or[% 01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", -42);
	orret = printf("Or[% 01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", -4242);
	orret = printf("Or[% 01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 01i]\n", -424242);
	orret = printf("Or[% 01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 0);
	orret = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 42);
	orret = printf("Or[%+01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 4242);
	orret = printf("Or[%+01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 424242);
	orret = printf("Or[%+01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -0);
	orret = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -42);
	orret = printf("Or[%+01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -4242);
	orret = printf("Or[%+01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -424242);
	orret = printf("Or[%+01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [dgt][i]:\n");

	printf("Supérieur:\n");
	ftret = ft_printf("Ft[%10i]\n", 0);
	orret = printf("Or[%10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", 42);
	orret = printf("Or[%10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", 4242);
	orret = printf("Or[%10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", 424242);
	orret = printf("Or[%10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", -0);
	orret = printf("Or[%10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", -42);
	orret = printf("Or[%10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", -4242);
	orret = printf("Or[%10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10i]\n", -424242);
	orret = printf("Or[%10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", 0);
	orret = printf("Or[% 10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", 42);
	orret = printf("Or[% 10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", 4242);
	orret = printf("Or[% 10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", 424242);
	orret = printf("Or[% 10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", -0);
	orret = printf("Or[% 10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", -42);
	orret = printf("Or[% 10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10i]\n", -4242);
	orret = printf("Or[% 10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 10ii]\n", -424242);
	orret = printf("Or[% 10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", 0);
	orret = printf("Or[%+10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", 42);
	orret = printf("Or[%+10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", 4242);
	orret = printf("Or[%+10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", 424242);
	orret = printf("Or[%+10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", -0);
	orret = printf("Or[%+10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", -42);
	orret = printf("Or[%+10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", -4242);
	orret = printf("Or[%+10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+10i]\n", -424242);
	orret = printf("Or[%+10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("Egale:\n");
	ftret = ft_printf("Ft[%1i]\n", 0);
	orret = printf("Or[%1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2i]\n", 42);
	orret = printf("Or[%2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4i]\n", 4242);
	orret = printf("Or[%4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%6i]\n", 424242);
	orret = printf("Or[%6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2i]\n", -0);
	orret = printf("Or[%2i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3i]\n", -42);
	orret = printf("Or[%3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5i]\n", -4242);
	orret = printf("Or[%5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7i]\n", -424242);
	orret = printf("Or[%7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", 0);
	orret = printf("Or[% 1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 2i]\n", 42);
	orret = printf("Or[% 2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 4i]\n", 4242);
	orret = printf("Or[% 4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 6i]\n", 424242);
	orret = printf("Or[% 6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", -0);
	orret = printf("Or[% 1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 3i]\n", -42);
	orret = printf("Or[% 3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 5i]\n", -4242);
	orret = printf("Or[% 5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 7i]\n", -424242);
	orret = printf("Or[% 7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", 0);
	orret = printf("Or[%+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+2i]\n", 42);
	orret = printf("Or[%+2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+4i]\n", 4242);
	orret = printf("Or[%+4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+6i]\n", 424242);
	orret = printf("Or[%+6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", -0);
	orret = printf("Or[%+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+3i]\n", -42);
	orret = printf("Or[%+3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+5i]\n", -4242);
	orret = printf("Or[%+5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+7i]\n", -424242);
	orret = printf("Or[%+7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("Inférieur:\n");
	ftret = ft_printf("Ft[%1i]\n", 0);
	orret = printf("Or[%1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", 42);
	orret = printf("Or[%1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", 4242);
	orret = printf("Or[%1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", 424242);
	orret = printf("Or[%1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", -0);
	orret = printf("Or[%1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", -42);
	orret = printf("Or[%1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", -4242);
	orret = printf("Or[%1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1i]\n", -424242);
	orret = printf("Or[%1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", 0);
	orret = printf("Or[% 1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", 42);
	orret = printf("Or[% 1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", 4242);
	orret = printf("Or[% 1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", 424242);
	orret = printf("Or[% 1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", -0);
	orret = printf("Or[% 1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", -42);
	orret = printf("Or[% 1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", -4242);
	orret = printf("Or[% 1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% 1i]\n", -424242);
	orret = printf("Or[% 1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", 0);
	orret = printf("Or[%+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", 42);
	orret = printf("Or[%+1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", 4242);
	orret = printf("Or[%+1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", 424242);
	orret = printf("Or[%+1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", -0);
	orret = printf("Or[%+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", -42);
	orret = printf("Or[%+1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", -4242);
	orret = printf("Or[%+1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+1i]\n", -424242);
	orret = printf("Or[%+1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [-dgt][i]:\n");

	printf("Supérieur:\n");
	ftret = ft_printf("Ft[%-10i]\n", 0);
	orret = printf("Or[%-10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", 42);
	orret = printf("Or[%-10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", 4242);
	orret = printf("Or[%-10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", 424242);
	orret = printf("Or[%-10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", -0);
	orret = printf("Or[%-10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", -42);
	orret = printf("Or[%-10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", -4242);
	orret = printf("Or[%-10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10i]\n", -424242);
	orret = printf("Or[%-10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", 0);
	orret = printf("Or[% -10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", 42);
	orret = printf("Or[% -10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", 4242);
	orret = printf("Or[% -10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", 424242);
	orret = printf("Or[% -10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", -0);
	orret = printf("Or[% -10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", -42);
	orret = printf("Or[% -10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10i]\n", -4242);
	orret = printf("Or[% -10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -10ii]\n", -424242);
	orret = printf("Or[% -10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", 0);
	orret = printf("Or[%-+10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", 42);
	orret = printf("Or[%-+10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", 4242);
	orret = printf("Or[%-+10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", 424242);
	orret = printf("Or[%-+10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", -0);
	orret = printf("Or[%-+10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", -42);
	orret = printf("Or[%-+10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", -4242);
	orret = printf("Or[%-+10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+10i]\n", -424242);
	orret = printf("Or[%-+10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", 0);
	orret = printf("Or[%+-10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", 42);
	orret = printf("Or[%+-10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", 4242);
	orret = printf("Or[%+-10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", 424242);
	orret = printf("Or[%+-10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", -0);
	orret = printf("Or[%+-10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", -42);
	orret = printf("Or[%+-10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", -4242);
	orret = printf("Or[%+-10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-10i]\n", -424242);
	orret = printf("Or[%+-10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);



	printf("Egale:\n");
	ftret = ft_printf("Ft[%-1i]\n", 0);
	orret = printf("Or[%-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2i]\n", 42);
	orret = printf("Or[%-2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4i]\n", 4242);
	orret = printf("Or[%-4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-6i]\n", 424242);
	orret = printf("Or[%-6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2i]\n", -0);
	orret = printf("Or[%-2i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3i]\n", -42);
	orret = printf("Or[%-3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5i]\n", -4242);
	orret = printf("Or[%-5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7i]\n", -424242);
	orret = printf("Or[%-7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", 0);
	orret = printf("Or[% -1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -2i]\n", 42);
	orret = printf("Or[% -2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -4i]\n", 4242);
	orret = printf("Or[% -4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -6i]\n", 424242);
	orret = printf("Or[% -6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", -0);
	orret = printf("Or[% -1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -3i]\n", -42);
	orret = printf("Or[% -3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -5i]\n", -4242);
	orret = printf("Or[% -5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -7i]\n", -424242);
	orret = printf("Or[% -7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", 0);
	orret = printf("Or[%-+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+2i]\n", 42);
	orret = printf("Or[%-+2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+4i]\n", 4242);
	orret = printf("Or[%-+4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+6i]\n", 424242);
	orret = printf("Or[%-+6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", -0);
	orret = printf("Or[%-+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+3i]\n", -42);
	orret = printf("Or[%-+3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+5i]\n", -4242);
	orret = printf("Or[%-+5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+7i]\n", -424242);
	orret = printf("Or[%-+7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", 0);
	orret = printf("Or[%+-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-2i]\n", 42);
	orret = printf("Or[%+-2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-4i]\n", 4242);
	orret = printf("Or[%+-4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-6i]\n", 424242);
	orret = printf("Or[%+-6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", -0);
	orret = printf("Or[%+-1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-3i]\n", -42);
	orret = printf("Or[%+-3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-5i]\n", -4242);
	orret = printf("Or[%+-5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-7i]\n", -424242);
	orret = printf("Or[%+-7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);



	printf("Inférieur:\n");
	ftret = ft_printf("Ft[%-1i]\n", 0);
	orret = printf("Or[%-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", 42);
	orret = printf("Or[%-1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", 4242);
	orret = printf("Or[%-1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", 424242);
	orret = printf("Or[%-1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", -0);
	orret = printf("Or[%-1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", -42);
	orret = printf("Or[%-1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", -4242);
	orret = printf("Or[%-1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1i]\n", -424242);
	orret = printf("Or[%-1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", 0);
	orret = printf("Or[% -1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", 42);
	orret = printf("Or[% -1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", 4242);
	orret = printf("Or[% -1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", 424242);
	orret = printf("Or[% -1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", -0);
	orret = printf("Or[% -1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", -42);
	orret = printf("Or[% -1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", -4242);
	orret = printf("Or[% -1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[% -1i]\n", -424242);
	orret = printf("Or[% -1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", 0);
	orret = printf("Or[%-+1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", 42);
	orret = printf("Or[%-+1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", 4242);
	orret = printf("Or[%-+1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", 424242);
	orret = printf("Or[%-+1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", -0);
	orret = printf("Or[%-+1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", -42);
	orret = printf("Or[%-+1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", -4242);
	orret = printf("Or[%-+1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-+1i]\n", -424242);
	orret = printf("Or[%-+1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", 0);
	orret = printf("Or[%+-1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", 42);
	orret = printf("Or[%+-1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", 4242);
	orret = printf("Or[%+-1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", 424242);
	orret = printf("Or[%+-1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", -0);
	orret = printf("Or[%+-1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", -42);
	orret = printf("Or[%+-1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", -4242);
	orret = printf("Or[%+-1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+-1i]\n", -424242);
	orret = printf("Or[%+-1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST multiple [i]:\n\n");

	ftret = ft_printf("Ft[%i][%i][%i][%i][%.i]\n", 0, 42, 4242, 424242, 42);
	orret = printf("Or[%i][%i][%i][%i][%.i]\n", 0, 42, 4242, 424242, 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%i][%i][%i][%i][%.i]\n", -0, -42, -4242, -424242, -42);
	orret = printf("Or[%i][%i][%i][%i][%.i]\n", -0, -42, -4242, -424242, -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [+][0][dgt][i]:\n");

	ftret = ft_printf("Ft[%+010i]\n", 0);
	orret = printf("Or[%+010i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 42);
	orret = printf("Or[%+010i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 4242);
	orret = printf("Or[%+010i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", 424242);
	orret = printf("Or[%+010i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -0);
	orret = printf("Or[%+010i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -42);
	orret = printf("Or[%+010i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -4242);
	orret = printf("Or[%+010i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+010i]\n", -424242);
	orret = printf("Or[%+010i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 0);
	orret = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+02i]\n", 42);
	orret = printf("Or[%+02i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+04i]\n", 4242);
	orret = printf("Or[%+04i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+06i]\n", 424242);
	orret = printf("Or[%+06i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -0);
	orret = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+03i]\n", -42);
	orret = printf("Or[%+03i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+05i]\n", -4242);
	orret = printf("Or[%+05i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+07i]\n", -424242);
	orret = printf("Or[%+07i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 0);
	orret = printf("Or[%+01i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 42);
	orret = printf("Or[%+01i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 4242);
	orret = printf("Or[%+01i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", 424242);
	orret = printf("Or[%+01i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -0);
	orret = printf("Or[%+01i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -42);
	orret = printf("Or[%+01i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -4242);
	orret = printf("Or[%+01i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%+01i]\n", -424242);
	orret = printf("Or[%+01i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [dgt.dgt][i]:\n");

	ftret = ft_printf("Ft[%1.1i]\n", 0);
	orret = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 42);
	orret = printf("Or[%1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 4242);
	orret = printf("Or[%1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 424242);
	orret = printf("Or[%1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -0);
	orret = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -42);
	orret = printf("Or[%1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -4242);
	orret = printf("Or[%1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -424242);
	orret = printf("Or[%1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 0);
	orret = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.2i]\n", 42);
	orret = printf("Or[%1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.4i]\n", 4242);
	orret = printf("Or[%1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.6i]\n", 424242);
	orret = printf("Or[%1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -0);
	orret = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.3i]\n", -42);
	orret = printf("Or[%1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.5i]\n", -4242);
	orret = printf("Or[%1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.7i]\n", -424242);
	orret = printf("Or[%1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 0);
	orret = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2.1i]\n", 42);
	orret = printf("Or[%2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4.1i]\n", 4242);
	orret = printf("Or[%4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 424242);
	orret = printf("Or[%1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -0);
	orret = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3.1i]\n", -42);
	orret = printf("Or[%3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5.1i]\n", -4242);
	orret = printf("Or[%5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7.1i]\n", -424242);
	orret = printf("Or[%7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", 0);
	orret = printf("Or[%1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2.2i]\n", 42);
	orret = printf("Or[%2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4.4i]\n", 4242);
	orret = printf("Or[%4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%6.6i]\n", 424242);
	orret = printf("Or[%6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.1i]\n", -0);
	orret = printf("Or[%1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3.3i]\n", -42);
	orret = printf("Or[%3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5.5i]\n", -4242);
	orret = printf("Or[%5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7.7i]\n", -424242);
	orret = printf("Or[%7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.1i]\n", 0);
	orret = printf("Or[%10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.2i]\n", 42);
	orret = printf("Or[%10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.4i]\n", 4242);
	orret = printf("Or[%10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.4i]\n", 424242);
	orret = printf("Or[%10.4i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.1i]\n", -0);
	orret = printf("Or[%10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.3i]\n", -42);
	orret = printf("Or[%10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.5i]\n", -4242);
	orret = printf("Or[%10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.7i]\n", -424242);
	orret = printf("Or[%10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.10i]\n", 0);
	orret = printf("Or[%1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%2.10i]\n", 42);
	orret = printf("Or[%2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%4.10i]\n", 4242);
	orret = printf("Or[%4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%6.10i]\n", 424242);
	orret = printf("Or[%6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%1.10i]\n", -0);
	orret = printf("Or[%1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%3.10i]\n", -42);
	orret = printf("Or[%3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%5.10i]\n", -4242);
	orret = printf("Or[%5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%7.10i]\n", -424242);
	orret = printf("Or[%7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", 0);
	orret = printf("Or[%10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", 42);
	orret = printf("Or[%10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", 4242);
	orret = printf("Or[%10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", 424242);
	orret = printf("Or[%10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", -0);
	orret = printf("Or[%10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", -42);
	orret = printf("Or[%10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", -4242);
	orret = printf("Or[%10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.10i]\n", -424242);
	orret = printf("Or[%10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", 0);
	orret = printf("Or[%9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", 42);
	orret = printf("Or[%9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", 4242);
	orret = printf("Or[%9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", 424242);
	orret = printf("Or[%9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", -0);
	orret = printf("Or[%9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", -42);
	orret = printf("Or[%9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", -4242);
	orret = printf("Or[%9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%9.10i]\n", -424242);
	orret = printf("Or[%9.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", 0);
	orret = printf("Or[%10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", 42);
	orret = printf("Or[%10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", 4242);
	orret = printf("Or[%10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", 424242);
	orret = printf("Or[%10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", -0);
	orret = printf("Or[%10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", -42);
	orret = printf("Or[%10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", -4242);
	orret = printf("Or[%10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%10.9i]\n", -424242);
	orret = printf("Or[%10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [-dgt.dgt][i]:\n");

	ftret = ft_printf("Ft[%-1.1i]\n", 0);
	orret = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 42);
	orret = printf("Or[%-1.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 4242);
	orret = printf("Or[%-1.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 424242);
	orret = printf("Or[%-1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -0);
	orret = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -42);
	orret = printf("Or[%-1.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -4242);
	orret = printf("Or[%-1.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -424242);
	orret = printf("Or[%-1.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 0);
	orret = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.2i]\n", 42);
	orret = printf("Or[%-1.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.4i]\n", 4242);
	orret = printf("Or[%-1.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.6i]\n", 424242);
	orret = printf("Or[%-1.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -0);
	orret = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.3i]\n", -42);
	orret = printf("Or[%-1.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.5i]\n", -4242);
	orret = printf("Or[%-1.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.7i]\n", -424242);
	orret = printf("Or[%-1.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 0);
	orret = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2.1i]\n", 42);
	orret = printf("Or[%-2.1i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4.1i]\n", 4242);
	orret = printf("Or[%-4.1i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 424242);
	orret = printf("Or[%-1.1i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -0);
	orret = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3.1i]\n", -42);
	orret = printf("Or[%-3.1i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5.1i]\n", -4242);
	orret = printf("Or[%-5.1i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7.1i]\n", -424242);
	orret = printf("Or[%-7.1i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", 0);
	orret = printf("Or[%-1.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2.2i]\n", 42);
	orret = printf("Or[%-2.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4.4i]\n", 4242);
	orret = printf("Or[%-4.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-6.6i]\n", 424242);
	orret = printf("Or[%-6.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.1i]\n", -0);
	orret = printf("Or[%-1.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3.3i]\n", -42);
	orret = printf("Or[%-3.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5.5i]\n", -4242);
	orret = printf("Or[%-5.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7.7i]\n", -424242);
	orret = printf("Or[%-7.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.1i]\n", 0);
	orret = printf("Or[%-10.1i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.2i]\n", 42);
	orret = printf("Or[%-10.2i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.4i]\n", 4242);
	orret = printf("Or[%-10.4i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.6i]\n", 424242);
	orret = printf("Or[%-10.6i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.1i]\n", -0);
	orret = printf("Or[%-10.1i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.3i]\n", -42);
	orret = printf("Or[%-10.3i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.5i]\n", -4242);
	orret = printf("Or[%-10.5i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.7i]\n", -424242);
	orret = printf("Or[%-10.7i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.10i]\n", 0);
	orret = printf("Or[%-1.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-2.10i]\n", 42);
	orret = printf("Or[%-2.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-4.10i]\n", 4242);
	orret = printf("Or[%-4.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-6.10i]\n", 424242);
	orret = printf("Or[%-6.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-1.10i]\n", -0);
	orret = printf("Or[%-1.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-3.10i]\n", -42);
	orret = printf("Or[%-3.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-5.10i]\n", -4242);
	orret = printf("Or[%-5.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-7.10i]\n", -424242);
	orret = printf("Or[%-7.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", 0);
	orret = printf("Or[%-10.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", 42);
	orret = printf("Or[%-10.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", 4242);
	orret = printf("Or[%-10.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", 424242);
	orret = printf("Or[%-10.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", -0);
	orret = printf("Or[%-10.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", -42);
	orret = printf("Or[%-10.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", -4242);
	orret = printf("Or[%-10.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.10i]\n", -424242);
	orret = printf("Or[%-10.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", 0);
	orret = printf("Or[%-9.10i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", 42);
	orret = printf("Or[%-9.10i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", 4242);
	orret = printf("Or[%-9.10i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", 424242);
	orret = printf("Or[%-9.10i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", -0);
	orret = printf("Or[%-9.10i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", -42);
	orret = printf("Or[%-9.10i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", -4242);
	orret = printf("Or[%-9.10i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-9.10i]\n", -424242);
	orret = printf("Or[%-9.10i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", 0);
	orret = printf("Or[%-10.9i]\n", 0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", 42);
	orret = printf("Or[%-10.9i]\n", 42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", 4242);
	orret = printf("Or[%-10.9i]\n", 4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", 424242);
	orret = printf("Or[%-10.9i]\n", 424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", -0);
	orret = printf("Or[%-10.9i]\n", -0);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", -42);
	orret = printf("Or[%-10.9i]\n", -42);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", -4242);
	orret = printf("Or[%-10.9i]\n", -4242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);

	ftret = ft_printf("Ft[%-10.9i]\n", -424242);
	orret = printf("Or[%-10.9i]\n", -424242);
	printf("ft[%i]\nOr[%i]\n--------------------------------------\n", ftret, orret);


	printf("\nTEST flags [ ][+][0][dgt.dgt]:\n");


	printf("\nTEST flags [ ][+][[-]dgt.dgt]:\n");
}
