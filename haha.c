#include<stdio.h>


int main(void)
{
    printf("What is your group number?\n");
   
    char NumberOfGroupMembers;
    printf("Hmm, let me count how many group members I have\n");
    NumberOfGroupMembers = getchar();
    NumberOfGroupMembers = NumberOfGroupMembers - 1;
    
    printf("Group %d\n", NumberOfGroupMembers - '0');
 };