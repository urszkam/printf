#include <stdio.h>

void test_s(const char *s)
{
    printf("%%s: %s\n", s);
}

int main(void)
{
    // Basic strings
    test_s("Hello, world!");
    test_s("12345");

    // String with escape sequences
    test_s("This is a newline\n");
    test_s("This is a tab\\t");

    // Empty string
    test_s("");

    // String with special characters
    test_s("Special characters: !@#$%^&*()_+-=[]{};:,.<>?/");

    // Unicode characters
    test_s("Unicode characters: ☺☃☂☀★");

    // String with null character
    test_s("String with \0 null character");

    return (1);
}