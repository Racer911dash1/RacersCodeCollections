#include "rcc_string.h"

/**
 * @brief Compare @p str1 to @p str2.
 *
 * @param[in]	str1	First string.
 * @param[in]	str2	Second string.
 *
 * @retval 0 if @p str1 and @p str2 are equal.
 * @retval A negative value if @p str1 is less than @p str2.
 * @retval A positive value if @p str1 is greater than @p str2.
 */
int32_t	rcc_strcmp(const char *str1, const char *str2)
{
	size_t			i = 0;

	while (str1[i] == str2[i])
	{
		if (!str1[i] || !str2[i])
		{
			return (0);
		}
		i++;
	}
	return ((uint8_t)str1[i] - (uint8_t)str2[i]);
}

/**
 * @brief Compare @p str1 to @p str2, ignoring case-sensitivity.
 *
 * @param[in]	str1	First string.
 * @param[in]	str2	Second string.
 *
 * @retval 0 if @p str1 and @p str2 are equal.
 * @retval A negative value if @p str1 is less than @p str2.
 * @retval A positive value if @p str1 is greater than @p str2.
 */
int32_t	rcc_strcasecmp(const char *str1, const char *str2)
{
	size_t			i = 0;

	while (rcc_tolower(str1[i]) == rcc_tolower(str2[i]))
	{
		if (!str1[i] || !str2[i])
		{
			return (0);
		}
		i++;
	}
	return ((uint8_t)rcc_tolower(str1[i]) - (uint8_t)rcc_tolower(str2[i]));
}

/**
 * @brief Compare the first @p num bytes of @p str1 to @p str2.
 *
 * @param[in]	str1	First string.
 * @param[in]	str2	Second string.
 * @param[in]	num		Amount of bytes to compare.
 *
 * @retval 0 if @p str1 and @p str2 are equal.
 * @retval A negative value if @p str1 is less than @p str2.
 * @retval A positive value if @p str1 is greater than @p str2.
 */
int32_t	rcc_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i = 0;

	if (num == 0)
	{
		return (0);
	}
	while (str1[i] == str2[i] && i < num - 1)
	{
		if (!str1[i] || !str2[i])
		{
			return (0);
		}
		i++;
	}
	return ((uint8_t)str1[i] - (uint8_t)str2[i]);
}

/**
 * @brief Compare the first @p num bytes of @p str1 to @p str2, ignoring case-sensitivity.
 *
 * @param[in]	str1	First string.
 * @param[in]	str2	Second string.
 * @param[in]	num		Amount of bytes to compare.
 *
 * @retval 0 if @p str1 and @p str2 are equal.
 * @retval A negative value if @p str1 is less than @p str2.
 * @retval A positive value if @p str1 is greater than @p str2.
 */
int32_t	rcc_strncasecmp(const char *str1, const char *str2, size_t num)
{
	size_t			i = 0;

	if (num == 0)
	{
		return (0);
	}
	while (rcc_tolower(str1[i]) == rcc_tolower(str2[i]) && i < num - 1)
	{
		if (!str1[i] || !str2[i])
		{
			return (0);
		}
		i++;
	}
	return ((uint8_t)rcc_tolower(str1[i]) - (uint8_t)rcc_tolower(str2[i]));
}