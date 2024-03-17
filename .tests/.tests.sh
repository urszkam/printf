NAME=tests_printf
FT_NAME=tests_ft_printf
CC=gcc
CFLAGS="-Wall -Wextra -Werror"
YELLOW='\033[0;33m'
NC='\033[0m'

print_test_name()
{
    echo -e "${YELLOW}Testing %${1} specifier:\n${NC}"
}


run_tests()
{
    $CC $CFLAGS -o $FT_NAME ${1}_ft_printf.c -L.. -lftprintf -I../
    $CC $CFLAGS -o $NAME ${1}_printf.c
    ./$FT_NAME | diff -u - <(./$NAME)
    sleep 1
}

SPECIFIERS=("c" "s" "d" "i" "x" "X" "u")

for spec in "${SPECIFIERS[@]}"
do
    print_test_name "$spec"
    run_tests "$spec"
done

# print_test_name p
# run_tests p