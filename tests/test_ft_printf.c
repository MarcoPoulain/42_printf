/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:14:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/26 15:18:05 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printers.h"
#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("La fonction standard: %%, %c, %c\n", 'y', 'z');
	ft_printf("Ma fonction: %%, %c, %c\n", 'y', 'z');
	return (0);
}
