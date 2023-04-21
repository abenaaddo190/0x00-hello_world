#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

int main(void)
{
    ssize_t len = sizeof(MESSAGE) - 1;
    ssize_t written = write(2, MESSAGE, len);
    return (written == len) ? 1 : -1;
}
