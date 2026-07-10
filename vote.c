#include <stdio.h>
int main() {
    int vot, age, c;
    vot = 18;
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("Are you a citizen of this country, type 1 if yes, 0 if no: ");
    scanf("%d", &c);
    if (age >= vot) {
        if (c > 0) {
            printf("You are allowed to vote!");
        } else {
            printf("You are not a citizen of this country!");
        }
    } else {
        printf("You are underage!");
    }
    return 0;
}