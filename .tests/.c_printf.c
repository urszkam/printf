#include <stdio.h>

void test_c(int c)
{
    printf(", len: %d\n", printf("%c", c));
}

int main(void)
{
    test_c('A');
    test_c('7');
    test_c('\t');
    test_c(' ');
    test_c('\x7F'); // Maximum ASCII character
    test_c('\xFF'); // Extended ASCII character
    test_c('\x80'); // Non-ASCII character
}