#include <stdio.h>
#include "../include/main.h"

int main() {
    print_hi("Clion");
    return 0;
}

void print_hi(const char name[]) {
    printf("Hi, %s", name);
}