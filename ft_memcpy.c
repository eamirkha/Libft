/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:33:45 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/12 10:18:25 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int					i;
	unsigned char		*dst1;
	const unsigned char	*src1;
	unsigned char		num;

	dst1 = dst;
	src1 = src;
	num = n;
	i = 0;
	while (i != num)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
