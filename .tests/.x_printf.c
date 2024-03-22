#include <limits.h>
#include <stdio.h>

void test_c(unsigned int x)
{
    printf(", len: %d\n", printf("%x", x));
}

int main(void)
{
    test_c(0); // zero
    test_c(7); // one-digit number
    test_c(666);
    test_c(-666);
    test_c(INT_MAX);
    test_c(INT_MIN);
    test_c(UINT_MAX);
}