
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int my_strlen(const char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void reverse_string(char *str) {
    char *p1, *p2, temp;
    int size = my_strlen(str);

    for (p1 = str, p2 = str + (size - 1); p1 < p2; p1++, p2--) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}
int main(void) {
char test1[] = "edoc fo esuoH oT emocleW";
 char test2[] = "uoy pleh lliw ti ;3 melborp ni noitcnuf siht esU";
 char test3[] = "Hello World";
 char test4[] = "G";
 printf("Before: %s\n", test1);
 reverse_string(test1);
 printf("After: %s\n\n", test1);
 printf("Before: %s\n", test2);
 reverse_string(test2);
 printf("After: %s\n\n", test2);
 printf("Before: %s\n", test3);
 reverse_string(test3);
 printf("After: %s\n\n", test3);
 printf("Before: %s\n", test4);
 reverse_string(test4);
 printf("After: %s\n\n", test4);;

    return 0;
}

