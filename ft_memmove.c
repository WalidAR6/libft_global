/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:26:23 by waraissi          #+#    #+#             */
/*   Updated: 2022/11/06 02:31:52 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == dest || n == 0)
		return (dest);
	if (src >= dest)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		n += 1;
		while (--n)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
		}
	}
	return (dest);
}
