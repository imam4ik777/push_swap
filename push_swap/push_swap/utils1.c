#include "push_swap.h"

int	is_only_spaces(const char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
	return (1);
}

int	is_empty_or_whitespace(const char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_isspace((unsigned char)*str))
			return (0);
	return (1);
}

int	ft_isspace(const int c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r');
}
