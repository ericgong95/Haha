#include<cs50.h>
#include<stdio.h>

int main(void)
{
    printf("Hmmm, what is my group name again?\n");
    
    printf("Let me count how many group memebers I have...\n");
    
    printf("Enter the number of group members you have\n");
    int x = GetInt();
    
    printf("I am in Group %i\n", x - 1);
}