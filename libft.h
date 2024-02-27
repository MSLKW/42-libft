/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:54:28 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/27 08:47:09 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
# define CAPITALIZATION_DIFF 32

int	ft_strlen(char *str);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);


#endif