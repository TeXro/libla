/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:56:03 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:45:31 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counti(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*redst(int count, int n, char *dst)
{
	int		i;

	i = (n < 0);
	if (n == -2147483648)
	{
		ft_strlcpy(dst, "-2147483648", 12);
		return (dst);
	}
	if (n < 0)
	{
		dst[0] = '-';
		n = -n;
	}
	dst[count] = '\0';
	while (count > i)
	{
		count--;
		dst[count] = (n % 10) + '0';
		n /= 10;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		count;

	count = counti(n);
	dst = (char *)malloc((count + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	return (redst(count, n, dst));
}
