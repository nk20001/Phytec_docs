#include<stdio.h>
#include"header.h"

int main()
{

int choice;

do{
printf("\n\n Welcome to Election/Voting 2023");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");
printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
     
     case 1: 
            castVote(&votes1,&votes2,&votes3,&votes4);
            printf("%d",votes1);
            break;
     case 2: 
            votesC(&votes1,&votes2,&votes3,&votes4);
            break;
     case 3: 
            LeadingCandidate(&votes1,&votes2,&votes3,&votes4);
            break;
     default: 
            printf("\n Error: Invalid Choice");
}
}while(choice!=0);





return 0;
}