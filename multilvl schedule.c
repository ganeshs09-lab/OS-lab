#include <stdio.h>

int main() {
    int n, i;


    int sys_n;
    printf("Enter number of system processes: ");
    scanf("%d", &sys_n);

    int sys_bt[100];
    printf("Enter burst times for system processes:\n");
    for(i = 0; i < sys_n; i++) {
        scanf("%d", &sys_bt[i]);
    }


    int user_n;
    printf("Enter number of user processes: ");
    scanf("%d", &user_n);

    int user_bt[100];
    printf("Enter burst times for user processes:\n");
    for(i = 0; i < user_n; i++) {
        scanf("%d", &user_bt[i]);
    }

    int time = 0;

    printf("\nExecution Order:\n");


    for(i = 0; i < sys_n; i++) {
        printf("System Process %d: %d -> %d\n", i+1, time, time + sys_bt[i]);
        time += sys_bt[i];
    }


    for(i = 0; i < user_n; i++) {
        printf("User Process %d: %d -> %d\n", i+1, time, time + user_bt[i]);
        time += user_bt[i];
    }

    return 0;
}
