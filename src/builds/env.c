/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simgarci <simgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:50:14 by cdaureo-          #+#    #+#             */
/*   Updated: 2025/09/25 11:49:33 by simgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_env(t_ms *ms)
{
	t_env	*env_list;

	env_list = ms->env_list;
	if (!ms || !ms->env_list)
		return (ft_putendl_fd("No environment variables set.", 2), 1);
	while (env_list)
	{
		if (env_list->key)
		{
			if (env_list->value)
				printf("%s=%s\n", env_list->key, env_list->value);
			else
				printf("%s=\n", env_list->key);
		}
		env_list = env_list->next;
	}
	return (0);
}
