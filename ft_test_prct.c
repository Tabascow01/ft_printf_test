/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_prct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 06:45:50 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/25 07:10:40 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test_prct(void)
{
	ft_printf("%%");
	ft_printf("%%%");
	ft_printf("% %");
	ft_printf("%   %");
	ft_printf("%0%");
	ft_printf("%5%");
	ft_printf("%15%");
	ft_printf("%100%");
	ft_printf("%1000%");
	ft_printf("%-%");
	ft_printf("%-5%");
	ft_printf("%-15%");
	ft_printf("%-100%");
	ft_printf("%-1000%");
}
