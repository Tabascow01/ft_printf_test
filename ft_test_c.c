/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 07:22:19 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 07:26:10 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_c(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;


	ftret = ft_printf("Ft[%c][%c]\n", 42, 0);
	orret = printf("Or[%c][%c]\n", 42, 0);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("Ft[%5c][%1c][%5c]\n", 42, 42, 0);
	orret = printf("Or[%5c][%1c][%5c]\n", 42, 42, 0);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("Ft[%-5c][%-1c][%-5c]\n", 42, 42, 0);
	orret = printf("Or[%-5c][%-1c][%-5c]\n", 42, 42, 0);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);
}
