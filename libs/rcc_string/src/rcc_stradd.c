#include "rcc_string.h"

/**
 * @brief Create a new string by padding @p num bytes of @p pad characters
 * @brief to the left of @p str.
 *
 * @param[in]	str	The string to pad.
 * @param[in]	pad	The characters to pad @p str with.
 * @param[in]	num	The amount of characters to pad to the left of @p str.
 *
 * @return Pointer to the padded string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_padleft(const char *str, int32_t pad, size_t num)
{
	char	*padleft;
	size_t	padsize;

	if (str == NULL)
	{
		return (NULL);
	}
	padsize = rcc_strlen(str) + num;
	padleft = rcc_calloc(padsize + 1, sizeof(char));
	if (padleft == NULL)
	{
		return (NULL);
	}
	rcc_memset(padleft, pad, num);
	rcc_strcpy(padleft + num, str);
	return (padleft);
}

/**
 * @brief Create a new string by padding @p num bytes of @p pad characters
 * @brief to the right of @p str.
 *
 * @param[in]	str	The string to pad.
 * @param[in]	pad	The characters to pad @p str with.
 * @param[in]	num	The amount of characters to pad to the right of @p str.
 *
 * @return Pointer to the padded string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_padright(const char *str, int32_t pad, size_t num)
{
	char	*padright;
	size_t	padsize;
	size_t	strlen;

	if (str == NULL)
	{
		return (NULL);
	}
	strlen = rcc_strlen(str);
	padsize = strlen + num;
	padright = rcc_calloc(padsize + 1, sizeof(char));
	if (padright == NULL)
	{
		return (NULL);
	}
	rcc_strcpy(padright, str);
	rcc_memset(padright + strlen, pad, num);
	return (padright);
}

/**
 * @brief Create a new string of @p num bytes and filling any remaining bytes
 * @brief with @p fill characters to the left of @p str.
 *
 * If the length of @p str >= @p num, it will return NULL.
 *
 * @param[in]	str		The string to fill.
 * @param[in]	fill	The characters to fill @p str with.
 * @param[in]	num		The amount of characters to fill to the left of @p str.
 *
 * @return Pointer to the filled string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_fillleft(const char *str, int32_t fill, size_t num)
{
	char	*fillleft;
	size_t	strlen;

	if (str == NULL)
	{
		return (NULL);
	}
	strlen = rcc_strlen(str);
	if (strlen >= num)
	{
		return (NULL);
	}
	fillleft = rcc_calloc(num + 1, sizeof(char));
	if (fillleft == NULL)
	{
		return (NULL);
	}
	rcc_memset(fillleft, fill, num - strlen);
	rcc_strcpy(fillleft + num - strlen, str);
	return (fillleft);
}

/**
 * @brief Create a new string of @p num bytes and filling any remaining bytes
 * @brief with @p fill characters to the right of @p str.
 *
 * If the length of @p str >= @p num, it will return NULL.
 *
 * @param[in]	str		The string to fill.
 * @param[in]	fill	The characters to fill @p str with.
 * @param[in]	num		The amount of characters to fill to the right of @p str.
 *
 * @return Pointer to the filled string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_fillright(const char *str, int32_t fill, size_t num)
{
	char	*fillright;
	size_t	strlen;

	if (str == NULL)
	{
		return (NULL);
	}
	strlen = rcc_strlen(str);
	if (strlen >= num)
	{
		return (NULL);
	}
	fillright = rcc_calloc(num + 1, sizeof(char));
	if (fillright == NULL)
	{
		return (NULL);
	}
	rcc_strcpy(fillright, str);
	rcc_memset(fillright + strlen, fill, num - strlen);
	return (fillright);
}