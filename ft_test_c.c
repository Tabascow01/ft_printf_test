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


	ftret = ft_printf("[%c][%c]", 42, 0);
	orret = printf("[%c][%c]", 42, 0);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%5c][%5c]", 42, 0);
	orret = printf("[%5c][%5c]", 42, 0);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("[%-5c][%-5c]", 42, 0);
	orret = printf("[%-5c][%-5c]", 42, 0);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);
}
