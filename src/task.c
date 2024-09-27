#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "task.h"

//Create a task

Task* create_task(int id, char* Task_name, int priority, int execution_time) {
    Task* new_task = (Task*)malloc(sizeof(Task));
    new_task->id = id;
    strcpy(new_task->Task_name, Task_name);
    new_task->priority = priority;
    new_task->execution_time = execution_time;
    new_task->remaining_time = execution_time;
    new_task->is_completed = 0;
    return new_task;
}

//Execute a task

void execute_task(Task* task) {
    printf("Executing task %s\n", task->Task_name);
    task->remaining_time--;
    if (task->remaining_time == 0) {
        task->is_completed = 1;
    }
}

//Print a task

void print_task(Task* task) {
    printf("Task ID: %d\n", task->id);
    printf("Task Name: %s\n", task->Task_name);
    printf("Priority: %d\n", task->priority);
    printf("Execution Time: %d\n", task->execution_time);
    printf("Remaining Time: %d\n", task->remaining_time);
    printf("Is Completed: %d\n", task->is_completed);
}