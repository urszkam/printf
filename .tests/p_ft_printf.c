#include <unistd.h>
#include "./ft_printf.h"

void test_p(int c)
{
    ft_printf("%%p: %p\n", p);
}

int main(void)
{
    test_p('A');
    test_p('7');
    test_p('\t');
    test_p('\0');
    test_p('\x7F'); // Maximum ASCII character
    test_p('\xFF'); // Extended ASCII character
    test_p('\x80'); // Non-ASCII character
    test_p('\xa9'); // Unicode character
}