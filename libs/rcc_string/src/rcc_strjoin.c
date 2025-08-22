#include "rcc_string.h"

/**
 * @brief Create a new string from joining the null terminated strings @p src to @p dest.
 *
 * If either string is NULL, will the function also return NULL.
 *
 * @param[in]	dest	First part of the new string.
 * @param[in]	src		Second part of the new string.
 *
 * @return Pointer to the newly created string, or NULL on failure.
 *
 * @warning Caller owns free().
 */
char	*rcc_strjoin(const char *dest, const char* src)
{
	char	*str;
	size_t	srclen;
	size_t	destlen;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	srclen = rcc_strlen(src);
	destlen = rcc_strlen(dest);
	str = rcc_calloc(destlen + srclen + 1, sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	str = rcc_strcpy(str, dest);
	str = rcc_strcat(str, src);
	return (str);
}
