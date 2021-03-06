/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:57:50 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/14 14:57:08 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie s'il s'agit d'un caractère imprimable, y compris l'espace.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
