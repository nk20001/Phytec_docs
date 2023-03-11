#include<stdio.h>
#include"header.h"




int *spoiledtvote = &spoiledtvotes;

int castVote(int *votes1,int *votes2,int *votes3,int *votes4){
    
    
    
    
int choice;    
printf("\n\n  Please choose your Candidate \n\n");
printf("\n 1. %s", candidate1);
printf("\n 2. %s", candidate2);
printf("\n 3. %s", candidate3);
printf("\n 4. %s",candidate4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1:  (*votes1)++; break;
    case 2:  (*votes2)++; break;
    case 3:  (*votes3)++; break;
    case 4:  (*votes4)++; break;
    case 5: (*spoiledtvote)++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             
}
printf("\n thanks for vote !!\n");


}

