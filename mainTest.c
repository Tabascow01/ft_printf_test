/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 03:59:48 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/22 05:04:56 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include "limits.h"
#include <locale.h>

int		main(void)
{
	int		ftret;
	int		orret;
	int		a = 42;
	char	str[] = "printf[% -+07d]\n";
	int		*p;

	setlocale(LC_ALL,"en_US.UTF-8");
	p = &a;
	ftret = ft_printf(str, 150);
	orret = printf(str, 150);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
	
	ftret = ft_printf(str, -150);
	orret = printf(str, -150);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
	return (0);
}
