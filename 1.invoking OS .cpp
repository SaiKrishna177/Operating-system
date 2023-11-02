#include <stdio.h>
#include <unistd.h>
int main() {
    pid_t pid = getpid();
    pid_t parent_pid = getpid();
    printf("Current Process ID: %d\n", pid);
    printf("Parent Process ID: %d\n", parent_pid);
    return 0;
}
