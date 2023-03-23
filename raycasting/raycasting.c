/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <lross@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:46:03 by lross             #+#    #+#             */
/*   Updated: 2022/03/19 18:58:21 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ray_loop(t_data *data)
{
	draw_floor_ceil(data, data->cam);
	draw_wall(data);
	buf_to_img(data);
	mlx_put_image_to_window(data->mlx, data->win, data->cam->img.img, 0, 0);
	return (0);
}
