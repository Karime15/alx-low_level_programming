#include "main.h"
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> 09377c665500403e2e7299e19f8c382fc76a5643

/**
 * main - check the code
 *
 * Return: Always 0.
<<<<<<< HEAD
 **/

int main(void)
{
       	print_alphabet();
	return (0);
=======
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
>>>>>>> 09377c665500403e2e7299e19f8c382fc76a5643
}
