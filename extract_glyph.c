/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_glyph.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:30:36 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/27 18:02:58 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	is_valid_glyph(char c)
{
	return (
		c == 'c' || c == '%' || c == 'd' || c == 'i'
		|| c == 's' || c == 'u' || c == 'x' || c == 'X' || c == 'p');
}

char	extract_glyph(const char *format, int *i)
{
	(*i)++;
	if (format[*i] && is_valid_glyph(format[*i]))
		return (format[*i]);
	return (0);
}
