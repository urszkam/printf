#include <limits.h>
#include "../ft_printf.h"

void test_c(unsigned int x)
{
    ft_printf("%%u: %u\n", x);
}

int main(void)
{
    test_c(0); // zero
    test_c(7); // one-digit number
    test_c(11115);
    test_c(-666);           // overflow
    test_c(2147483649);     // Maximum ASCII character
    test_c(INT_MIN);        // Extended ASCII character
    test_c(UINT_MAX);       // Non-ASCII character
    test_c(UINT_MAX + 666); // Non-ASCII character
}