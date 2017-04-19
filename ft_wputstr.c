/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:25:29 by mchemakh          #+#    #+#             */
/*   Updated: 2017/02/01 09:29:00 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_wputchar.c"

void	ft_wputstr(wchar_t *wstr)
{
	int i;

	i = 0;
	while (wstr[i])
		ft_wputchar(wstr[i++]);
}
