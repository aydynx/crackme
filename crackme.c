#include <stdio.h>
#include <string.h>

int main(void) {
    char password[10];

    printf("password: ");
    scanf("%s", password);
    if (strcmp(password, "crackme") == 0) {
        printf("success!\n");
    } else {
        printf("fail.\n");
    }
    return 0;
}