/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisrael <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:38:54 by uisrael           #+#    #+#             */
/*   Updated: 2019/05/27 16:19:53 by uisrael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isalnum(int c)
{
	unsigned char	c1;

	c1 = (unsigned char)c1;
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
