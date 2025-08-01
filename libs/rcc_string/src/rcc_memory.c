/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_memory.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:01:38 by dbakker           #+#    #+#             */
/*   Updated: 2025/08/01 23:28:41 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

/**
 * @brief Write @p num bytes of zeros pointed to by @p buffer.
 *
 * @param[in,out]	buffer	Pointed area to fill.
 * @param[in]		num		Amount of zeros to write.
 *
 * @return Pointer to the zerod memory area.
 */
void	*rcc_bzero(void *buffer, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		((unsigned char *)buffer)[i] = 0;
	}
	return (buffer);
}

/**
 * @brief Write @p num bytes of @p c pointed to by @p buffer.
 *
 * @param[in,out]	buffer	Pointed area to fill.
 * @param[in]		c		Character to fill @p buffer with.
 * @param[in]		num		Amount of @p c to write.
 *
 * @return Pointer to the memory area filled with @p c characters.
 */
void	*rcc_memset(void *buffer, int c, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		((unsigned char *)buffer)[i] = c;
	}
	return (buffer);
}

/**
 * @brief Copy @p num bytes pointed from @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 * @param[in]		num		Amount of bytes to copy from @p src.
 *
 * @return Pointer to @p dest.
 *
 * @note Behaviour is undefined if the copying happens between memory areas that overlap.
 * @note Use rcc_memmove if this is not intended.
 */
void	*rcc_memcpy(void *dest, const void *src, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
	}
	return (dest);
}

/**
 * @brief Copy @p num bytes pointed from @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 * @param[in]		num		Amount of bytes to copy from @p src.
 *
 * @return Pointer after the last written byte to @p dest.
 */
void	*rcc_mempcpy(void *dest, const void *src, size_t num)
{
	size_t	i = 0;

	while (i < num)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest + i);
}

/**
 * @brief Copy @p num bytes pointed from @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination memory area.
 * @param[in]		src		Pointer to the source memory area.
 * @param[in]		num		Amount of bytes to copy from @p src.
 *
 * @return Pointer to @p dest.
 */
void	*rcc_memmove(void *dest, const void *src, size_t num)
{
	if (((unsigned char *)dest) < ((const unsigned char* )src))
	{
		rcc_memcpy(dest, src, num);
	}
	else
	{
		while (num > 0)
		{
			((unsigned char *)dest)[num] = ((const unsigned char *)src)[num];
			num--;
		}
	}
	return (dest);
}

/**
 * @brief Compare the first @p num bytes between @p ptr1 and @p ptr2.
 *
 * @param[in]	ptr1	Pointer to the memory area.
 * @param[in]	ptr2	Pointer to the memory area.
 * @param[in]	num		Amount of bytes to compare.
 *
 * @retval 0 if @p ptr1 and @p ptr2 are equal.
 * @retval A negative value if @p ptr1 is less than @p ptr2.
 * @retval A positive value if @p ptr1 is greater than @p ptr2.
 */
int32_t	rcc_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i = 0;

	if (num == 0)
	{
		return (0);
	}
	while (((const unsigned char *)ptr1)[i] == ((const unsigned char *)ptr2)[i] && --num > 0)
	{
		i++;
	}
	return (((const unsigned char *)ptr1)[i] - ((const unsigned char *)ptr2)[i]);
}