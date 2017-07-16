/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:12:51 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 18:05:39 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	char		*s;
	size_t		k;
	size_t		l;

	d = dst;
	s = (char *)src;
	k = size;
	while (k-- != 0 && *d != '\0')
		d++;
	l = d - dst;
	k = size - l;
	if (k == 0)
		return (l + ft_strlen(s));
	while (*s != '\0')
	{
		if (k != 1)
		{
			*d++ = *s;
			k--;
		}
		s++;
	}
	*d = '\0';
	return (l + (s - src));
}
