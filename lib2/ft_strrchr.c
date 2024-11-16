/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:57:46 by zzin              #+#    #+#             */
/*   Updated: 2024/10/25 09:57:46 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				si;
	unsigned char	target;

	target = (unsigned char)c;
	si = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == target)
		{
			si = i;
		}
		i++;
	}
	if (target == '\0')
		return ((char *)s + i);
	if (si == -1)
		return (NULL);
	return ((char *)s + si);
}
