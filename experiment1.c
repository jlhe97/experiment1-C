#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    char* name;
    int len_name;
    char* lastname;
    int len_lastname;
    char* major1;
    int len_major1;
    char* major2;
    int len_major2;

} student;

int main(int argc, char* argv[]){

    student* foo_stud = (student*) malloc(sizeof(student));

    char* line = NULL;
    size_t size;
    
    printf("What is your first name? ");

    // first we get the first name
    if (getline(&line, &size, stdin) == -1){ 
        printf("No input\n");
    } else { // correct
        printf("first name: %s\n", line);
        foo_stud->name = line;
        foo_stud->len_name = strlen(line);
        printf("What is your last name? ");
        
        
        if (getline(&line, &size, stdin) == -1){     
            printf("No input\n");
        } else { // correct
            printf("last name: %s\n", line);
            foo_stud->lastname = line;
            foo_stud->len_lastname = strlen(line);
            printf("What is your first major? ");

            
            if (getline(&line, &size, stdin) == -1){     
                printf("No input\n");
            } else { // correct
                printf("first major: %s\n", line);
                foo_stud->major1 = line;
                foo_stud->len_major1 = strlen(line);
                printf("What is your second major? ");
                

                if (getline(&line, &size, stdin) == -1){     
                    printf("No input\n");
                } else { // correct
                    printf("second major %s\n", line);
                    foo_stud->major2 = line;
                    foo_stud->len_major2 = strlen(line);
                    printf("program succesfully finished\n");
                }
            }
        }
    } 


    while(1){
    }

    return 0;
}
