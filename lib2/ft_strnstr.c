/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:56:12 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:04:41 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *nl, size_t len)
{
	size_t	z;
	size_t	t;

	z = 0;
	if (nl[0] == '\0')
		return ((char *)h);
	while (h[z] != '\0' && z < len)
	{
		t = 0;
		while (nl[t] != '\0' && (z + t) < len && h[z + t] == nl[t])
		{
			if (nl[t + 1] == '\0')
				return ((char *)h + z);
			t++;
		}
		z++;
	}
	return (NULL);
}
