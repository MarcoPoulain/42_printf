/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:56:42 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/28 15:02:39 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_printf	scribe;

	scribe.i = 0;
	scribe.count = 0;
	va_start(args, format);
	while (format[scribe.i])
	{
		if (format[scribe.i] == '%' && format[scribe.i +1])
		{
		scribe.glyph = extract_glyph(format, &scribe.i);
			if (!scribe.glyph)
				return (-1);
			scribe.count += dispatch(scribe.glyph, args);
		}
		else
		{
			ft_putchar(format[scribe.i]);
					scribe.count++;
		}
		scribe.i++;
	}
	va_end(args);
	return (scribe.count);
}
