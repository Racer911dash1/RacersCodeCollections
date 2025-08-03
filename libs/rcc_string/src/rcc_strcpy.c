/* ************************************************************************** */
/*                                                                            */
/* File:		rcc_strcpy.c                                                  */
/*                                                                            */
/* Author:		Racer911-1                                                    */
/* Created:		2025/07/27 19:19:13                                           */
/*                                                                            */
/* Modified by:	Racer911-1                                                    */
/* Modified:	2025/08/03 14:57:17                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Copy the pointer of @p src to @p dest and null terminate it.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 *
 * @return Pointer to the terminating null byte of @p dest.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 */
char	*rcc_stpcpy(char *dest, const char *src)
{
	char	*pointer = rcc_mempcpy(dest, src, rcc_strlen(src));

	*pointer = '\0';
	return (pointer);
}

/**
 * @brief Copy the pointer of @p src to @p dest and null terminate it.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 *
 * @return Pointer to @p dest.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 * @note At minimum being rcc_strlen(src) + 1.
 */
char	*rcc_strcpy(char *dest, const char *src)
{
	rcc_stpcpy(dest, src);
	return (dest);
}

/**
 * @brief Concatenate the pointer of @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to concatenate to @p dest.
 *
 * @return Pointer to @p dest.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 * @note At minimum being rcc_strlen(dest) + rcc_strlen(src) + 1.
 */
char	*rcc_strcat(char *dest, const char *src)
{
	rcc_stpcpy(dest + rcc_strlen(dest), src);
	return (dest);
}