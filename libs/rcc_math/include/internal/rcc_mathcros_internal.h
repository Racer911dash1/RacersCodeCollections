#ifndef RCC_MATHCROS_INTERNAL_H
# define RCC_MATHCROS_INTERNAL_H

# include <stdint.h>

long long			__rcc_add_llong(long long a, long long b);
int8_t				__rcc_add_int8(int8_t a, int8_t b);
int16_t				__rcc_add_int16(int16_t a, int16_t b);
int32_t				__rcc_add_int32(int32_t a, int32_t b);
int64_t				__rcc_add_int64(int64_t a, int64_t b);
unsigned long long	__rcc_add_ullong(unsigned long long a, unsigned long long b);
uint8_t				__rcc_add_uint8(uint8_t a, uint8_t b);
uint16_t			__rcc_add_uint16(uint16_t a, uint16_t b);
uint32_t			__rcc_add_uint32(uint32_t a, uint32_t b);
uint64_t			__rcc_add_uint64(uint64_t a, uint64_t b);
float				__rcc_add_float(float a, float b);
double				__rcc_add_double(double a, double b);
long double			__rcc_add_ldouble(long double a, long double b);

long long			__rcc_subtract_llong(long long a, long long b);
int8_t				__rcc_subtract_int8(int8_t a, int8_t b);
int16_t				__rcc_subtract_int16(int16_t a, int16_t b);
int32_t				__rcc_subtract_int32(int32_t a, int32_t b);
int64_t				__rcc_subtract_int64(int64_t a, int64_t b);
unsigned long long	__rcc_subtract_ullong(unsigned long long a, unsigned long long b);
uint8_t				__rcc_subtract_uint8(uint8_t a, uint8_t b);
uint16_t			__rcc_subtract_uint16(uint16_t a, uint16_t b);
uint32_t			__rcc_subtract_uint32(uint32_t a, uint32_t b);
uint64_t			__rcc_subtract_uint64(uint64_t a, uint64_t b);
float				__rcc_subtract_float(float a, float b);
double				__rcc_subtract_double(double a, double b);
long double			__rcc_subtract_ldouble(long double a, long double b);
#endif