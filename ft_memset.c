/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:54:35 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/30 16:25:23 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	k;

	i = 0;
	k = c;
	b1 = b;
	while (i < len)
	{
		b1[i] = k;
		i++;
	}
	return (b);
}
