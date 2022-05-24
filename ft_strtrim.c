/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:32:27 by eamirkha          #+#    #+#             */
/*   Updated: 2022/03/30 16:27:40 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check(set, s1[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int	end_len(char const *s1, char const *set, int end, int i)
{
	int	k;
	int	g;

	k = 0;
	while (end > i)
	{
		g = end - 1;
		if (check(set, s1[g]))
		{
			g--;
				end--;
		}
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		end;
	int		lens;
	char	*s2;

	i = 0;
	j = 0;
	i = start(s1, set);
	end = ft_strlen(s1);
	lens = ft_strlen(set);
	end = end_len(s1, set, end, i);
	j = 0;
	s2 = malloc(sizeof(char) * (end - i + 1));
	if (!s2)
		return (NULL);
	while (j < end - i)
	{
		s2[j] = s1[i + j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
