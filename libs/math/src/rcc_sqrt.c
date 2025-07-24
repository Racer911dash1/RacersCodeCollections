/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_sqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:18:11 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/24 22:21:26 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math/rcc_math.h"
#include <stdio.h>

/**
 * @brief Return the square root of @p num.
 *
 * @param[in]	num	Number to get the square root of.
 *
 * @returns The square root of @p num, or 0 on error.
 *
 * @note rcc_sqrti returns 0 if the square root of @p num is not a whole number.
 */
int32_t	rcc_sqrti(int32_t num)
{
	for (int32_t i = 1; i * i <= num; i++)
	{
		if (i * i > INT32_MAX / i)
		{
			break ;
		}
		if (i * i == num)
		{
			return (i);
		}
	}
	return (0);
}
