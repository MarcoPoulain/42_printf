/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:11:30 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/26 14:34:42 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "printers.h"

int	dispatch(char glyph, va_list args)
{
	if (glyph == 'c')
		return (convert_char(va_args(args, int)));
	if (glyph == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}
