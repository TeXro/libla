/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:31:50 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:31:02 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ps1;
	size_t	len;

	len = ft_strlen(s1);
	ps1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!ps1)
		return (NULL);
	ft_strlcpy(ps1, s1, len + 1);
	return (ps1);
}
