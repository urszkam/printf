#include <stdio.h>
#include <limits.h>

int main(void)
{
    char *null = NULL;
    printf("%d\n", printf("%s %p\n", null, NULL));
    printf("%d\n", printf("%d %i %c\n", 333333333, -3333, '\t'));
    printf("%d\n", printf("%s %x %u\n", "Hi there!", 666, UINT_MAX));
    printf("%d\n", printf("  %% %X\n", 666));
}