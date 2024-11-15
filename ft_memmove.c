/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:09:31 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:03:18 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst == psrc || len == 0)
		return (dst);
	if (pdst < psrc)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len--)
			pdst[len] = psrc[len];
	}
	return (dst);
}
