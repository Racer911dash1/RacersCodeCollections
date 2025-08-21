/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_sqrt.c                                                    */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/07/25 22:13:20                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/14 23:01:57                                           */
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
uint32_t	rcc_sqrti(uint32_t num)
{
	uint32_t	left = 0;
	uint32_t	right = num - 1;
	uint64_t	middle;

	if (num == 1)
	{
		return (1);
	}
	while (left <= right)
	{
		middle = left + ((right - left) / 2);
		if (middle * middle < (uint64_t)num)
		{
			left = middle + 1;
		}
		else if (middle * middle > (uint64_t)num)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (0);
}
