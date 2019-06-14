/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisrael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:24:18 by uisrael           #+#    #+#             */
/*   Updated: 2019/06/12 14:59:41 by uisrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_words(char const *s, char d)
{
	size_t	num_words;
	size_t	i;

	i = 0;
	num_words = 0;
	if ((s[i] != d) && (s[i + 1] != d) && (s[i + 1] != '\0'))
		num_words++;
	while (s[i])
	{
		if ((s[i] == d) && (s[i + 1] != d) && (s[i + 1] != '\0'))
			num_words++;
		i++;
	}
	return (num_words);
}

static int	ft_splitstr(char **arr, const char *s, char d, size_t len)
{
	size_t	count;
	size_t	wordlen;
	size_t	i;

	count = 0;
	i = 0;
	while (count < len)
	{
		wordlen = 0;
		while (s[i] == d)
			i++;
		while (s[i] != d)
		{
			wordlen++;
			i++;
		}
		if ((arr[count] = ft_strsub(&s[i - wordlen], 0, wordlen)) == NULL)
			return (0);
		count++;
	}
	arr[count] = 0;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		len;

	if (!s)
		return (NULL);
	len = ft_num_words(s, c);
	if ((arr = ((char **)malloc(sizeof(char *) * len + 1))) == NULL)
		return (NULL);
	if (ft_splitstr(arr, s, c, len))
		return (arr);
	else
		free((void **)arr);
	return (arr);
}
