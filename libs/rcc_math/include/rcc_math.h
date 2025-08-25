#ifndef RCC_MATH_H
# define RCC_MATH_H

# include <stdint.h>
# include <stdarg.h>
# include <stddef.h>

// rcc_pow.c

int32_t	rcc_powi(int32_t base, int32_t pow);
// rcc_sqrt.c

uint32_t	rcc_sqrti(uint32_t num);
// rcc_variadic_arithmetic

int32_t	rcc_vmodulo(size_t nums, ...);
int32_t	rcc_vaddi(size_t nums, ...);
int32_t	rcc_vsubtracti(size_t nums, ...);
int32_t	rcc_vmultiplyi(size_t nums, ...);
int32_t	rcc_vdividei(size_t nums, ...);
#endif