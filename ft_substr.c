/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:12:56 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:04:58 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_strlen;
	size_t	stop;
	char	*ps;

	if (!s)
		return (NULL);
	s_strlen = ft_strlen(s);
	stop = 0;
	if (start >= s_strlen)
		return (ft_strdup(""));
	stop = s_strlen - start;
	if (stop > len)
		stop = len;
	ps = (char *)malloc(sizeof(char) * (stop + 1));
	if (!ps)
		return (NULL);
	ft_strlcpy(ps, s + start, stop + 1);
	return (ps);
}
