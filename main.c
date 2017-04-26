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
#include <stdio.h>

#include "ft_test_prct.c"
#include "ft_test_c.c"
#include "ft_test_d.c"
#include "ft_test_i.c"
#include "ft_test_p.c"
#include "ft_test_s.c"
#include "ft_test_u.c"
#include "ft_test_x.c"
#include "ft_test_o.c"
//#include "ft_test_upx.c"
//#include "ft_test_upo.c"
//#include "ft_test_upc.c"
//#include "ft_test_upd.c"
//#include "ft_test_upo.c"
//#include "ft_test_upu.c"
//#include "ft_test_j.c"
//#include "ft_test_z.c"
//#include "ft_test_hlhhll.c"

int		main(int argc, char *argv[])
{
	FILE *fic;

	fic = NULL;
	if (argc == 3 && ft_strcmp(argv[2], "-q") == 0)
	{
		fic = fopen("./ft_printf_test_LOG.txt", "w+");
		close(1);
		dup(3);
	}
	if (fic != NULL || argc < 3)
	{
		if (argc >= 2 && ft_strcmp(argv[1], "-t") == 0)
		{
			ft_test_prct();
			ft_test_c();
			ft_test_s();
			ft_test_p();
//			ft_test_x();
//			ft_test_o();
//			ft_test_u();
			ft_test_d();
			ft_test_i();
		}
		else if (argc >= 2 && ft_strcmp(argv[1], "-l") == 0)
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
			ft_test_prct();
			ft_test_c();
			ft_test_s();
			ft_test_p();
//			ft_test_x();
//			ft_test_o();
//			ft_test_u();
			ft_test_d();
			ft_test_i();
			system(command);
		}
		else
			ft_printf("Usage:\n[option] -t {Test} -q {quiet}\n[option] -l {Leaks} -q {quiet}\n");
		ft_putstr("\n\t/!\\[Done]/!\\\n");
		if (fic != NULL)
			fclose(fic);
	}
	else
		ft_putstr("Erreur lors de la manipulation du fichier\n");
	return (0);
}
