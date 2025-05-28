/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:14:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/28 14:35:20 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printers.h"
#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a = printf("La fonction standard: %%\n");
	printf("%d\n", a);
	int b = ft_printf("Ma fonction: %%\n");
	ft_printf("%d\n", b);
	return (0);
}
