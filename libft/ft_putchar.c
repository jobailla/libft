/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 17:46:45 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/03 14:36:27 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche le caractère c sur la sortie standard.
*/

#include "libft.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
