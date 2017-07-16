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

#include "../includes/libft.h"

void	ft_print_hex(unsigned char num)
{
	BASE_STR2;
	if (num >= 16)
		ft_print_hex(num >> 4);
	write(1, (base + (num & 0xF)), 1);
}
