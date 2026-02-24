#include <stdio.h>
#include <string.h>

void echo(char *txt) {
    printf("%s\n", txt);
}

int main() {
    printf("Welcome To EchoX!\n");
    char command[1000];
    while (1) {
        printf("> ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0;
        if (strncmp(command, "echo ", 5) == 0) {
            echo(command + 5);
        } else if (strcmp(command, "exit") == 0) {
            break;
        }
    }
    return 0;
}
