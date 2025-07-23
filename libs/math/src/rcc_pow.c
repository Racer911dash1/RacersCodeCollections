/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_pow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:47:47 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/23 21:46:17 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math/rcc_math.h"

int32_t	rcc_powi(int32_t base, int32_t pow)
{
	int32_t	temp = base;

	if (pow < 0)
	{
		return (0);
	}
	if (pow == 0)
	{
		return (1);
	}
	while (--pow > 0)
	{
		base *= temp;
		if (base >= INT32_MAX / temp || base <= INT32_MIN / temp)
		{
			return (0);
		}
	}
	return (base);
}