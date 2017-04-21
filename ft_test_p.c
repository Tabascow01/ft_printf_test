/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 07:26:27 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 07:29:47 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_p(void)
{
	int	ftret;
	int	orret;
	int	a;
	int *p;

	a = 42;
	ftret = 0;
	orret = 0;
	p = &a;

	ftret = ft_printf("[%p]\n", NULL);
	orret = printf("[%p]\n", NULL);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%p]\n", p);
	orret = printf("[%p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%5p]\n", p);
	orret = printf("[%5p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%15p]\n", p);
	orret = printf("[%15p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-5p]\n", p);
	orret = printf("[%-5p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-15p]\n", p);
	orret = printf("[%-15p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%12p]\n", p);
	orret = printf("[%12p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%13p]\n", p);
	orret = printf("[%13p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-12p]\n", p);
	orret = printf("[%-12p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-13p]\n", p);
	orret = printf("[%-13p]\n", p);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);
}
