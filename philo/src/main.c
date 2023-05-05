/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:15:23 by hanmpark          #+#    #+#             */
/*   Updated: 2023/05/05 16:50:00 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"
#include "table_tools.h"
#include "errors.h"

int	main(int argc, char **argv)
{
	t_table	*table;

	table = NULL;
	if (argc < 5 || argc > 6)
		return (error_exit(ERR_ARGS_NBR));
	table = prepare_table(argc, argv);
	if (!table)
		return (error_exit(ERR_INIT_PHILO));
	if (start_sim(table) == false)
		return (error_exit(ERR_INIT_SIM));
	stop_sim(table);
	return (EXIT_SUCCESS);
}