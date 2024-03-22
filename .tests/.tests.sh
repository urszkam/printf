NAME=tests_printf
FT_NAME=tests_ft_printf
# HEADER=ft_printf.h
# HEADER_DIR="../"
CC=gcc
CFLAGS="-Wall -Wextra -Werror"
YELLOW='\033[0;33m'
GREEN="\e[0;32m"
RED="\e[0;31m"
NC='\033[0m'

print_test_name()
{
    echo -e "${YELLOW}Testing %${1} specifier:${NC}"
    sleep 0.5
}


run_tests()
{
    $CC $CFLAGS -o $FT_NAME .${1}_ft_printf.c -L.. -lftprintf -I../
    $CC $CFLAGS -o $NAME .${1}_printf.c
    output=$(./$FT_NAME | tr -d '\000')
    expected=$(./$NAME | tr -d '\000')

    # Create arrays from the output lines
    IFS=$'\n' read -r -d '' -a output_lines <<< "$output"
    IFS=$'\n' read -r -d '' -a expected_lines <<< "$expected"

    # Compare line by line and print [OK] or [KO] accordingly
    for (( i = 0; i < ${#output_lines[@]}; i++ )); do
        if [ "${output_lines[i]}" = "${expected_lines[i]}" ]; then
            echo -ne "${GREEN}[OK]"
        else
            echo -ne "${RED}[KO]"
        fi
            echo -e "${NC}: Output: ${output_lines[i]}, Expected: ${expected_lines[i]}."
            sleep 0.5
    done
    rm $FT_NAME $NAME &
    sleep 0.5
}

compare_lines() {
    # Read lines from the file
    file=$1
    line_number=$2
    line1=$(sed -n "${line_number}p" "$file")

    compare_line_number=$((line_number + 4))
    line2=$(sed -n "${compare_line_number}p" "$file")

    if [ "$line1" == "$line2" ]; then
        echo -ne "${GREEN}[OK]"
    else
        echo -ne "${RED}[KO]"
    fi
    echo -e "${NC}: Output: ${line1}, Expected: ${line2}."
    sleep 0.5
}

check_pointers() {
$CC $CFLAGS -o $FT_NAME .p_ft_printf.c -L.. -lftprintf -I../
export MY_POINTER="some_value"
export MY_POINTER2=22
file="output.txt"
./$FT_NAME | tr -d '\000' > $file
rm $FT_NAME
unset MY_POINTER
unset MY_POINTER2
num_lines=$(wc -l < "$file")

for ((i = 1; i <= num_lines / 2; i++)); do
    compare_lines "$file" "$i"
done

rm $file
}

SPECIFIERS=("c" "s" "d" "x" "X" "u" "%")

for spec in "${SPECIFIERS[@]}"
do
    print_test_name "$spec"
    run_tests "$spec"
done
print_test_name "p"
check_pointers

print_test_name "ALL"
run_tests "all"