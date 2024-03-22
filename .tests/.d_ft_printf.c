#include "ft_printf.h"
#include <limits.h>

void test_c(int d)
{
    ft_printf(", len: %d\n", ft_printf("%d", d));
}

int main(void)
{
    test_c(0); // zero
    test_c(7); // one-digit number
    test_c(11115);
    test_c(-666);
    test_c(INT_MIN);
    test_c(INT_MAX);
    test_c(UINT_MAX);
}