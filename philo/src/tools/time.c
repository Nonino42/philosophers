/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:53:06 by hanmpark          #+#    #+#             */
/*   Updated: 2023/05/06 17:00:09 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "simulation.h"

// Returns the actual time in milliseconds
time_t	actual_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

// Waits 'wait' milliseconds
void	wait_time(time_t wait)
{
	time_t	timemark;

	timemark = actual_time();
	while (actual_time() - timemark < wait)
		usleep(50);
}
