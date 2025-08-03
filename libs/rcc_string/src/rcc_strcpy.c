/* ************************************************************************** */
/*                                                                            */
/* File:		rcc_strcpy.c                                                  */
/*                                                                            */
/* Author:		Racer911-1                                                    */
/* Created:		2025/07/27 19:19:13                                           */
/*                                                                            */
/* Modified by:	Racer911-1                                                    */
/* Modified:	2025/08/03 22:33:28                                           */
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
 * @brief Copy the first @p num bytes of the pointer @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 * @param[in]		num		Amount of bytes to copy.
 *
 * @return The pointer to the first null byte (if written), or the pointer to the last character of @p dest.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 */
char	*rcc_stpncpy(char *dest, const char *src, size_t num)
{
	size_t	i;

	for (i = 0; src[i] && i < num; i++)
	{
		((unsigned char *)dest)[i] = ((unsigned const char *)src)[i];
	}
	for (size_t j = 0; i + j < num; j++)
	{
		((unsigned char *)dest)[i + j] = '\0';
	}
	return (dest + i);
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
 * @brief Copy the first @p num bytes of pointer @p src to @p dest and null terminate it.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 * @param[in]		num		Amount of bytes to copy.
 *
 * @return Pointer to @p dest.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 * @note At minimum being rcc_strlen(src) + 1.
 */
char	*rcc_strncpy(char *dest, const char *src, size_t num)
{
	rcc_stpncpy(dest, src, num);
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

/**
 * @brief Concatenate @p num bytes of the poiner @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to concatenate to @p dest.
 * @param[in]		num		Amount of bytes to concatenate.
 *
 * @return Pointer to @p dest.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 * @note At minimum being rcc_strlen(dest) + @p num + 1.
 */
char	*rcc_strncat(char *dest, const char *src, size_t num)
{
	rcc_stpncpy(dest + rcc_strlen(dest), src, num);
	return (dest);
}