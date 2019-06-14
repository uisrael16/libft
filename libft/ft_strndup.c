/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisrael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:07:44 by uisrael           #+#    #+#             */
/*   Updated: 2019/06/11 14:07:43 by uisrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *src, size_t n)
{
	char *cpy;

	cpy = NULL;
	cpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (cpy != NULL)
		ft_strncpy(cpy, src, n);
	return (cpy);
}
