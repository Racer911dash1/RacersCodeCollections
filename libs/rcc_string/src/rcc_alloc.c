/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:46:35 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/27 19:16:08 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Allocate @p nmemb of @p size amount of memory.
 *
 * @param[in]	nmemb	Number of members.
 * @param[in]	size	Size of each member
 *
 * @return Pointer to the allocated memory.
 *
 * @warning Caller owns free().
 */
void	*rcc_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(1));
	}
	if (nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	rcc_bzero(ptr, nmemb * size);
	return (ptr);
}