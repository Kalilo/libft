/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:43:21 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 17:29:50 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char	k;
	char	l;
	size_t	len;

	if ((k = *little++) != '\0')
	{
		len = ft_strlen(little);
		while (1)
		{
			while (1)
			{
				if ((l = *big++) == '\0' || n-- < 1)
					return (NULL);
				if (l == k)
					break ;
			}
			if (len > n)
				return (NULL);
			if (!ft_strncmp(big, little, len))
				break ;
		}
		big--;
	}
	return ((char *)big);
}
