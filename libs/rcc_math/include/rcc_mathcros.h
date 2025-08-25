#ifndef RCC_MATHCROS_H
# define RCC_MATHCROS_H

# include "internal/rcc_mathcros_internal.h"

# include <stdint.h>

/**
 * @brief Compute the sum of @p a and @p b.
 *
 * No overflow checks are performed.
 *
 * @param[in]	a	Number to add.
 * @param[in]	b	The addend.
 *
 * @return The sum of @p a and @p b.
 */
# define rcc_add(a, b) _Generic((a), \
	long long:			__rcc_add_llong, \
	int8_t:				__rcc_add_int8, \
	int16_t:			__rcc_add_int16, \
	int32_t:			__rcc_add_int32, \
	int64_t:			__rcc_add_int64, \
	unsigned long long:	__rcc_add_ullong, \
	uint8_t:			__rcc_add_uint8, \
	uint16_t:			__rcc_add_uint16, \
	uint32_t:			__rcc_add_uint32, \
	uint64_t:			__rcc_add_uint64, \
	float:				__rcc_add_float, \
	double:				__rcc_add_double, \
	long double:		__rcc_add_ldouble \
)(a, b)

/**
 * @brief Compute the difference of @p a and @p b.
 *
 * No overflow checks are performed.
 *
 * @param[in]	a	Number to subtract.
 * @param[in]	b	The subtrahend.
 *
 * @return The difference of @p a and @p b.
 */
# define rcc_subtract(a, b) _Generic((a), \
	long long:			__rcc_subtract_llong, \
	int8_t:				__rcc_subtract_int8, \
	int16_t:			__rcc_subtract_int16, \
	int32_t:			__rcc_subtract_int32, \
	int64_t:			__rcc_subtract_int64, \
	unsigned long long:	__rcc_subtract_ullong, \
	uint8_t:			__rcc_subtract_uint8, \
	uint16_t:			__rcc_subtract_uint16, \
	uint32_t:			__rcc_subtract_uint32, \
	uint64_t:			__rcc_subtract_uint64, \
	float:				__rcc_subtract_float, \
	double:				__rcc_subtract_double, \
	long double:		__rcc_subtract_ldouble \
)(a, b)

#endif