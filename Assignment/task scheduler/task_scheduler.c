#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DESC_LEN 256

int global_id = 1; //track unique IDs for all tasks

struct Task {

    int id;
    char description[MAX_DESC_LEN + 1]; // accounted for null terminator
    int complete;

};

FILE *open_task_file () {

    FILE *fp = fopen("tasks.txt", "r+");

    if (fp == NULL) {

        fp = fopen("tasks.txt", "w"); //creates the file if it doesn't exist already

        if (fp == NULL) {

            printf("Error opening file\n");

            exit(1);

        }
    }

    return fp;

}

void close_task_file (FILE *fp) {

    fclose(fp);

}

void add_task (FILE *fp) {

    char desc[MAX_DESC_LEN + 1];
    printf("Enter task description: ");
    fgets(desc, MAX_DESC_LEN + 1, stdin);

    //remove trailing newline from description
    desc[strcspn(desc, "\n")] = '\0';

    struct Task task = {global_id++, desc, 0};
    strcpy(task.description, desc);

    //write task to file
    fseek(fp, 0, SEEK_END); //move to file end to append new task
    fwrite(&task, sizeof(struct Task), 1, fp);

    printf("Task added successfully!\n");
}

void display_tasks(FILE *fp) {

    fseek(fp, 0, SEEK_SET); //move to the start of the file
    struct Task task;

    printf("\nTasks:\n");

    while(fread(&task, sizeof(struct Task), 1, fp) == 1) {

        printf("%d. %s (%s)\n", task.id, task.description, task.complete ? "Completed" : "Pending");

    }

    if (feof(fp)) {//checks for end of file
        printf("No tasks found.\n");
    }
}

void mark_task_complete(FILE *fp) {
    int task_id, found = 0;
    struct Task task, temp_task; //temporary task for potential rewrite

    printf("Enter task ID to mark complete: ");
    scanf("%d", &task_id);

    fseek(fp, 0, SEEK_SET);
    while(fread(&task, sizeof(struct Task), 1, fp) == 1) {

        if (task.id == task_id) {

            found = 1;

            task.complete = 1; //mark complete

            //rewrite the structure to file
            fseek(fp, -sizeof(struct Task), SEEK_CUR); //move back one task size
            fwrite(&task, sizeof(struct Task), 1, fp);

            printf("Task marked complete!\n");
            break;
        }
    }

    if (!found) {
        printf("No task with ID %d exists.\n", task_id);
    }
}

void delete_completed_tasks(FILE *fp) {

    FILE *temp_fp;

    temp_fp = fopen("temp_tasks.txt", "w");

    if (!temp_fp) {
        printf("Error creating temporary file\n");
        return;
    }

    struct Task task;
    fseek(fp, 0, SEEK_SET);

    while (fread(&task, sizeof(struct Task), 1, fp) == 1) {

        if (!task.complete) {

            fwrite(&task, sizeof(struct Task), 1, temp_fp); //write non_completed tasks to the temporary file

        }
    }

    if (feof(fp)) {//check for end of file
        printf("No tasks deleted, all tasks already completed.\n");
    }

    //replace the original file with the temporary file
    remove("tasks.txt");//delete original
    rename("temp_tasks.txt", "tasks.txt");

    //reopen task file pointer after replacement
    fp = open_task_file();

    printf("Deleted tasks successfully.\n");
}

int main() {
    FILE *fp = open_task_file();

    int choice;

    while(1) {

        printf("\nTask Scheduler\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Mark Task Complete\n");
        printf("4. Delete Completed Tasks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add_task(fp);
                break;

            case 2:
                display_tasks(fp);
                break;
            
            case 3:
                mark_task_complete(fp);
                break;
            
            case 4:
                delete_completed_tasks(fp);
                break;
            
            case 5:
                close_task_file(fp);
                printf("Exiting...\n");
                exit(0);
            
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}