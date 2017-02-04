/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 13:38:06 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 17:19:04 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*
char	*ft_strchr(const char *s, int c)
{
	char	*k;

	k = (char *)s;
	while (*k != c)
	{
		if (*k == '\0')
			return (NULL);
		k++;
	}
	return (k);
}
*/
char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if ((unsigned char)s == (unsigned int)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
