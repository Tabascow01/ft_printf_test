/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 14:20:16 by mchemakh          #+#    #+#             */
/*   Updated: 2017/03/13 20:07:35 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <wchar.h>

void	ft_wputchar(wchar_t c)
{
	if (c < 0x80)
	{
		putchar (c);
	}
	else if (c < 0x800)
	{
		putchar (0xC0 | (c >> 6));
		putchar (0x80 | (c & 0x3F));
	}
	else if (c < 0x10000)
	{
		putchar (0xE0 | (c >> 12));
		putchar (0x80 | (c >> 6 & 0x3F));
		putchar (0x80 | (c & 0x3F));
	}
	else if (c < 0x200000)
	{
		putchar (0xF0 | (c >> 18));
		putchar (0x80 | (c >> 12 & 0x3F));
		putchar (0x80 | (c >> 6 & 0x3F));
		putchar (0x80 | (c & 0x3F));
	}
}
