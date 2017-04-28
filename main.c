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
#include "ft_test_upx.c"
#include "ft_test_up_dou.c"
#include "ft_test_j.c"
#include "ft_test_z.c"
#include "ft_test_hlhhll.c"

int		main(int argc, char *argv[])
{
	FILE	*fic;
	char	c;
	int nb;

	nb = 5;
	fic = NULL;
	c = 0;
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
/*
			ft_test_prct();
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_c();
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_s();
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_p();
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_x();
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_upx();
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_o();
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_u();
			else
				return (0);
*/
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_d(nb);
			else
				return (0);
/*
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_i(nb);
			else
				return (0);

			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_j();
			else
				return (0);

			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_z();
			else
				return (0);

			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_hlhhll();
			else
				return (0);

			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
				ft_test_up_dou();
			else
				return (0);
*/
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
			system(command);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_c();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_s();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_p();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_x();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_upx();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_o();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_u();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_d(nb);
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_i(nb);
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_j();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_z();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_hlhhll();
				system(command);
			}
			else
				return (0);
			printf("Press ENTER to continue...\n");
			scanf("%c",&c);
			if(c == 13 || c == 10)
			{
				ft_test_up_dou();
				system(command);
			}
			else
				return (0);
		}
		else
			ft_printf("Usage:\n[option] -t {Test} -q {quiet}\n[option] -l {Leaks} -q {quiet}\n");
	}
	else
		ft_putstr("Erreur lors de la manipulation du fichier\n");
	if (fic != NULL)
		fclose(fic);
	return (0);
}
