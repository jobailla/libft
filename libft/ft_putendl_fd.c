/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:07:18 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:52:43 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrit la chaine s sur le descripteur de fichier fd suivi d’un ’\n’.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd((const char *)s, fd);
	ft_putchar_fd('\n', fd);
}
