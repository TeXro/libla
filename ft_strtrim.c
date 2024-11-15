/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:25:28 by zzin              #+#    #+#             */
/*   Updated: 2024/11/14 20:04:52 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_s(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	r;
	char	*ptr;

	ptr = ((char *)s1);
	a = 0;
	while (s1[a])
	{
		b = 0;
		r = 1;
		while (set[b])
		{
			if (set[b] == s1[a])
			{
				ptr = ((char *)(s1 + a + 1));
				r = 0;
			}
			b++;
		}
		if (r == 1)
			break ;
		a++;
	}
	return (ptr);
}

char	*get_f(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	r;
	char	*ptr;

	a = ft_strlen(s1);
	ptr = ((char *)s1 + a - 1);
	while (a--)
	{
		b = 0;
		r = 1;
		while (set[b])
		{
			if (set[b] == s1[a])
			{
				ptr = ((char *)s1 + a - 1);
				r = 0;
			}
			b++;
		}
		if (r == 1)
			break ;
	}
	return (ptr);
}

size_t	cal(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while ((get_s(s1, set) + i) <= get_f(s1, set))
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;
	size_t	vcal;

	if (!s1 || !set)
		return (NULL);
	vcal = cal(s1, set);
	i = 0;
	result = (char *)(malloc(sizeof(char) * (vcal + 1)));
	if (!result)
		return (NULL);
	while (i < (vcal))
	{
		result[i] = *(get_s(s1, set) + i);
		i++;
	}
	result[i] = '\0';
	return (result);
}
