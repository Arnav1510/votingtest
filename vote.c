#include <stdio.h>
#include <string.h>
int main() {
    int age;
    char citi[30], e[30] = "Yes";
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("Are you a citizen of this country: ");
    scanf("%s", citi);
    if (age >= 18) {
        if (citi == e) {
            printf("You are allowed to vote!");
        } else {
            printf("You are not a citizen of this country!");
        }
    } else {
        printf("You are underage!");
    }
    return 0;
}