/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 13:15:10 by khansman          #+#    #+#             */
/*   Updated: 2016/08/13 09:16:17 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	size_t	k;
	char	*tmp;

	k = ft_strlen(src) + 1;
	if (!(tmp = (char *)malloc((u_int)k)))
		return (NULL);
	ft_memcpy(tmp, src, k);
	return (tmp);
}
