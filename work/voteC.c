#include<stdio.h>
#include<string.h>
#include"header.h"



int votesC(int *votes1,int *votes2,int *votes3,int *votes4){
printf("\n\n Voting Statics ");
printf("\n %s - %d ", candidate1, *votes1);
printf("\n %s - %d ", candidate2, *votes2);
printf("\n %s - %d ", candidate3, *votes3);
printf("\n %s - %d ", candidate4, *votes4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}