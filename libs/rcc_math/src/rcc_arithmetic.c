/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_arithmetic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:55:52 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/27 12:19:01 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_math.h"

/**
 * @brief Compute the remainder of dividing @p a by @p b.
 *
 * @param[in]	a	Number to divide.
 * @param[in]	b	The Divisor.
 *
 * @return The remainder of @p a and @p b, or 0 on error.
 *
 * @note No overflow checks are performed. Returns 0 if division by zero is performed.
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
 * @brief Compute the sum of @p a and @p b.
 *
 * @param[in]	a	Number to add.
 * @param[in]	b	The addend.
 *
 * @return The sum of @p a and @p b.
 *
 * @note No overflow checks are performed.
 */
int32_t	rcc_addi(int32_t a, int32_t b)
{
	return (a + b);
}

/**
 * @brief Compute the difference of @p a and @p b.
 *
 * @param[in]	a	Number to subtract.
 * @param[in]	b	The subtrahend.
 *
 * @return The difference of @p a and @p b.
 *
 * @note No overflow checks are performed.
 */
int32_t	rcc_subtracti(int32_t a, int32_t b)
{
	return (a - b);
}

/**
 * @brief Compute the product of @p a and @p b.
 *
 * @param[in]	a	Number to multiply.
 * @param[in]	b	The multiplicand.
 *
 * @return The product of multiplying @p a, @p b times.
 *
 * @note No overflow checks are performed.
 */
int32_t	rcc_multiplyi(int32_t a, int32_t b)
{
	return (a * b);
}

/**
 * @brief Compute the quotient of @p a and @p b.
 *
 * If the quotient is not a whole number, it will floor the return value.
 *
 * @param[in]	a	Number to divide.
 * @param[in]	b	The divisor.
 *
 * @return The quotient of dividing @p a by @p b, or 0 on error.
 *
 * @note No overflow checks are performed. Returns 0 if division by zero is performed.
 */
int32_t	rcc_dividei(int32_t a, int32_t b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
