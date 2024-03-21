#include <limits.h>
#include <stdio.h>

void test_c(unsigned int x)
{
    printf("%%X: %X\n", x);
}

int main(void)
{
    test_c(0); // zero
    test_c(7); // one-digit number
    test_c(11115);
    test_c(-666);     // overflow
    test_c(INT_MAX);  // Maximum ASCII character
    test_c(INT_MIN);  // Extended ASCII character
    test_c(UINT_MAX); // Non-ASCII character
}