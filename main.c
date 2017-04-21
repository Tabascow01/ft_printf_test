/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 04:52:48 by mchemakh          #+#    #+#             */
/*   Updated: 2017/03/19 23:14:01 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <wchar.h>
#include <sys/types.h>
#include <limits.h>
#include <locale.h>

//#include "ft_test_prct.c"
#include "ft_test_c.c"
#include "ft_test_d.c"
#include "ft_test_i.c"
//#include "ft_test_o.c"
#include "ft_test_p.c"
#include "ft_test_s.c"
//#include "ft_test_u.c"
//#include "ft_test_x.c"
//#include "ft_test_upx.c"
//#include "ft_test_upo.c"
//#include "ft_test_upc.c"
//#include "ft_test_upd.c"
//#include "ft_test_upo.c"
//#include "ft_test_upu.c"


int		main(int argc, char *argv[])
{
	if (argc == 2 && ft_strcmp(argv[1], "-t") == 0)
	{
		ft_test_d();
		//ft_test_i();
		ft_test_c();
		ft_test_s();
		ft_test_p();
		ft_putstr("\n/!\\[Test Done]/!\\\n");
	}
	else if (argc == 2 && ft_strcmp(argv[1], "-l") == 0)
	{
		pid_t	pid;
		int		tmp;
		char	*procid;
		char	*leaks;
		char	*command;

		leaks = ft_strnew(6);
		leaks = ft_strcpy(leaks, "leaks ");
		pid = getpid();
		tmp = (int)pid;
		procid = ft_itoa_base(tmp, 10);
		command = ft_strjoin(leaks, procid);
		ft_strdel(&leaks);
		ft_strdel(&procid);
		close(1);
		ft_test_d();
//		ft_test_i();
		ft_test_c();
		ft_test_s();
		ft_test_p();
		dup(2);
		system(command);
	}
	else
	{
		ft_printf("Usage:\n[option] -t {Test}\n[option] -l {Leaks}\n");
	}
/*
	int		orret;
	int		ftret;
	int		*p;
	int		a;
	unsigned char c;

	c = 255;
	a = 42;
	p = &a;

	setlocale(LC_ALL,"en_US.UTF-8");

	// L"Á±≥"
	ftret = ft_printf("Ft_[%d]\n", 0);
	orret = printf("Or_[%d]\n", 0);

	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
*/

/**************************/
	/* LEAKS_HUNTER_UNIT_TEST */
	/**************************/

	//ft_test_prct();
	//ft_test_c();
	//ft_test_upd();
	//ft_test_x();
	//ft_test_upx();
	//ft_test_u(); // ERROR ALLOCATION
	//ft_test_o(); // LEAKED
	//ft_test_s(); // ERROR ALLOCATION
	//ft_test_p(); // LEAKED
/*
	ft_test_upo();
	ft_test_upu();
	ft_test_upc();
	ft_test_ups();
*/

	/**************/
	/* 42FC_LEAKS */
	/**************/
/*
	ft_printf("\\n");
	ft_printf("%%\\n");
	ft_printf("%d\\n", 42);
	ft_printf("%d%d\\n", 42, 41);
	ft_printf("%d%d%d\\n", 42, 43, 44);
	ft_printf("%ld\\n", 2147483647);
	ft_printf("%lld\\n", 9223372036854775807);
	ft_printf("%x\\n", 505);
	ft_printf("%X\\n", 505);
	ft_printf("%p\\n", &ft_printf);
	ft_printf("%20.15d\\n", 54321);
	ft_printf("%-10d\\n", 3);
	ft_printf("% d\\n", 3);
	ft_printf("%+d\\n", 3);
	ft_printf("%010d\\n", 1);
	ft_printf("%hhd\\n", 0);
	ft_printf("%jd\\n", 9223372036854775807);
	ft_printf("%zd\\n", 4294967295);
	ft_printf("%\\n");
	ft_printf("%U\\n", 4294967295);
	ft_printf("%u\\n", 4294967295);
	ft_printf("%o\\n", 40);
	ft_printf("%%#08x\\n", 42);
	ft_printf("%x\\n", 1000);
	ft_printf("%#X\\n", 1000);
	ft_printf("%s\\n", NULL);
	ft_printf("%S\\n", L"ݗݜशব");
	ft_printf("%s%s\\n", "test", "test");
	ft_printf("%s%s%s\\n", "test", "test", "test");
	ft_printf("%C\\n", 15000);
*/
	return (0);
}
