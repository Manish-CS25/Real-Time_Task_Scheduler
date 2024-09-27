#include<stdio.h>
#include<Schedular.h>

//round robin task scheduler with prority

void run_scheduler(Task* tasks , int num_tasks , int time_slice){
    int completed_tasks = 0;

    int current_time_slice = 0;

    while(completed_tasks < num_tasks){
        for(int i = 0; i < num_tasks; i++){
              // Skip task if it's already completed
            if (tasks[i].is_completed) {
                continue;
            }

            // Execute only if the task is not yet completed
            printf("Executing Task: %s\n", tasks[i].Task_name);

            // Execute the task for one time slice
            if (tasks[i].remaining_time > 0) {
                tasks[i].remaining_time--;
            }

            // Mark the task as completed if its remaining time is zero
            if (tasks[i].remaining_time == 0) {
                tasks[i].is_completed = 1;
                completed_tasks++;
                printf("Task %s Completed\n", tasks[i].Task_name);
            }

            // Switch task after time_slice
            current_time_slice++;
            if (current_time_slice == time_slice) {
                current_time_slice = 0;
            }
                
                    
            }
        
        }

    

    printf("All tasks completed\n");

}
