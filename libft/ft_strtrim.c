/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwalee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 21:46:08 by hwalee            #+#    #+#             */
/*   Updated: 2020/10/07 19:15:50 by hwalee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_word(char ch, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	front_ind(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i] && check_word(s1[i], set))
		i++;
	return (i);
}

static int	rear_ind(char const *s1, char const *set)
{
	int size;

	size = ft_strlen(s1);
	size--;
	while (s1[size] && check_word(s1[size], set))
		size--;
	return (size);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		front;
	int		rear;

	dest = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	front = front_ind(s1, set);
	rear = rear_ind(s1, set);
	ft_strlcpy(dest, s1 + front, rear - front + 2);
	return (dest);
}
