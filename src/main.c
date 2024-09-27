#include<stdio.h>
#include<string.h>

#include "task.h"
#include "Schedular.h"

int main(){
    Task tasks[3];
    tasks[0] = *create_task(1, "Task 1", 1, 5);
    tasks[1] = *create_task(2, "Task 2", 2, 3);
    tasks[2] = *create_task(3, "Task 3", 3, 4);

    int time_slices = 2;


    run_scheduler(tasks, 3, time_slices);

    return 0;
}