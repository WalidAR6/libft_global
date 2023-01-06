/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:42:25 by waraissi          #+#    #+#             */
/*   Updated: 2023/01/06 02:30:06 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(int fd, unsigned int nbr, int *res)
{
	if (nbr < 10)
		ft_putchar(fd, nbr + 48, res);
	else
	{
		ft_putnbr(fd, nbr / 10, res);
		ft_putnbr(fd, nbr % 10, res);
	}
}
