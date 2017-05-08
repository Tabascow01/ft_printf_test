/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 03:59:48 by mchemakh          #+#    #+#             */
/*   Updated: 2017/03/18 05:43:33 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include "limits.h"
#include <locale.h>

int		main(void)
{
	int ftret;
	int orret;
	int a = 42;
	int *p;

	setlocale(LC_ALL,"en_US.UTF-8");
	p = &a;
	ftret = ft_printf("Ft[%10R]\n");
	orret = printf("Or[%%10R]\n");
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
	return (0);
}
