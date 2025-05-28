/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:56:57 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/28 14:56:07 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "printers.h"
# include "libft.h"

int		ft_printf(const char *format, ...);
char	extract_glyph(const char *format, int *i);
int		dispatch(char glyph, va_list args);

typedef struct s_printf
{
	int		i;
	int		count;
	char	glyph;
}	t_printf;
#endif
