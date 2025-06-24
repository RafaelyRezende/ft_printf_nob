/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:13:44 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/24 19:51:29 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

# define MINUS 1
# define ZERO 2
# define DOT 4
# define POUND 8
# define SPACE 16
# define PLUS 32

int	ft_printf(const char *fmt, ...);
int	ft_putchar(char c);
int	ft_putstr(char *args);

#endif
