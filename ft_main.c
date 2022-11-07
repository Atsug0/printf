#include<stdio.h>
#include<limits.h>
#include "libftpf.h"

int main(void) {
    int f = printf("%u", -123456);
    printf("\n");
    int s = ft_print_u(-123456);
}