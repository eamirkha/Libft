/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:23:11 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/17 16:07:43 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(sizeof(*newstr) * len + 1);
	if (newstr == NULL)
		return (0);
	len = 0;
	while (s1[len] != '\0')
	{
		newstr[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newstr[len] = s2[i];
		i++;
		len++;
	}
	newstr[len] = '\0';
	return (newstr);
}
