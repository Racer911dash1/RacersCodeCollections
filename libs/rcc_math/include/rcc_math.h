/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_math.h                                                    */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/07/23 17:18:19                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/14 23:01:57                                           */
/*                                                                            */
/* ************************************************************************** */

#ifndef RCC_MATH_H
# define RCC_MATH_H

# include <stdint.h>
# include <stdarg.h>
# include <stddef.h>

// rcc_arithmetic.

int32_t	rcc_modulo(int32_t a, int32_t b);
int32_t	rcc_addi(int32_t a, int32_t b);
int32_t	rcc_subtracti(int32_t a, int32_t b);
int32_t	rcc_multiplyi(int32_t a, int32_t b);
int32_t rcc_dividei(int32_t a, int32_t b);
// rcc_pow.c

int32_t	rcc_powi(int32_t base, int32_t pow);
// rcc_sqrt.c

int32_t	rcc_sqrti(int32_t num);
// rcc_variadic_arithmetic

int32_t	rcc_vmodulo(size_t nums, ...);
int32_t	rcc_vaddi(size_t nums, ...);
int32_t	rcc_vsubtracti(size_t nums, ...);
int32_t	rcc_vmultiplyi(size_t nums, ...);
int32_t	rcc_vdividei(size_t nums, ...);
#endif