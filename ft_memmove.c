/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:19:06 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/13 10:43:41 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*dst1;
	const char	*src1;

	i = 0;
	dst1 = dst;
	src1 = src;
	if (src > dst)
	{
		while (i < (char)len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while ((char)len > 0)
		{
			dst1[(char)len - 1] = src1[(char)len - 1];
			len--;
		}
	}
	return (dst);
}
