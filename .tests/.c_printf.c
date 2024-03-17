#include <stdio.h>

void test_c(int c)
{
    printf("%%c: %c\n", c);
}

int main(void)
{
    test_c('A');
    test_c('7');
    test_c('\t');
    test_c('\0');
    test_c('\x7F'); // Maximum ASCII character
    test_c('\xFF'); // Extended ASCII character
    test_c('\x80'); // Non-ASCII character
    test_c('\xa9'); // Unicode character
}