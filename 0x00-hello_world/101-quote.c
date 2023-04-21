#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    ssize_t len = sizeof(MESSAGE) - 1;
    ssize_t written = write(2, MESSAGE, len);
    if(written == len)
    {
        return(1);
    }
}
