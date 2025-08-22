#include "rcc_string.h"

/**
 * @brief Copy the pointer of @p src to @p dest and null terminate it.
 *
 * @param[in,out]	dest	Pointer to the destination buffer.
 * @param[in]		src		Pointer to the source buffer.
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
 * @param[in,out]	dest	Pointer to the destination buffer.
 * @param[in]		src		Pointer to the source buffer.
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
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
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
 * @param[in,out]	dest	Pointer to the destination buffer.
 * @param[in]		src		Pointer to the source buffer.
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
 * @param[in,out]	dest	Pointer to the destination buffer.
 * @param[in]		src		Pointer to the source buffer.
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
 * @brief Copy the first @p num bytes of pointer @p src to @p dest and null terminate it.
 *
 * @param[in,out]	dest	Pointer to the destination buffer.
 * @param[in]		src		Pointer to the source buffer.
 * @param[in]		num		Amount of bytes to copy.
 *
 * @return length of @p src.
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 * @note At minimum being rcc_strlen(src) + 1.
 */
size_t	rcc_strlcpy(char *dest, const char *src, size_t num)
{
	size_t	srclen = rcc_strlen(src);
	size_t	i;

	if (num == 0)
	{
		return (srclen);
	}
	for (i = 0; i < num - 1 && src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (srclen);
}

/**
 * @brief Concatenate the pointer of @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the destination buffer.
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
 * @param[in,out]	dest	Pointer to the destination buffer.
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

/**
 * @brief Concatenate @p num bytes of the poiner @p src to @p dest.
 *
 * @param[in,out]	dest	Pointer to the null terminated destination string.
 * @param[in]		src		Pointer to the null terminated string to concatenate.
 * @param[in]		num		Maximum amount of bytes to concatenate.
 *
 * @return The total length of the string it tried to create. That is, the initial
 * @return length of @p dest plus the length of @p src. If
 *
 * @note Caller is responsible to allocate a buffer large enough for @p dest.
 * @note At minimum being rcc_strlen(dest) + @p num + 1 bytes.
 */
size_t	rcc_strlcat(char *dest, const char *src, size_t num)
{
	size_t	srclen = rcc_strlen(src);
	size_t	destlen = rcc_strnlen(dest, num);
	size_t	i;

	if (destlen == num)
	{
		return (srclen + num);
	}
	for (i = 0; i < num - 1 && src[i]; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}