#include <limits.h>
#include <stdio.h>

void test_c(int d)
{
    printf(", len: %d\n", printf("%d", d));
}

int main(void)
{
    test_c(0); // zero
    test_c(7); // one-digit number
    test_c(11115);
    test_c(-666);     // overflow
    test_c(INT_MIN);  // Maximum ASCII character
    test_c(INT_MAX);  // Extended ASCII character
    test_c(UINT_MAX); // Non-ASCII character
}