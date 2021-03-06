/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:31:35 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/06 15:43:42 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie si l'on a un caractère alphabétique.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((ft_isupper(c) == 1) || (ft_islower(c) == 1))
		return (1);
	return (0);
}
