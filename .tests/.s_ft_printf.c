#include "../ft_printf.h"

void test_c(char *s)
{
    ft_printf("%%s: %s\n", s);
}

int main(void)
{
    char *null = NULL;
    test_c(null);
    test_c("Hello, world!");        // A normal string
    test_c("");                     // An empty string
    test_c("    ");                 // A string with spaces
    test_c("\t\t\t");               // A string with tabs
    test_c("\x7F\xFF\x80");         // A string with various non-printable characters
    test_c("\x48\x65\x6C\x6C\x6F"); // A string represented by its ASCII values ("Hello")
    test_c("\xC2\xA9");             // A string containing a Unicode character (©)
    test_c("\xE2\x82\xAC");         // A string containing a Euro symbol (€)
    test_c("¡Hola!");               // A string containing non-ASCII characters
}