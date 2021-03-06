/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 11:29:02 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:56:32 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie la chaîne pointée par src (y compris l'octet nul « \0 » final) dans la
** chaîne pointée par dest. Les deux chaînes ne doivent pas se chevaucher.
** La chaîne dest doit être assez grande pour accueillir la copie.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
