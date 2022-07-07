#include "main.h"
/**
 * positive_or_negative - prints negative if number is less than 0
 * prints positive if number is greater than 0
 * prints zero if number is 0
 * @i: is the number to be printed
 *
 * Return Nothing
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
return;
}
