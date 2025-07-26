/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_arithmetic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:55:52 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/26 22:49:39 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_math.h"
#include <stdio.h>

/**
 * @brief Get the remaining of dividing @p a by @p b.
 *
 * @param[in]	a	Number to divide.
 * @param[in]	b	The Divisor.
 *
 * @returns	The remainder of @p a and @p b, or 0 on error.
 */
int32_t	rcc_modulo(int32_t a, int32_t b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}

/**
 * @brief Add @p a and @p b together.
 *
 * @param[in]	a	Number to add.
 * @param[in]	b	Add to @p a.
 *
 * @returns	The sum of @p a and @p b.
 *
 * @note There is no error handling for overflow.
 */
int32_t	rcc_addi(int32_t a, int32_t b)
{
	return (a + b);
}

/**
 * @brief Subtract @p a by @p b.
 *
 * @param[in]	a	Number to subtract.
 * @param[in]	b	Subtract from @p a.
 *
 * @returns	The difference of @p a and @p b.
 *
 * @note There is no error handling for overflow.
 */
int32_t	rcc_subtracti(int32_t a, int32_t b)
{
	return (a - b);
}

/**
 * @brief Multiply @p a by @p b.
 *
 * @param[in]	a	Number to multiply.
 * @param[in]	b	Multiply to @p a.
 *
 * @returns	The product of multiplying @p a, @p b times.
 *
 * @note There is no error handling for overflow.
 */
int32_t	rcc_multiplyi(int32_t a, int32_t b)
{
	return (a * b);
}

/**
 * @brief Divide @p a by @p b.
 *
 * @param[in]	a	Number to divide.
 * @param[in]	b	The divisor.
 *
 * @returns	The quotient of dividing @p a by @p b, or 0 on error.
 *
 * @note If the quotient is not a whole number, it will floor the return value.
 */
int32_t	rcc_dividei(int32_t a, int32_t b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
