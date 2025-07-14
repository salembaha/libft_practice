#include "libft.h"

/*
 * Function: ft_isalpha
 * --------------------
 * Checks whether a character is alphabetic (A-Z or a-z).
 *
 * Parameters:
 *   c - The character to check, passed as an int.
 *       Only values in the range of unsigned char (0–255) or EOF (-1) are valid.
 *       Passing other values results in undefined behavior.
 *
 * Returns:
 *   Non-zero if c is an alphabetic letter, 0 otherwise.
 */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90 || c >= 97 && c <= 122))
		return (1);
	return (0);
}
