#include "libft.h"


/**
testing isdigit by comparing it to the original function and testing edgecases
**/


int	main(void)
{
	int	test_chars[] = {'0', '5', '9', 'a', 'Z', ' ', 0, 127, -1, 1000};
	int	i = 0;

	while (i < 10)
	{
		int c = test_chars[i];
		char display_char = c;

		if (c >= 32 && c <= 126)
			display_char = c;
		else
			display_char = '.';

		printf("Char: '%c' (%d) → ft_isdigit: %d | isdigit: %d\n",
               display_char, c, ft_isdigit(c), isdigit(c));

		i++;
	}
	return (0);
}
