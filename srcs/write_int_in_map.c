/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_int_in_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:49:43 by oevtushe          #+#    #+#             */
/*   Updated: 2018/08/25 11:47:53 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

void	write_int_in_map(int *val, int pos, unsigned char *map)
{
	unsigned char	*p;

	pos = normalize_pc(pos);
	p = (unsigned char *)val;
	if ((pos + sizeof(int) <= MEM_SIZE))
		ft_memcpy(&map[pos], val, sizeof(int));
	else
	{
		ft_memcpy(&map[pos], p, MEM_SIZE - pos);
		p += MEM_SIZE - pos;
		ft_memcpy(map, p, sizeof(int) - (MEM_SIZE - pos));
	}
}
