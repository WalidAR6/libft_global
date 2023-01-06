/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:44:47 by waraissi          #+#    #+#             */
/*   Updated: 2022/11/04 18:18:03 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			|| (c >= 48 && c <= 57)))
		return (0);
	return (1);
}