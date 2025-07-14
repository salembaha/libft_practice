#include "libft.h"

int	ft_isdigit(int c)
/**
 * ft_isdigit - checks if the given character 
     is a digit (0-9 or 48-57 in ascii).
 * c = the character (as an int) to check
**/
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
