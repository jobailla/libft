/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:24:23 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/06 15:20:10 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int n)
{
	if (n >= 'a' && n <= 'z')
		n = n - 32;
	return (n);
}
