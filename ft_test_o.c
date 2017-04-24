/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createo: 2017/02/25 09:11:26 by mchemakh          #+#    #+#             */
/*   Upoateo: 2017/02/25 09:14:41 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_o(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	printf("\nTEST simple [o]\n");

	ftret = ft_printf("Ft[%o]\n", 0);
	orret = printf("Or[%o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n---------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%o]\n", 42);
	orret = printf("Or[%o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%o]\n", 4242);
	orret = printf("Or[%o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%o]\n", 424242);
	orret = printf("Or[%o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [0][o]\n");

	ftret = ft_printf("Ft[%0o]\n", 0);
	orret = printf("Or[%0o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01o]\n", 42);
	orret = printf("Or[%01o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02o]\n", 4242);
	orret = printf("Or[%02o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04o]\n", 424242);
	orret = printf("Or[%04o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%01o]\n", 0);
	orret = printf("Or[%01o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%02o]\n", 42);
	orret = printf("Or[%02o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%04o]\n", 4242);
	orret = printf("Or[%04o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%06o]\n", 424242);
	orret = printf("Or[%06o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010o]\n", 0);
	orret = printf("Or[%010o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010o]\n", 42);
	orret = printf("Or[%010o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%010o]\n", 4242);
	orret = printf("Or[%010o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%015o]\n", 424242);
	orret = printf("Or[%015o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [#]\n");

	ftret = ft_printf("Ft[%#o]\n", 0);
	orret = printf("Or[%#o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#o]\n", 42);
	orret = printf("Or[%#o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#o]\n", 4242);
	orret = printf("Or[%#o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#o]\n", 424242);
	orret = printf("Or[%#o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#0o]\n", 0);
	orret = printf("Or[%#0o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01o]\n", 42);
	orret = printf("Or[%#01o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02o]\n", 4242);
	orret = printf("Or[%#02o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04o]\n", 424242);
	orret = printf("Or[%#04o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#01o]\n", 0);
	orret = printf("Or[%#01o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#02o]\n", 42);
	orret = printf("Or[%#02o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#04o]\n", 4242);
	orret = printf("Or[%#04o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#06o]\n", 424242);
	orret = printf("Or[%#06o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010o]\n", 0);
	orret = printf("Or[%#010o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010o]\n", 42);
	orret = printf("Or[%#010o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#010o]\n", 4242);
	orret = printf("Or[%#010o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%#015o]\n", 424242);
	orret = printf("Or[%#015o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [dgt][o]\n");

	ftret = ft_printf("Ft[%1o]\n", 42);
	orret = printf("Or[%1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2o]\n", 4242);
	orret = printf("Or[%2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4o]\n", 424242);
	orret = printf("Or[%4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1o]\n", 0);
	orret = printf("Or[%1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2o]\n", 42);
	orret = printf("Or[%2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4o]\n", 4242);
	orret = printf("Or[%4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6o]\n", 424242);
	orret = printf("Or[%6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10o]\n", 0);
	orret = printf("Or[%10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10o]\n", 42);
	orret = printf("Or[%10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10o]\n", 4242);
	orret = printf("Or[%10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15o]\n", 424242);
	orret = printf("Or[%15o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [-dgt][o]\n");

	ftret = ft_printf("Ft[%-1o]\n", 42);
	orret = printf("Or[%-1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2o]\n", 4242);
	orret = printf("Or[%-2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4o]\n", 424242);
	orret = printf("Or[%-4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1o]\n", 0);
	orret = printf("Or[%-1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2o]\n", 42);
	orret = printf("Or[%-2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4o]\n", 4242);
	orret = printf("Or[%-4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6o]\n", 424242);
	orret = printf("Or[%-6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10o]\n", 0);
	orret = printf("Or[%-10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10o]\n", 42);
	orret = printf("Or[%-10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10o]\n", 4242);
	orret = printf("Or[%-10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15o]\n", 424242);
	orret = printf("Or[%-15o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [dgt.dgt][o]\n");

	ftret = ft_printf("Ft[%0.0o]\n", 0);
	orret = printf("Or[%0.0o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1o]\n", 42);
	orret = printf("Or[%1.1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2o]\n", 4242);
	orret = printf("Or[%2.2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4o]\n", 424242);
	orret = printf("Or[%4.4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.1o]\n", 0);
	orret = printf("Or[%0.1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.2o]\n", 42);
	orret = printf("Or[%1.2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.4o]\n", 4242);
	orret = printf("Or[%2.4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.6o]\n", 424242);
	orret = printf("Or[%4.6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%0.10o]\n", 0);
	orret = printf("Or[%0.10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.10o]\n", 42);
	orret = printf("Or[%1.10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.10o]\n", 4242);
	orret = printf("Or[%2.10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.10o]\n", 424242);
	orret = printf("Or[%4.10o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.1o]\n", 0);
	orret = printf("Or[%1.1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.2o]\n", 42);
	orret = printf("Or[%2.2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.4o]\n", 4242);
	orret = printf("Or[%4.4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6.6o]\n", 424242);
	orret = printf("Or[%6.6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%1.0o]\n", 0);
	orret = printf("Or[%1.0o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%2.1o]\n", 42);
	orret = printf("Or[%2.1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%4.2o]\n", 4242);
	orret = printf("Or[%4.2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%6.4o]\n", 424242);
	orret = printf("Or[%6.4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.o]\n", 0);
	orret = printf("Or[%10.o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.1o]\n", 42);
	orret = printf("Or[%10.1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.2o]\n", 4242);
	orret = printf("Or[%10.2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4o]\n", 424242);
	orret = printf("Or[%10.4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.1o]\n", 0);
	orret = printf("Or[%10.1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.2o]\n", 42);
	orret = printf("Or[%10.2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.4o]\n", 4242);
	orret = printf("Or[%10.4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.6o]\n", 424242);
	orret = printf("Or[%10.6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10o]\n", 0);
	orret = printf("Or[%10.10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10o]\n", 42);
	orret = printf("Or[%10.10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10o]\n", 4242);
	orret = printf("Or[%10.10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.10o]\n", 424242);
	orret = printf("Or[%10.10o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15o]\n", 0);
	orret = printf("Or[%10.15o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15o]\n", 42);
	orret = printf("Or[%10.15o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15o]\n", 4242);
	orret = printf("Or[%10.15o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%10.15o]\n", 424242);
	orret = printf("Or[%10.15o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10o]\n", 0);
	orret = printf("Or[%15.10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10o]\n", 42);
	orret = printf("Or[%15.10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10o]\n", 4242);
	orret = printf("Or[%15.10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%15.10o]\n", 424242);
	orret = printf("Or[%15.10o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);


	printf("\nTEST flags [-dgt.dgt][o]\n");

	ftret = ft_printf("Ft[%-1.1o]\n", 42);
	orret = printf("Or[%-1.1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2o]\n", 4242);
	orret = printf("Or[%-2.2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4o]\n", 424242);
	orret = printf("Or[%-4.4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.2o]\n", 42);
	orret = printf("Or[%-1.2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.4o]\n", 4242);
	orret = printf("Or[%-2.4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.6o]\n", 424242);
	orret = printf("Or[%-4.6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.10o]\n", 42);
	orret = printf("Or[%-1.10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.10o]\n", 4242);
	orret = printf("Or[%-2.10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.10o]\n", 424242);
	orret = printf("Or[%-4.10o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.1o]\n", 0);
	orret = printf("Or[%-1.1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.2o]\n", 42);
	orret = printf("Or[%-2.2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.4o]\n", 4242);
	orret = printf("Or[%-4.4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.6o]\n", 424242);
	orret = printf("Or[%-6.6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-1.0o]\n", 0);
	orret = printf("Or[%-1.0o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-2.1o]\n", 42);
	orret = printf("Or[%-2.1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-4.2o]\n", 4242);
	orret = printf("Or[%-4.2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-6.4o]\n", 424242);
	orret = printf("Or[%-6.4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.o]\n", 0);
	orret = printf("Or[%-10.o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.1o]\n", 42);
	orret = printf("Or[%-10.1o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.2o]\n", 4242);
	orret = printf("Or[%-10.2o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4o]\n", 424242);
	orret = printf("Or[%-10.4o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.1o]\n", 0);
	orret = printf("Or[%-10.1o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.2o]\n", 42);
	orret = printf("Or[%-10.2o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.4o]\n", 4242);
	orret = printf("Or[%-10.4o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.6o]\n", 424242);
	orret = printf("Or[%-10.6o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10o]\n", 0);
	orret = printf("Or[%-10.10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10o]\n", 42);
	orret = printf("Or[%-10.10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10o]\n", 4242);
	orret = printf("Or[%-10.10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.10o]\n", 424242);
	orret = printf("Or[%-10.10o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15o]\n", 0);
	orret = printf("Or[%-10.15o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15o]\n", 42);
	orret = printf("Or[%-10.15o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15o]\n", 4242);
	orret = printf("Or[%-10.15o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-10.15o]\n", 424242);
	orret = printf("Or[%-10.15o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10o]\n", 0);
	orret = printf("Or[%-15.10o]\n", 0);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10o]\n", 42);
	orret = printf("Or[%-15.10o]\n", 42);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10o]\n", 4242);
	orret = printf("Or[%-15.10o]\n", 4242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);

	ftret = ft_printf("Ft[%-15.10o]\n", 424242);
	orret = printf("Or[%-15.10o]\n", 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);



	printf("\nTEST flags [ ][#][0][dgt.dgt]\n");



	printf("\nTEST flags [ ][#][-dgt.dgt]\n");



	printf("\nTEST multiple simple [o]\n");

	ftret = ft_printf("Ft[%o][%o][%o][%o]\n",0, 42, 4242, 424242);
	orret = printf("Or[%o][%o][%o][%o]\n", 0, 42, 4242, 424242);
	printf("Ft[%d]\nOr[%d]\n----------------------------------------\n",ftret,orret);
}
