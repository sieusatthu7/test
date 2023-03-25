#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Palindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        while (!isalnum(str[i])) {
            i++;
        }
        while (!isalnum(str[j])) {
            j--;
        }
        if (tolower(str[i]) != tolower(str[j])) {
            printf("The string is not a palindrome\n");
            return;
        }
        i++;
        j--;
    }
    printf("The string is a palindrome\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    Palindrome(str);
    return 0;
}
