/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 10:22:22 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 10:29:12 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_u(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	printf("\nTEST simple [u]\n\n");

	ftret = ft_printf("Ft[%u]\n", 0);
	orret = printf("Or[%u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%u]\n", 42);
	orret = printf("Or[%u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%u]\n", 4242);
	orret = printf("Or[%u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%u]\n", 424242);
	orret = printf("Or[%u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST flags [0][u]\n");

	ftret = ft_printf("Ft[%0u]\n", 0);
	orret = printf("Or[%0u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%01u]\n", 42);
	orret = printf("Or[%01u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%02u]\n", 4242);
	orret = printf("Or[%02u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%04u]\n", 424242);
	orret = printf("Or[%04u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%01u]\n", 0);
	orret = printf("Or[%01u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%02u]\n", 42);
	orret = printf("Or[%02u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%04u]\n", 4242);
	orret = printf("Or[%04u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%06u]\n", 424242);
	orret = printf("Or[%06u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%010u]\n", 0);
	orret = printf("Or[%010u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%010u]\n", 42);
	orret = printf("Or[%010u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%010u]\n", 4242);
	orret = printf("Or[%010u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%010u]\n", 424242);
	orret = printf("Or[%010u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST flags [dgt][u]\n");

	ftret = ft_printf("Ft[%1u]\n", 42);
	orret = printf("Or[%1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2u]\n", 4242);
	orret = printf("Or[%2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%4u]\n", 424242);
	orret = printf("Or[%4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%1u]\n", 0);
	orret = printf("Or[%1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2u]\n", 42);
	orret = printf("Or[%2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%4u]\n", 4242);
	orret = printf("Or[%4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%6u]\n", 424242);
	orret = printf("Or[%6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10u]\n", 0);
	orret = printf("Or[%10u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10u]\n", 42);
	orret = printf("Or[%10u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10u]\n", 4242);
	orret = printf("Or[%10u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10u]\n", 424242);
	orret = printf("Or[%10u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST flags [-dgt][u]\n");

	ftret = ft_printf("Ft[%-1u]\n", 42);
	orret = printf("Or[%-1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2u]\n", 4242);
	orret = printf("Or[%-2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-4u]\n", 424242);
	orret = printf("Or[%-4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-1u]\n", 0);
	orret = printf("Or[%-1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2u]\n", 42);
	orret = printf("Or[%-2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-4u]\n", 4242);
	orret = printf("Or[%-4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-6u]\n", 424242);
	orret = printf("Or[%-6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10u]\n", 0);
	orret = printf("Or[%-10u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10u]\n", 42);
	orret = printf("Or[%-10u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10u]\n", 4242);
	orret = printf("Or[%-10u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10u]\n", 424242);
	orret = printf("Or[%-10u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST flags [dgt.dgt][u]\n");

	ftret = ft_printf("Ft[%.u]\n", 0);
	orret = printf("Or[%.u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1u]\n", 42);
	orret = printf("Or[%1.1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2u]\n", 4242);
	orret = printf("Or[%2.2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4u]\n", 424242);
	orret = printf("Or[%4.4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%.1u]\n", 0);
	orret = printf("Or[%.1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%1.2u]\n", 42);
	orret = printf("Or[%1.2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2.4u]\n", 4242);
	orret = printf("Or[%2.4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%3.6u]\n", 424242);
	orret = printf("Or[%3.6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%.5u]\n", 0);
	orret = printf("Or[%.5u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%1.5u]\n", 42);
	orret = printf("Or[%1.5u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2.6u]\n", 4242);
	orret = printf("Or[%2.6u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%4.8u]\n", 424242);
	orret = printf("Or[%4.8u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1u]\n", 0);
	orret = printf("Or[%1.1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2u]\n", 42);
	orret = printf("Or[%2.2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4u]\n", 4242);
	orret = printf("Or[%4.4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%6.6u]\n", 424242);
	orret = printf("Or[%6.6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%1.u]\n", 0);
	orret = printf("Or[%1.u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%2.1u]\n", 42);
	orret = printf("Or[%2.1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%4.2u]\n", 4242);
	orret = printf("Or[%4.2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%6.4u]\n", 424242);
	orret = printf("Or[%6.4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%5.u]\n", 0);
	orret = printf("Or[%5.u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%5.1u]\n", 42);
	orret = printf("Or[%5.1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%6.2u]\n", 4242);
	orret = printf("Or[%6.2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%8.4u]\n", 424242);
	orret = printf("Or[%8.4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%5.1u]\n", 0);
	orret = printf("Or[%5.1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%5.2u]\n", 42);
	orret = printf("Or[%5.2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4u]\n", 4242);
	orret = printf("Or[%10.4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.6u]\n", 424242);
	orret = printf("Or[%10.6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10u]\n", 0);
	orret = printf("Or[%10.10u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10u]\n", 42);
	orret = printf("Or[%10.10u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10u]\n", 4242);
	orret = printf("Or[%10.10u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10u]\n", 424242);
	orret = printf("Or[%10.10u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10u]\n", 0);
	orret = printf("Or[%15.10u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10u]\n", 42);
	orret = printf("Or[%15.10u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10u]\n", 4242);
	orret = printf("Or[%15.10u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10u]\n", 424242);
	orret = printf("Or[%15.10u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15u]\n", 0);
	orret = printf("Or[%10.15u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15u]\n", 42);
	orret = printf("Or[%10.15u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15u]\n", 4242);
	orret = printf("Or[%10.15u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15u]\n", 424242);
	orret = printf("Or[%10.15u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST flags [[-]dgt.dgt][u]\n");

	ftret = ft_printf("Ft[%-.u]\n", 0);
	orret = printf("Or[%-.u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.1u]\n", 42);
	orret = printf("Or[%-1.1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2u]\n", 4242);
	orret = printf("Or[%-2.2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4u]\n", 424242);
	orret = printf("Or[%-4.4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-.1u]\n", 0);
	orret = printf("Or[%-.1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.2u]\n", 42);
	orret = printf("Or[%-1.2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.4u]\n", 4242);
	orret = printf("Or[%-2.4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-3.6u]\n", 424242);
	orret = printf("Or[%-3.6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-.5u]\n", 0);
	orret = printf("Or[%-.5u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.5u]\n", 42);
	orret = printf("Or[%-1.5u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.6u]\n", 4242);
	orret = printf("Or[%-2.6u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.8u]\n", 424242);
	orret = printf("Or[%-4.8u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.1u]\n", 0);
	orret = printf("Or[%-1.1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2u]\n", 42);
	orret = printf("Or[%-2.2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4u]\n", 4242);
	orret = printf("Or[%-4.4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.6u]\n", 424242);
	orret = printf("Or[%-6.6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.u]\n", 0);
	orret = printf("Or[%-1.u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.1u]\n", 42);
	orret = printf("Or[%-2.1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.2u]\n", 4242);
	orret = printf("Or[%-4.2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.4u]\n", 424242);
	orret = printf("Or[%-6.4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-5.u]\n", 0);
	orret = printf("Or[%-5.u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-5.1u]\n", 42);
	orret = printf("Or[%-5.1u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.2u]\n", 4242);
	orret = printf("Or[%-6.2u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-8.4u]\n", 424242);
	orret = printf("Or[%-8.4u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-5.1u]\n", 0);
	orret = printf("Or[%-5.1u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-5.2u]\n", 42);
	orret = printf("Or[%-5.2u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4u]\n", 4242);
	orret = printf("Or[%-10.4u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.6u]\n", 424242);
	orret = printf("Or[%-10.6u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10u]\n", 0);
	orret = printf("Or[%-10.10u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10u]\n", 42);
	orret = printf("Or[%-10.10u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10u]\n", 4242);
	orret = printf("Or[%-10.10u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10u]\n", 424242);
	orret = printf("Or[%-10.10u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10u]\n", 0);
	orret = printf("Or[%-15.10u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10u]\n", 42);
	orret = printf("Or[%-15.10u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10u]\n", 4242);
	orret = printf("Or[%-15.10u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10u]\n", 424242);
	orret = printf("Or[%-15.10u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15u]\n", 0);
	orret = printf("Or[%-10.15u]\n", 0);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15u]\n", 42);
	orret = printf("Or[%-10.15u]\n", 42);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15u]\n", 4242);
	orret = printf("Or[%-10.15u]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15u]\n", 424242);
	orret = printf("Or[%-10.15u]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
}
