/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0911/01/01 00:00:00 by                   #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/08/18 12:05:39 by dbakker          ###   ########.fr       */
=======
/*   Updated: 2025/08/18 11:50:36 by dbakker          ###   ########.fr       */
>>>>>>> split
/*                                                                            */
/* ************************************************************************** */

#ifndef RCC_STRING_H
# define RCC_STRING_H

# include <stdint.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>

// rcc_alloc.c

void	*rcc_calloc(size_t nmemb, size_t size);
// rcc_atotype.c

int32_t	rcc_atoi(const char *str);
int64_t	rcc_atol(const char *str);
double	rcc_atod(const char *str);
// rcc_free.c

void	rcc_free2d(void **ptr, size_t size);
// rcc_isthing.c

bool	rcc_isalnum(int32_t c);
bool	rcc_isalpha(int32_t c);
bool	rcc_iscntrl(int32_t c);
bool	rcc_isdigit(int32_t c);
bool	rcc_isgraph(int32_t c);
bool	rcc_islower(int32_t c);
bool	rcc_isprint(int32_t c);
bool	rcc_ispunct(int32_t c);
bool	rcc_isspace(int32_t c);
bool	rcc_isupper(int32_t c);
bool	rcc_isxdigit(int32_t c);
bool	rcc_isascii(int32_t c);
bool	rcc_isblank(int32_t c);
// rcc_memory.c

void	*rcc_bzero(void *buffer, size_t num);
void	*rcc_memset(void *buffer, int32_t c, size_t num);
void	*rcc_memcpy(void *dest, const void *srcs, size_t num);
void	*rcc_mempcpy(void *dest, const void *src, size_t num);
void	*rcc_memmove(void *dest, const void *src, size_t num);
int32_t	rcc_memcmp(const void *ptr1, const void *ptr2, size_t num);
// rcc_split.c

char	**rcc_split(const char *str, const char delimiter);
// rcc_strcmp.c

int32_t	rcc_strcmp(const char *str1, const char *str2);
int32_t	rcc_strcasecmp(const char *str1, const char *str2);
int32_t	rcc_strncmp(const char *str1, const char *str2, size_t num);
int32_t	rcc_strncasecmp(const char *str1, const char *str2, size_t num);
// rcc_strcpy.c

char	*rcc_stpcpy(char *dest, const char *src);
char	*rcc_stpncpy(char *dest, const char *src, size_t num);
char	*rcc_strcpy(char *dest, const char *src);
char	*rcc_strncpy(char *dest, const char *src, size_t num);
size_t	rcc_strlcpy(char *dest, const char *src, size_t num);
char	*rcc_strcat(char *dest, const char *src);
char	*rcc_strncat(char *dest, const char *src, size_t num);
size_t	rcc_strlcat(char *dest, const char *src, size_t num);
// rcc_strdup.c

char	*rcc_strdup(const char *str);
char	*rcc_strndup(const char *str, size_t num);
// rcc_strfind.c

char	*rcc_strchr(const char *str, int32_t c);
char	*rcc_strchrnul(const char *str, int32_t c);
char	*rcc_strrchr(const char *str, int32_t c);
char	*rcc_strstr(const char *big, const char *little);
char	*rcc_strcasestr(const char *big, const char *little);
char	*rcc_strnstr(const char *big, const char *little, size_t num);
char	*rcc_strcnasestr(const char *big, const char *little, size_t num);

// rcc_strjoin.c

char	*rcc_strjoin(const char *dest, const char* src);
// rcc_strlen.c

size_t	rcc_strlen(const char *str);
size_t	rcc_strnlen(const char *str, size_t maxlen);
// rcc_strtrim.c

char	*rcc_trim(const char *str, const char *set);
char	*rcc_trimstart(const char *str, const char *set);
char	*rcc_trimprefix(const char *str, const char *prefix);
char	*rcc_trimend(const char *str, const char *set);
char	*rcc_trimsuffix(const char *str, const char *suffix);
// rcc_tocase.c

int32_t	rcc_tolower(int32_t c);
int32_t	rcc_toupper(int32_t c);
#endif