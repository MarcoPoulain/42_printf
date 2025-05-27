/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:11:30 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/27 12:55:03 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "printers.h"

int	dispatch(char glyph, va_list args)
{
	if (glyph == 'c')
		return (cast_char(va_arg(args, int)));
	if (glyph == 'd' ||  glyph == 'i')
		return (cast_int(va_arg(args, int)));
	if (glyph == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}
