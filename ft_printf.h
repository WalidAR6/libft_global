/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:43:39 by waraissi          #+#    #+#             */
/*   Updated: 2023/01/06 02:27:37 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>

void	ft_putchar(int fd, char c, int *res);
void	ft_putstr(int fd, char *s, int *res);
void	ft_putnbr(int fd, int n, int *res);
void	ft_putnbr_unsigned(int fd, unsigned int nbr, int *res);
void	ft_putnbr_base(int fd, unsigned long long nbr, int *res);
void	ft_putnbr_base_lower(int fd, unsigned int nbr, int *res);
void	ft_putnbr_base_upper(int fd, unsigned int nbr, int *res);
int		ft_printf(int fd, const char *str, ...);

#endif