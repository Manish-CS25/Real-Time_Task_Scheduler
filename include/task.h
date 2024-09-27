#ifndef TASK_H
#define TASK_H

typedef struct Task {
    int id;
    char Task_name[30];

    int priority;
    int execution_time;
    int remaining_time;
    int is_completed;

} Task;

Task* create_task(int id, char* Task_name, int priority, int execution_time);
void execute_task(Task* task);
void print_task(Task* task);    

#endif