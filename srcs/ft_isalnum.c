/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:42:01 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/03 22:59:14 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int n)
{
	if ((ft_isdigit(n) == 1) || (ft_isupper(n) == 1) || (ft_islower(n) == 1))
		return (1);
	return (0);
}
