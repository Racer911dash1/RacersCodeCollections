/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_sqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:18:11 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/27 12:08:16 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_math.h"

/**
 * @brief Return the square root of @p num.
 *
 * @param[in]	num	Number to get the square root of.
 *
 * @return The square root of @p num, or 0 on error.
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
