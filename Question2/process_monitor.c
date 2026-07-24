#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    pid_t child1, child2;
    int status;

    child1 = fork();

    if (child1 == 0) {
        printf("Child 1 (PID: %d) is running.\n", getpid());
        sleep(2);
        printf("Child 1 finished.\n");
        exit(0);
    }

    child2 = fork();

    if (child2 == 0) {
        printf("Child 2 (PID: %d) is running.\n", getpid());
        sleep(10);
        printf("Child 2 finished.\n");
        exit(0);
    }

    printf("Parent monitoring child processes...\n");

    sleep(3);

    if (kill(child2, 0) == 0) {
        printf("Child 2 is unresponsive. Terminating...\n");
        kill(child2, SIGKILL);
    }

    waitpid(child1, &status, 0);
    waitpid(child2, &status, 0);

    printf("All child processes handled successfully.\n");

    return 0;
}
