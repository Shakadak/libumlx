/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 18:45:13 by npineau           #+#    #+#             */
/*   Updated: 2015/01/22 19:24:44 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlx.h"

void	apply_image(t_win const *win, t_img const *img, t_pos const origin)
{
	mlx_put_image_to_window(win->mlx, win->win, img->img, origin.x, origin.y);
}
