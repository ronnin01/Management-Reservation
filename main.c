#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


struct user{
    char Name[100];
    char Username[100];
    char Password[100];
}user;

int main(){
    //mau ni siyay silbe front
    printf("\t\t\t---------------Hotel Reservation Management System---------------\n");
    printf("\n\t\t\t\t---------------\t\t---------------");
    printf("\n\t\t\t\t| Book a Room 1 |\t|    exit 2    |");
    printf("\n\t\t\t\t---------------\t\t---------------\n");

    //switch sa 1 or 2 sa mo book ba or dili
    int choice;
    printf("\n Enter a number to continue: ");
    scanf("%d",&choice);
    while(isalpha(choice)!=0){
        printf("\n Enter a number to continue: ");
        scanf("%d",&choice);
        break;
    }

    switch(choice){
    case 1:
        add_account();
        break;
    case 2:
        exit(1);
        break;
    }
}
void add_account(){
    FILE *fprecords = fopen("Records.csv","wb+");
    if(fprecords == NULL){
        printf("Error to open file!\n");
        exit(1);
    }else{

    }

    fclose(fprecords);
}
