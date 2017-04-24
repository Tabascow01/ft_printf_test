/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_prct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 06:45:50 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 07:10:40 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_prct(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	ftret = ft_printf("[%%]\n");
	orret = printf("[%%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ft_printf("%%%");
	orret = printf("[%%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[% %]\n");
	orret = printf("[% %]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%   %]\n");
	orret = printf("[%   %]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%0%]\n");
	orret = printf("[%0%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%5%]\n");
	orret = printf("[%5%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%10%]\n");
	orret = printf("[%10%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%100%]\n");
	orret = printf("[%100%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%1000%]\n");
	orret = printf("[%1000%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-%]\n");
	orret = printf("[%-%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-5%]\n");
	orret = printf("[%-5%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-15%]\n");
	orret = printf("[%-15%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-100%]\n");
	orret = printf("[%-100%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-1000%]\n");
	orret = printf("[%-1000%]\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);
}
