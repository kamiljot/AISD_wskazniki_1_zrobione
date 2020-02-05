#include <stdio.h>
#define _LENGTH 100000U

int main() {
    char* string = new char[_LENGTH];
    char* endOfString;
    char* ptr;

    endOfString = &string[_LENGTH - 1];

    fgets(string, _LENGTH, stdin);

    ptr = string;

    while (*ptr != '\n') {
        printf("%c", *ptr);
        while (ptr < endOfString - 1){
            if (*(ptr + 1) == '\n' || *(ptr + 2) == '\n'){
                ptr = endOfString;
            } else {
                ptr += 2;
                printf("%c", *ptr);
            }
        }
        printf("\n");
        fgets(string, _LENGTH, stdin);
        ptr = string;
    }
    delete[] string;
    return 0;
}