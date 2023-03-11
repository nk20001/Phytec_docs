#include<stdio.h>
#include<string.h>
#include"header.h"





int LeadingCandidate(int *votes1,int *votes2,int *votes3,int *votes4){
    printf("\n\n  Leading Candidate \n\n");
    if(*votes1>*votes2 && *votes1>*votes3 && *votes1 >*votes4)
    printf("[%s]",candidate1);
    else if (*votes2>*votes3 && *votes2>*votes4 && *votes2 >*votes1)
    printf("[%s]",candidate2);
    else if(*votes3>*votes4 && *votes3>*votes2 && *votes3 >*votes1)
    printf("3[%s]",candidate3);
    else if(*votes4>*votes1 && *votes4>*votes2 && *votes4 >*votes3)
    printf("[%s]",candidate4);
    else
    printf("Warning !!! No-win situation");    
    
    
    
}