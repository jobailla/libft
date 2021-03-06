/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 01:52:57 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/06 01:56:26 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie s'il s'agit d'un chiffre hexadécimal,
*/

#include "libft.h"

int		ft_isxdigit(int c)
{
	if ((ft_isdigit(c) == 1) || (ft_isupper(c) == 1) || (ft_islower(c) == 1))
		return (1);
	return (0);
}
