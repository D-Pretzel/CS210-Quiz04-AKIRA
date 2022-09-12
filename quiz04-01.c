/** quiz04-01.c
* ===========================================================
*    Name: David Petzold
* Section: T6/7
* Purpose: Quiz 4
* ===========================================================
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char food[MAX];
    char color[MAX];

    printf("Enter your favorite food: ");
    scanf("%s", food);

    printf("Enter your favorite color: ");
    scanf("%s", color);

    printf("Your favorite food is %s, your favorite color is %s.\n", food, color);

    if (strcmp(food, "pizza") == 0) {
        printf("Your favorite food is pizza.\n");
    } else {
        printf("Your favorite food is not pizza.\n");
    }

    return 0;
}