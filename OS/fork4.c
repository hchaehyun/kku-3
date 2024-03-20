#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>

int main(void) {
    int pid, status;
    char *arg[] = { "./hello", NULL };
    char ch;

    while (1) {
        pid = fork();

        if (pid > 0) {
            printf("PARENT: Child pid = %d\n", pid);
            waitpid(pid, &status, 0);
            printf("PARENT: Child exited.\n");
        } else {
            printf("CHILD: Child process image will be replaced by %s\n", arg[0]);
            execv(arg[0], arg);
        }
    }

    return 0;
}
