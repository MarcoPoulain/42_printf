/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:14:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/27 13:43:57 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printers.h"
#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("La fonction standard: %%, %c, %c, %d, %s\n", 'y', 'z', 123, (char *)NULL);
	ft_printf("Ma fonction: %%, %c, %c, %d, %s\n", 'y', 'z', 123, (char *)NULL);
	return (0);
}
