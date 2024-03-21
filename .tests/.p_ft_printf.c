#include <stdio.h>
#include "./ft_printf.h"

void test_p(void *p)
{
    ft_printf("%%p: %p\n", p);
    printf("%%p: %p\n", p);
}

int main(void)
{
    void *ptr = getenv("MY_POINTER");
    void *ptr2 = getenv("MY_POINTER2");

    test_p(NULL);                   // null
    test_p((void *)0x7ffd2544bc18); // actual memory address
    test_p(ptr);                    // string environmental variable
    test_p(ptr2);                   // int environmental variable
}