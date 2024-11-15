/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:23:54 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:04:29 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(
				const char *s1,
				const char *s2,
				size_t n){
	size_t	length;

	length = 0;
	while (
		n > 0
		&& s1[length] != '\0'
		&& s2[length] != '\0'
		&& (unsigned char)s1[length] == (unsigned char)s2[length])
	{
		length++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[length] - (unsigned char)s2[length]);
	}
}
