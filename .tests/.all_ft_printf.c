#include "../ft_printf.h"

int main(void)
{
    ft_printf(", len: %d\n", ft_printf("%s is %i years old.", "Anna", 17));
    ft_printf(", len: %d\n", ft_printf("%c%c%c%c%c is %i%%", 'v', 'o', 'd', 'k', 'a', 40));
    ft_printf(", len: %d\n", ft_printf("%s %c is %i in %s table, hex: %x = %X", "Letter", 'M', 'M', "ASCII", 'M', 'M'));
}