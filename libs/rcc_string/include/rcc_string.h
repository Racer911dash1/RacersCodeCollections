/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:57:10 by dbakker           #+#    #+#             */
/*   Updated: 2025/08/03 01:15:42 by dbakker          ###   ########.fr       */
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
// rcc_atonum.c

int32_t	rcc_atoi(const char *str);
int64_t	rcc_atol(const char *str);
double	rcc_atod(const char *str);
// rcc_memory.c

void	*rcc_bzero(void *buffer, size_t num);
void	*rcc_memset(void *buffer, int c, size_t num);
void	*rcc_memcpy(void *dest, const void *srcs, size_t num);
void	*rcc_mempcpy(void *dest, const void *src, size_t num);
void	*rcc_memmove(void *dest, const void *src, size_t num);
int32_t	rcc_memcmp(const void *ptr1, const void *ptr2, size_t num);
// rcc_isthing.c

bool	rcc_isalnum(int c);
bool	rcc_isalpha(int c);
bool	rcc_iscntrl(int c);
bool	rcc_isdigit(int c);
bool	rcc_isgraph(int c);
bool	rcc_islower(int c);
bool	rcc_isprint(int c);
bool	rcc_ispunct(int c);
bool	rcc_isspace(int c);
bool	rcc_isupper(int c);
bool	rcc_isxdigit(int c);
bool	rcc_isascii(int c);
bool	rcc_isblank(int c);
// rcc_strfind.c

char	*rcc_strchr(const char *str, int c);
char	*rcc_strchrnul(const char *str, int c);
char	*rcc_strrchr(const char *str, int c);
char	*rcc_strstr(const char *big, const char *little);
char	*rcc_strnstr(const char *big, const char *little, size_t num);
// rcc_strcmp.c

int32_t	rcc_strcmp(const char *str1, const char *str2);
int32_t	rcc_strncmp(const char *str1, const char *str2, size_t num);
// rcc_strcpy.c

char	*rcc_stpcpy(char *dest, const char *src);
char	*rcc_strcpy(char *dest, const char *src);
char	*rcc_strcat(char *dest, const char *src);
// rcc_strdup.c

char	*rcc_strdup(const char *str);
char	*rcc_strndup(const char *str, size_t num);
// rcc_strlen.c

size_t	rcc_strlen(const char *str);
size_t	rcc_strnlen(const char *str, size_t maxlen);
// rcc_tocase.c

int32_t	rcc_tolower(int32_t c);
int32_t	rcc_toupper(int32_t c);
#endif