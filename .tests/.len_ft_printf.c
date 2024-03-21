#include "../ft_printf.h"
#include <limits.h>

int main(void)
{
    char *null = NULL;
    ft_printf("%d\n", ft_printf("%s %p\n", null, NULL));
    ft_printf("%d\n", ft_printf("%d %i %c\n", 333333333, -3333, '\t'));
    ft_printf("%d\n", ft_printf("%s %x %u\n", "Hi there!", 666, UINT_MAX));
    ft_printf("%d\n", ft_printf("  %% %X\n", 666));
}