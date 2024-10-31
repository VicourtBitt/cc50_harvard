#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char list[2];

    for (int i = 1; i < 2; i++) {
        char curr[50];
        printf("Player %i", i);
        scanf("%c", &curr);
        list[i] = curr;
    }
}