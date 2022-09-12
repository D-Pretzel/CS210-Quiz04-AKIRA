/** quiz04-02.c
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
    char name[MAX];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name, %s, is %li characters long and starts with the letter %c\n", name, strnlen(name, MAX), name[0]);


    return 0;
}