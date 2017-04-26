/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   CreateX: 2017/02/25 09:11:26 by mchemakh          #+#    #+#             */
/*   UpXateX: 2017/02/25 09:14:41 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_upx(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	printf("\nTEST simple [X]\n");

	ftret = ft_printf("Ft[%X]\n", 0);
	orret = printf("Or[%X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n---------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%X]\n", 42);
	orret = printf("Or[%X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%X]\n", 4242);
	orret = printf("Or[%X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%X]\n", 424242);
	orret = printf("Or[%X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [0][X]\n");

	ftret = ft_printf("Ft[%0X]\n", 0);
	orret = printf("Or[%0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01X]\n", 42);
	orret = printf("Or[%01X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02X]\n", 4242);
	orret = printf("Or[%02X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04X]\n", 424242);
	orret = printf("Or[%04X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01X]\n", 0);
	orret = printf("Or[%01X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02X]\n", 42);
	orret = printf("Or[%02X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04X]\n", 4242);
	orret = printf("Or[%04X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%06X]\n", 424242);
	orret = printf("Or[%06X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010X]\n", 0);
	orret = printf("Or[%010X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010X]\n", 42);
	orret = printf("Or[%010X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010X]\n", 4242);
	orret = printf("Or[%010X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015X]\n", 424242);
	orret = printf("Or[%015X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [#]\n");

	ftret = ft_printf("Ft[%#X]\n", 0);
	orret = printf("Or[%#X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#X]\n", 42);
	orret = printf("Or[%#X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#X]\n", 4242);
	orret = printf("Or[%#X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#X]\n", 424242);
	orret = printf("Or[%#X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#0X]\n", 0);
	orret = printf("Or[%#0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01X]\n", 42);
	orret = printf("Or[%#01X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02X]\n", 4242);
	orret = printf("Or[%#02X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04X]\n", 424242);
	orret = printf("Or[%#04X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01X]\n", 0);
	orret = printf("Or[%#01X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02X]\n", 42);
	orret = printf("Or[%#02X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04X]\n", 4242);
	orret = printf("Or[%#04X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#06X]\n", 424242);
	orret = printf("Or[%#06X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010X]\n", 0);
	orret = printf("Or[%#010X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010X]\n", 42);
	orret = printf("Or[%#010X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010X]\n", 4242);
	orret = printf("Or[%#010X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015X]\n", 424242);
	orret = printf("Or[%#015X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [dgt][X]\n");

	ftret = ft_printf("Ft[%1X]\n", 42);
	orret = printf("Or[%1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2X]\n", 4242);
	orret = printf("Or[%2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4X]\n", 424242);
	orret = printf("Or[%4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1X]\n", 0);
	orret = printf("Or[%1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2X]\n", 42);
	orret = printf("Or[%2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4X]\n", 4242);
	orret = printf("Or[%4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6X]\n", 424242);
	orret = printf("Or[%6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10X]\n", 0);
	orret = printf("Or[%10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10X]\n", 42);
	orret = printf("Or[%10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10X]\n", 4242);
	orret = printf("Or[%10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15X]\n", 424242);
	orret = printf("Or[%15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [-dgt][X]\n");

	ftret = ft_printf("Ft[%-1X]\n", 42);
	orret = printf("Or[%-1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2X]\n", 4242);
	orret = printf("Or[%-2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4X]\n", 424242);
	orret = printf("Or[%-4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1X]\n", 0);
	orret = printf("Or[%-1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2X]\n", 42);
	orret = printf("Or[%-2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4X]\n", 4242);
	orret = printf("Or[%-4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6X]\n", 424242);
	orret = printf("Or[%-6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10X]\n", 0);
	orret = printf("Or[%-10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10X]\n", 42);
	orret = printf("Or[%-10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10X]\n", 4242);
	orret = printf("Or[%-10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15X]\n", 424242);
	orret = printf("Or[%-15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [dgt.dgt][X]\n");

	ftret = ft_printf("Ft[%0.0X]\n", 0);
	orret = printf("Or[%0.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1X]\n", 42);
	orret = printf("Or[%1.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2X]\n", 4242);
	orret = printf("Or[%2.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4X]\n", 424242);
	orret = printf("Or[%4.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.1X]\n", 0);
	orret = printf("Or[%0.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.2X]\n", 42);
	orret = printf("Or[%1.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.4X]\n", 4242);
	orret = printf("Or[%2.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.6X]\n", 424242);
	orret = printf("Or[%4.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.10X]\n", 0);
	orret = printf("Or[%0.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.10X]\n", 42);
	orret = printf("Or[%1.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.10X]\n", 4242);
	orret = printf("Or[%2.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.10X]\n", 424242);
	orret = printf("Or[%4.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1X]\n", 0);
	orret = printf("Or[%1.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2X]\n", 42);
	orret = printf("Or[%2.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4X]\n", 4242);
	orret = printf("Or[%4.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6.6X]\n", 424242);
	orret = printf("Or[%6.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.0X]\n", 0);
	orret = printf("Or[%1.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.1X]\n", 42);
	orret = printf("Or[%2.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.2X]\n", 4242);
	orret = printf("Or[%4.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6.4X]\n", 424242);
	orret = printf("Or[%6.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.X]\n", 0);
	orret = printf("Or[%10.X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.1X]\n", 42);
	orret = printf("Or[%10.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.2X]\n", 4242);
	orret = printf("Or[%10.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4X]\n", 424242);
	orret = printf("Or[%10.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.1X]\n", 0);
	orret = printf("Or[%10.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.2X]\n", 42);
	orret = printf("Or[%10.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4X]\n", 4242);
	orret = printf("Or[%10.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.6X]\n", 424242);
	orret = printf("Or[%10.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10X]\n", 0);
	orret = printf("Or[%10.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10X]\n", 42);
	orret = printf("Or[%10.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10X]\n", 4242);
	orret = printf("Or[%10.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10X]\n", 424242);
	orret = printf("Or[%10.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15X]\n", 0);
	orret = printf("Or[%10.15X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15X]\n", 42);
	orret = printf("Or[%10.15X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15X]\n", 4242);
	orret = printf("Or[%10.15X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15X]\n", 424242);
	orret = printf("Or[%10.15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10X]\n", 0);
	orret = printf("Or[%15.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10X]\n", 42);
	orret = printf("Or[%15.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10X]\n", 4242);
	orret = printf("Or[%15.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10X]\n", 424242);
	orret = printf("Or[%15.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [-dgt.dgt][X]\n");

	ftret = ft_printf("Ft[%-1.1X]\n", 42);
	orret = printf("Or[%-1.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2X]\n", 4242);
	orret = printf("Or[%-2.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4X]\n", 424242);
	orret = printf("Or[%-4.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.2X]\n", 42);
	orret = printf("Or[%-1.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.4X]\n", 4242);
	orret = printf("Or[%-2.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.6X]\n", 424242);
	orret = printf("Or[%-4.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.10X]\n", 42);
	orret = printf("Or[%-1.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.10X]\n", 4242);
	orret = printf("Or[%-2.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.10X]\n", 424242);
	orret = printf("Or[%-4.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.1X]\n", 0);
	orret = printf("Or[%-1.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2X]\n", 42);
	orret = printf("Or[%-2.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4X]\n", 4242);
	orret = printf("Or[%-4.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.6X]\n", 424242);
	orret = printf("Or[%-6.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.0X]\n", 0);
	orret = printf("Or[%-1.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.1X]\n", 42);
	orret = printf("Or[%-2.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.2X]\n", 4242);
	orret = printf("Or[%-4.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.4X]\n", 424242);
	orret = printf("Or[%-6.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.X]\n", 0);
	orret = printf("Or[%-10.X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.1X]\n", 42);
	orret = printf("Or[%-10.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.2X]\n", 4242);
	orret = printf("Or[%-10.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4X]\n", 424242);
	orret = printf("Or[%-10.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.1X]\n", 0);
	orret = printf("Or[%-10.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.2X]\n", 42);
	orret = printf("Or[%-10.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4X]\n", 4242);
	orret = printf("Or[%-10.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.6X]\n", 424242);
	orret = printf("Or[%-10.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10X]\n", 0);
	orret = printf("Or[%-10.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10X]\n", 42);
	orret = printf("Or[%-10.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10X]\n", 4242);
	orret = printf("Or[%-10.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10X]\n", 424242);
	orret = printf("Or[%-10.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15X]\n", 0);
	orret = printf("Or[%-10.15X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15X]\n", 42);
	orret = printf("Or[%-10.15X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15X]\n", 4242);
	orret = printf("Or[%-10.15X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15X]\n", 424242);
	orret = printf("Or[%-10.15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10X]\n", 0);
	orret = printf("Or[%-15.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10X]\n", 42);
	orret = printf("Or[%-15.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10X]\n", 4242);
	orret = printf("Or[%-15.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10X]\n", 424242);
	orret = printf("Or[%-15.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [0][dgt.dgt]\n");

	ftret = ft_printf("Ft[%0.0X]\n", 0);
	orret = printf("Or[%0.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01.1X]\n", 42);
	orret = printf("Or[%01.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02.2X]\n", 4242);
	orret = printf("Or[%02.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04.4X]\n", 424242);
	orret = printf("Or[%04.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.1X]\n", 0);
	orret = printf("Or[%0.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01.2X]\n", 42);
	orret = printf("Or[%01.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02.4X]\n", 4242);
	orret = printf("Or[%02.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04.6X]\n", 424242);
	orret = printf("Or[%04.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.10X]\n", 0);
	orret = printf("Or[%0.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01.10X]\n", 42);
	orret = printf("Or[%01.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02.10X]\n", 4242);
	orret = printf("Or[%02.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04.10X]\n", 424242);
	orret = printf("Or[%04.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01.1X]\n", 0);
	orret = printf("Or[%01.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02.2X]\n", 42);
	orret = printf("Or[%02.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04.4X]\n", 4242);
	orret = printf("Or[%04.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%06.6X]\n", 424242);
	orret = printf("Or[%06.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01.0X]\n", 0);
	orret = printf("Or[%01.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02.1X]\n", 42);
	orret = printf("Or[%02.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04.2X]\n", 4242);
	orret = printf("Or[%04.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%06.4X]\n", 424242);
	orret = printf("Or[%06.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.X]\n", 0);
	orret = printf("Or[%010.X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.1X]\n", 42);
	orret = printf("Or[%010.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.2X]\n", 4242);
	orret = printf("Or[%010.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.4X]\n", 424242);
	orret = printf("Or[%010.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.1X]\n", 0);
	orret = printf("Or[%010.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.2X]\n", 42);
	orret = printf("Or[%010.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.4X]\n", 4242);
	orret = printf("Or[%010.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.6X]\n", 424242);
	orret = printf("Or[%010.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.10X]\n", 0);
	orret = printf("Or[%010.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.10X]\n", 42);
	orret = printf("Or[%010.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.10X]\n", 4242);
	orret = printf("Or[%010.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.10X]\n", 424242);
	orret = printf("Or[%010.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.15X]\n", 0);
	orret = printf("Or[%010.15X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.15X]\n", 42);
	orret = printf("Or[%010.15X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.15X]\n", 4242);
	orret = printf("Or[%010.15X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010.15X]\n", 424242);
	orret = printf("Or[%010.15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015.10X]\n", 0);
	orret = printf("Or[%015.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015.10X]\n", 42);
	orret = printf("Or[%015.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015.10X]\n", 4242);
	orret = printf("Or[%015.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015.10X]\n", 424242);
	orret = printf("Or[%015.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [#][0][dgt.dgt]\n");

	ftret = ft_printf("Ft[%#0.0X]\n", 0);
	orret = printf("Or[%#0.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01.1X]\n", 42);
	orret = printf("Or[%#01.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02.2X]\n", 4242);
	orret = printf("Or[%#02.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04.4X]\n", 424242);
	orret = printf("Or[%#04.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#0.1X]\n", 0);
	orret = printf("Or[%#0.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01.2X]\n", 42);
	orret = printf("Or[%#01.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02.4X]\n", 4242);
	orret = printf("Or[%#02.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04.6X]\n", 424242);
	orret = printf("Or[%#04.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#0.10X]\n", 0);
	orret = printf("Or[%#0.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01.10X]\n", 42);
	orret = printf("Or[%#01.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02.10X]\n", 4242);
	orret = printf("Or[%#02.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04.10X]\n", 424242);
	orret = printf("Or[%#04.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01.1X]\n", 0);
	orret = printf("Or[%#01.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02.2X]\n", 42);
	orret = printf("Or[%#02.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04.4X]\n", 4242);
	orret = printf("Or[%#04.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#06.6X]\n", 424242);
	orret = printf("Or[%#06.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01.0X]\n", 0);
	orret = printf("Or[%#01.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02.1X]\n", 42);
	orret = printf("Or[%#02.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04.2X]\n", 4242);
	orret = printf("Or[%#04.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#06.4X]\n", 424242);
	orret = printf("Or[%#06.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.X]\n", 0);
	orret = printf("Or[%#010.X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.1X]\n", 42);
	orret = printf("Or[%#010.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.2X]\n", 4242);
	orret = printf("Or[%#010.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.4X]\n", 424242);
	orret = printf("Or[%#010.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.1X]\n", 0);
	orret = printf("Or[%#010.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.2X]\n", 42);
	orret = printf("Or[%#010.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.4X]\n", 4242);
	orret = printf("Or[%#010.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.6X]\n", 424242);
	orret = printf("Or[%#010.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.10X]\n", 0);
	orret = printf("Or[%#010.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.10X]\n", 42);
	orret = printf("Or[%#010.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.10X]\n", 4242);
	orret = printf("Or[%#010.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.10X]\n", 424242);
	orret = printf("Or[%#010.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.15X]\n", 0);
	orret = printf("Or[%#010.15X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.15X]\n", 42);
	orret = printf("Or[%#010.15X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.15X]\n", 4242);
	orret = printf("Or[%#010.15X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010.15X]\n", 424242);
	orret = printf("Or[%#010.15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015.10X]\n", 0);
	orret = printf("Or[%#015.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015.10X]\n", 42);
	orret = printf("Or[%#015.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015.10X]\n", 4242);
	orret = printf("Or[%#015.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015.10X]\n", 424242);
	orret = printf("Or[%#015.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [#][-dgt.dgt]\n");

	ftret = ft_printf("Ft[%#-.0X]\n", 0);
	orret = printf("Or[%#-.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-1.1X]\n", 42);
	orret = printf("Or[%#-1.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-2.2X]\n", 4242);
	orret = printf("Or[%#-2.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-4.4X]\n", 424242);
	orret = printf("Or[%#-4.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-.1X]\n", 0);
	orret = printf("Or[%#-.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-1.2X]\n", 42);
	orret = printf("Or[%#-1.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-2.4X]\n", 4242);
	orret = printf("Or[%#-2.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-4.6X]\n", 424242);
	orret = printf("Or[%#-4.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-.10X]\n", 0);
	orret = printf("Or[%#-.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-1.10X]\n", 42);
	orret = printf("Or[%#-1.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-2.10X]\n", 4242);
	orret = printf("Or[%#-2.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-4.10X]\n", 424242);
	orret = printf("Or[%#-4.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-1.1X]\n", 0);
	orret = printf("Or[%#-1.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-2.2X]\n", 42);
	orret = printf("Or[%#-2.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-4.4X]\n", 4242);
	orret = printf("Or[%#-4.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-6.6X]\n", 424242);
	orret = printf("Or[%#-6.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-1.0X]\n", 0);
	orret = printf("Or[%#-1.0X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-2.1X]\n", 42);
	orret = printf("Or[%#-.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-4.2X]\n", 4242);
	orret = printf("Or[%#-4.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-6.4X]\n", 424242);
	orret = printf("Or[%#-6.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.X]\n", 0);
	orret = printf("Or[%#-10.X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.1X]\n", 42);
	orret = printf("Or[%#-10.1X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.2X]\n", 4242);
	orret = printf("Or[%#-10.2X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.4X]\n", 424242);
	orret = printf("Or[%#-10.4X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.1X]\n", 0);
	orret = printf("Or[%#-10.1X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.2X]\n", 42);
	orret = printf("Or[%#-10.2X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.4X]\n", 4242);
	orret = printf("Or[%#-10.4X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.6X]\n", 424242);
	orret = printf("Or[%#-10.6X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.10X]\n", 0);
	orret = printf("Or[%#-10.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.10X]\n", 42);
	orret = printf("Or[%#-10.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.10X]\n", 4242);
	orret = printf("Or[%#-10.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.10X]\n", 424242);
	orret = printf("Or[%#-10.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.15X]\n", 0);
	orret = printf("Or[%#-10.15X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.15X]\n", 42);
	orret = printf("Or[%#-10.15X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.15X]\n", 4242);
	orret = printf("Or[%#-10.15X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-10.15X]\n", 424242);
	orret = printf("Or[%#-10.15X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-15.10X]\n", 0);
	orret = printf("Or[%#-15.10X]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-15.10X]\n", 42);
	orret = printf("Or[%#-15.10X]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-15.10X]\n", 4242);
	orret = printf("Or[%#-15.10X]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#-15.10X]\n", 424242);
	orret = printf("Or[%#-15.10X]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST multiple simple [X]\n");

	ftret = ft_printf("Ft[%X][%X][%X][%X]\n",0, 42, 4242, 424242);
	orret = printf("Or[%X][%X][%X][%X]\n", 0, 42, 4242, 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);
}
