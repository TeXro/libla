/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:46:39 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:04:04 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*result;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!result)
		return (NULL);
	ft_memcpy (result, s1, lens1);
	ft_memcpy (result + lens1, s2, lens2);
	result[lens1 + lens2] = '\0';
	return (result);
}
