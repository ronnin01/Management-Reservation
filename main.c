#include <stdio.h>
#include <stdlib.h>

struct user{
   char Username[50];
   char Password[50];
}user;

int main(){
    FILE *frecords=fopen("person_records.csv", "r");

    if(frecords == NULL){
        perror("Unable to open file");
        exit(1);
    }

    char line[500];

    while(fgets(line, sizeof(line), frecords)){
        char *token;

        token = strtok(line,",");

        while(token!=NULL){
            printf("%s ",token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }
}
