/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:54:17 by asajjad           #+#    #+#             */
/*   Updated: 2022/07/12 09:56:32 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= '' && c <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
main
*/
