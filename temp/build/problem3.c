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

void reverse_words(char str[]) {
    char *start = str, *end = str, *p;
    int size = my_strlen(str);

    reverse_string(str);

    while (*start != '\0') {
        while (*start == ' ') {
            start++;
        }
        end = start;
        while (*end != '\0' && *end != ' ') {
            end++;
        }
        char *p1, *p2, temp;
        for (p2 = end - 1, p1 = start; p1 < p2; p1++, p2--) {
            temp = *p1;
            *p1 = *p2;
            *p2 = temp;
        }
        start = end;
    }
}



int main(void) {
   char test1[] = "The dragons are coming";
 char test2[] = "code love I";
 char test3[] = "G";
 printf("Before: %s\n", test1);
 reverse_words(test1);
 printf("After: %s\n\n", test1);
 printf("Before: %s\n", test2);
 reverse_words(test2);
 printf("After: %s\n\n", test2);
 printf("Before: %s\n", test3);
 reverse_words(test3);
 printf("After: %s\n\n", test3);

    return 0;
}

