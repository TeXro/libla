/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:45:11 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:04:10 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(
			char *restrict dst,
			const char *restrict src,
			size_t dstsize)
{
	size_t	i1;
	size_t	i2;
	size_t	j;

	i1 = 0;
	i2 = 0;
	if (!dst && dstsize == 0 && src)
		return (ft_strlen(src));
	while (dst[i1] != '\0' && i1 < dstsize)
		i1++;
	while (src[i2] != '\0')
		i2++;
	if (dstsize <= i1)
		return (dstsize + i2);
	j = 0;
	while (src[j] != '\0' && (i1 + j) < (dstsize - 1))
	{
		dst[i1 + j] = src[j];
		j++;
	}
	dst[i1 + j] = '\0';
	return (i1 + i2);
}
