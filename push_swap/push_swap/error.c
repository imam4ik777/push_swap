#include "push_swap.h"

void	ft_error_handler(t_error_data *error_data)
{
	if (error_data->arr)
		free(error_data->arr);
	if (error_data->tokens)
	{
		free_tokens(error_data->tokens);
	}
	ft_error();
}

void	free_tokens(char **tokens)
{
	int	i;

	i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}
