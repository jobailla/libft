/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 02:19:00 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/05 19:02:26 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie si l'on a un caractère minuscule.
*/

#include "libft.h"

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
