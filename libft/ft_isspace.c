/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 00:57:54 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/15 16:58:39 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie si l'on a un caractère blanc, d'espacement.
*/

#include "libft.h"

int		ft_isspace(int c)
{
	if (ft_isblank(c) || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
