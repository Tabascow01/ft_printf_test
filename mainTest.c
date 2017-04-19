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

//#include "ft_printf.h"


#include <stdio.h>
#include "limits.h"

int		main(void)
{
	printf("test[%-.7d]\n",42);
	printf("test[%-7.0d]\n",42);
	printf("test[%-7.7d]\n",42);
	printf("test[%-7.2d]\n",42);
	printf("test[%-2.7d]\n",42);
	printf("test[%-2.2d]\n",42);
	printf("test[%-.0d]\n",42);
	printf("test[%-5.7d]\n",42);
	printf("test[%-7.5d]\n",42);
	return (0);
}
