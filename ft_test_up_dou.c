/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_upD.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   CreateD: 2017/02/25 07:51:41 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 07:58:03 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

void	ft_test_up_dou(void)
{
	int ftret;
	int orret;

	ftret = 0;
	orret = 0;

	printf("\nTEST simple [D]\n\n");

	ftret = ft_printf("Ft[%D]\n",INT_MAX);
	orret = printf("Or[%D]\n",INT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%D]\n",INT_MIN);
	orret = printf("Or[%D]\n",INT_MIN);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%D]\n",1958);
	orret = printf("Or[%D]\n",1958);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST simple [O]\n\n");

	ftret = ft_printf("Ft[%O]\n",UINT_MAX);
	orret = printf("Or[%O]\n",UINT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%O]\n",UINT_MAX + 1);
	orret = printf("Or[%O]\n",UINT_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);


	printf("\nTEST simple [U]\n\n");

	ftret = ft_printf("Ft[%U]\n",UINT_MAX);
	orret = printf("Or[%U]\n",UINT_MAX);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);

	ftret = ft_printf("Ft[%U]\n",UINT_MAX + 1);
	orret = printf("Or[%U]\n",UINT_MAX + 1);
	printf("Ft[%d]\nOr[%d]\n",ftret,orret);
}
