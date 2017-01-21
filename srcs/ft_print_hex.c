/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 14:47:20 by khansman          #+#    #+#             */
/*   Updated: 2016/08/21 14:47:22 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(unsigned char num)
{
	BASE_STR2;
	if (num >= 16)
		ft_print_hex(num / 16);
	write(1, (base + (num % 16)), 1);//try use &0xFFFF
}
