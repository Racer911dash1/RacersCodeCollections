/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_alloc.c                                                   */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/07/27 18:46:34                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/14 23:09:28                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Allocate @p num times @p size bytes of memory.
 *
 * If @p num or @p size is 0, it will instead return a unique pointer value that can
 * be freed later.
 *
 * @param[in]	num		Number of members.
 * @param[in]	size	Size of each member
 *
 * @return Pointer to the allocated memory, or NULL on failure.
 *
 * @warning Caller owns free().
 */
void	*rcc_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
	{
		return (malloc(1));
	}
	if (num > SIZE_MAX / size)
	{
		return (NULL);
	}
	ptr = malloc(num * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	rcc_bzero(ptr, num * size);
	return (ptr);
}