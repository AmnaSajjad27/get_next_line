/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:01:35 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/15 17:04:58 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_size;

	lst_size = 0;
	while (lst)
	{
		lst = next->lst;
		lst_size++;
	}
	return (lst_size);
}
