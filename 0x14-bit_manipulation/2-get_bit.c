#include "main.h"

/**
 * get_bit - returns the value of a bit at
 * a given index in the binary representation of a number
 * @x: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit (either 0 or 1),
 * or -1 if the index is out of range
 */
int get_bit(unsigned long int x, unsigned int index)
{
int bitVaule;

if (index > 63)
return (-1);

bitVaule = (x >> index) & 1;

return (bitVaule);
}
