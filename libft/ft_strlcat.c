/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 21:02:19 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 12:20:01 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ajoute la chaîne src à la fin de la haîne dest en écrasant le caractère `\0'
** a la fin de dest, puis  en  ajoutant un nouveau caractère `\0' final
** Les chaînes ne doivent pas se  chevaucher,  et  la  chaîne dest doit être
** assez grande pour accueillir le resultat.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j) < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
