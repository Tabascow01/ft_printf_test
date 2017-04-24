/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createx: 2017/02/25 09:11:26 by mchemakh          #+#    #+#             */
/*   Upxatex: 2017/02/25 09:14:41 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_x(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	printf("\nTEST simple [x]\n");

	ftret = ft_printf("Ft[%x]\n", 0);
	orret = printf("Or[%x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n---------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%x]\n", 42);
	orret = printf("Or[%x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%x]\n", 4242);
	orret = printf("Or[%x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%x]\n", 424242);
	orret = printf("Or[%x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [0][x]\n");

	ftret = ft_printf("Ft[%0x]\n", 0);
	orret = printf("Or[%0x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01x]\n", 42);
	orret = printf("Or[%01x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02x]\n", 4242);
	orret = printf("Or[%02x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04x]\n", 424242);
	orret = printf("Or[%04x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01x]\n", 0);
	orret = printf("Or[%01x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02x]\n", 42);
	orret = printf("Or[%02x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04x]\n", 4242);
	orret = printf("Or[%04x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%06x]\n", 424242);
	orret = printf("Or[%06x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010x]\n", 0);
	orret = printf("Or[%010x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010x]\n", 42);
	orret = printf("Or[%010x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010x]\n", 4242);
	orret = printf("Or[%010x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015x]\n", 424242);
	orret = printf("Or[%015x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [#]\n");

	ftret = ft_printf("Ft[%#x]\n", 0);
	orret = printf("Or[%#x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#x]\n", 42);
	orret = printf("Or[%#x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#x]\n", 4242);
	orret = printf("Or[%#x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#x]\n", 424242);
	orret = printf("Or[%#x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#0x]\n", 0);
	orret = printf("Or[%#0x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01x]\n", 42);
	orret = printf("Or[%#01x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02x]\n", 4242);
	orret = printf("Or[%#02x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04x]\n", 424242);
	orret = printf("Or[%#04x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01x]\n", 0);
	orret = printf("Or[%#01x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02x]\n", 42);
	orret = printf("Or[%#02x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04x]\n", 4242);
	orret = printf("Or[%#04x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#06x]\n", 424242);
	orret = printf("Or[%#06x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010x]\n", 0);
	orret = printf("Or[%#010x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010x]\n", 42);
	orret = printf("Or[%#010x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010x]\n", 4242);
	orret = printf("Or[%#010x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015x]\n", 424242);
	orret = printf("Or[%#015x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [dgt][x]\n");

	ftret = ft_printf("Ft[%1x]\n", 42);
	orret = printf("Or[%1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2x]\n", 4242);
	orret = printf("Or[%2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4x]\n", 424242);
	orret = printf("Or[%4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1x]\n", 0);
	orret = printf("Or[%1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2x]\n", 42);
	orret = printf("Or[%2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4x]\n", 4242);
	orret = printf("Or[%4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6x]\n", 424242);
	orret = printf("Or[%6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10x]\n", 0);
	orret = printf("Or[%10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10x]\n", 42);
	orret = printf("Or[%10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10x]\n", 4242);
	orret = printf("Or[%10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15x]\n", 424242);
	orret = printf("Or[%15x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [-dgt][x]\n");

	ftret = ft_printf("Ft[%-1x]\n", 42);
	orret = printf("Or[%-1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2x]\n", 4242);
	orret = printf("Or[%-2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4x]\n", 424242);
	orret = printf("Or[%-4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1x]\n", 0);
	orret = printf("Or[%-1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2x]\n", 42);
	orret = printf("Or[%-2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4x]\n", 4242);
	orret = printf("Or[%-4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6x]\n", 424242);
	orret = printf("Or[%-6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10x]\n", 0);
	orret = printf("Or[%-10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10x]\n", 42);
	orret = printf("Or[%-10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10x]\n", 4242);
	orret = printf("Or[%-10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15x]\n", 424242);
	orret = printf("Or[%-15x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [dgt.dgt][x]\n");

	ftret = ft_printf("Ft[%0.0x]\n", 0);
	orret = printf("Or[%0.0x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1x]\n", 42);
	orret = printf("Or[%1.1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2x]\n", 4242);
	orret = printf("Or[%2.2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4x]\n", 424242);
	orret = printf("Or[%4.4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.1x]\n", 0);
	orret = printf("Or[%0.1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.2x]\n", 42);
	orret = printf("Or[%1.2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.4x]\n", 4242);
	orret = printf("Or[%2.4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.6x]\n", 424242);
	orret = printf("Or[%4.6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.10x]\n", 0);
	orret = printf("Or[%0.10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.10x]\n", 42);
	orret = printf("Or[%1.10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.10x]\n", 4242);
	orret = printf("Or[%2.10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.10x]\n", 424242);
	orret = printf("Or[%4.10x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1x]\n", 0);
	orret = printf("Or[%1.1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2x]\n", 42);
	orret = printf("Or[%2.2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4x]\n", 4242);
	orret = printf("Or[%4.4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6.6x]\n", 424242);
	orret = printf("Or[%6.6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.0x]\n", 0);
	orret = printf("Or[%1.0x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.1x]\n", 42);
	orret = printf("Or[%2.1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.2x]\n", 4242);
	orret = printf("Or[%4.2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6.4x]\n", 424242);
	orret = printf("Or[%6.4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.x]\n", 0);
	orret = printf("Or[%10.x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.1x]\n", 42);
	orret = printf("Or[%10.1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.2x]\n", 4242);
	orret = printf("Or[%10.2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4x]\n", 424242);
	orret = printf("Or[%10.4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.1x]\n", 0);
	orret = printf("Or[%10.1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.2x]\n", 42);
	orret = printf("Or[%10.2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4x]\n", 4242);
	orret = printf("Or[%10.4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.6x]\n", 424242);
	orret = printf("Or[%10.6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10x]\n", 0);
	orret = printf("Or[%10.10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10x]\n", 42);
	orret = printf("Or[%10.10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10x]\n", 4242);
	orret = printf("Or[%10.10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10x]\n", 424242);
	orret = printf("Or[%10.10x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15x]\n", 0);
	orret = printf("Or[%10.15x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15x]\n", 42);
	orret = printf("Or[%10.15x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15x]\n", 4242);
	orret = printf("Or[%10.15x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15x]\n", 424242);
	orret = printf("Or[%10.15x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10x]\n", 0);
	orret = printf("Or[%15.10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10x]\n", 42);
	orret = printf("Or[%15.10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10x]\n", 4242);
	orret = printf("Or[%15.10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10x]\n", 424242);
	orret = printf("Or[%15.10x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [-dgt.dgt][x]\n");

	ftret = ft_printf("Ft[%-1.1x]\n", 42);
	orret = printf("Or[%-1.1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2x]\n", 4242);
	orret = printf("Or[%-2.2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4x]\n", 424242);
	orret = printf("Or[%-4.4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.2x]\n", 42);
	orret = printf("Or[%-1.2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.4x]\n", 4242);
	orret = printf("Or[%-2.4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.6x]\n", 424242);
	orret = printf("Or[%-4.6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.10x]\n", 42);
	orret = printf("Or[%-1.10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.10x]\n", 4242);
	orret = printf("Or[%-2.10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.10x]\n", 424242);
	orret = printf("Or[%-4.10x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.1x]\n", 0);
	orret = printf("Or[%-1.1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2x]\n", 42);
	orret = printf("Or[%-2.2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4x]\n", 4242);
	orret = printf("Or[%-4.4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.6x]\n", 424242);
	orret = printf("Or[%-6.6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.0x]\n", 0);
	orret = printf("Or[%-1.0x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.1x]\n", 42);
	orret = printf("Or[%-2.1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.2x]\n", 4242);
	orret = printf("Or[%-4.2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.4x]\n", 424242);
	orret = printf("Or[%-6.4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.x]\n", 0);
	orret = printf("Or[%-10.x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.1x]\n", 42);
	orret = printf("Or[%-10.1x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.2x]\n", 4242);
	orret = printf("Or[%-10.2x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4x]\n", 424242);
	orret = printf("Or[%-10.4x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.1x]\n", 0);
	orret = printf("Or[%-10.1x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.2x]\n", 42);
	orret = printf("Or[%-10.2x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4x]\n", 4242);
	orret = printf("Or[%-10.4x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.6x]\n", 424242);
	orret = printf("Or[%-10.6x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10x]\n", 0);
	orret = printf("Or[%-10.10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10x]\n", 42);
	orret = printf("Or[%-10.10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10x]\n", 4242);
	orret = printf("Or[%-10.10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10x]\n", 424242);
	orret = printf("Or[%-10.10x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15x]\n", 0);
	orret = printf("Or[%-10.15x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15x]\n", 42);
	orret = printf("Or[%-10.15x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15x]\n", 4242);
	orret = printf("Or[%-10.15x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15x]\n", 424242);
	orret = printf("Or[%-10.15x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10x]\n", 0);
	orret = printf("Or[%-15.10x]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10x]\n", 42);
	orret = printf("Or[%-15.10x]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10x]\n", 4242);
	orret = printf("Or[%-15.10x]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10x]\n", 424242);
	orret = printf("Or[%-15.10x]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);



	printf("\nTEST flags [ ][#][0][dgt.dgt]\n");



	printf("\nTEST flags [ ][#][-dgt.dgt]\n");



	printf("\nTEST multiple simple [x]\n");

	ftret = ft_printf("Ft[%x][%x][%x][%x]\n",0, 42, 4242, 424242);
	orret = printf("Or[%x][%x][%x][%x]\n", 0, 42, 4242, 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);
}
