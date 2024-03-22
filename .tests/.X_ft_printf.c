#include "ft_printf.h"
#include <limits.h>

void test_c(unsigned int x)
{
    ft_printf(", len: %d\n", ft_printf("%X", x));
}

int main(void)
{
    test_c(0); // zero
    test_c(7); // one-digit number
    test_c(11115);
    test_c(-666);
    test_c(INT_MAX);
    test_c(INT_MIN);
    test_c(UINT_MAX);
}