#include "main.h"

/**
 * _itoa - Custom function to convert an integer to a string.
 * @n: Integer to convert.
 * @str: Buffer to store the result.
 * Return: Length of the integer string.
 */
int _itoa(int n, char *str)
{
    int i = 0;
	int digit;
	int len;
	int start;
	int end;
	char temp;

    if (n == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return 1;
    }
    while (n != 0)
    {
        digit = n % 10;
        str[i++] = digit + '0';
        n = n / 10;
    }
    str[i] = '\0';
    len = i;
    start = 0;
    end = len - 1;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return len;
}
