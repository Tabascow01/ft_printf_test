/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 11:38:15 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 11:44:02 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_s(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	ftret = ft_printf("This is a string\n");
	orret = printf("This is a string\n");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%s\n", NULL);
	orret = printf("%s\n", NULL);
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%s\n","This is a string");
	orret = printf("%s\n","This is a string");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%s is a string\n", "This");
	orret = printf("%s is a string\n", "This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%.s is a string\n","This");
	orret = printf("%.s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%.2s is a string\n","This");
	orret = printf("%.2s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%2.s is a string\n","This");
	orret = printf("%2.s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-1s is a string\n","This");
	orret = printf("%-1s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-4s is a string\n","This");
	orret = printf("%-4s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-10s is a string\n","This");
	orret = printf("%-10s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-2.2s is a string\n","This");
	orret = printf("%-2.2s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-2.5s is a string\n","This");
	orret = printf("%-2.5s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-10.2s is a string\n","This");
	orret = printf("%-10.2s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-5.10s is a string\n","This");
	orret = printf("%-5.10s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-5.2s is a string\n","This");
	orret = printf("%-5.2s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-.2s is a string\n","This");
	orret = printf("%-.2s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%3s is a string\n","This");
	orret = printf("%3s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%3s is a string\n","");
	orret = printf("%3s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%10s is a string\n","This");
	orret = printf("%10s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%10s is a string\n","");
	orret = printf("%10s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%.10s is a string\n","This");
	orret = printf("%.10s is a string\n","This");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%.10s is a string\n","");
	orret = printf("%.10s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%.s is a string\n","");
	orret = printf("%.s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%.2s is a string\n","");
	orret = printf("%.2s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%2.s is a string\n","");
	orret = printf("%2.s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-1s is a string\n","");
	orret = printf("%-1s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-4s is a string\n","");
	orret = printf("%-4s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-10s is a string\n","");
	orret = printf("%-10s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-2.2s is a string\n","");
	orret = printf("%-2.2s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-2.5s is a string\n","");
	orret = printf("%-2.5s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-10.2s is a string\n","");
	orret = printf("%-10.2s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-5.2s is a string\n","");
	orret = printf("%-5.2s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);

	ftret = ft_printf("%-.2s is a string\n","");
	orret = printf("%-.2s is a string\n","");
	printf("Ft[%d]\nOr[%d]\n", ftret, orret);
}
