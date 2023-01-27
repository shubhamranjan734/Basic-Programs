#include <stdio.h>
int main()
{
    int marks[5],i,max,myindex;
    char name[5][10];

    
    for ( i = 0; i < 5; i++)
    {
        printf("Enter  Name of student %d  ",i+1);
        scanf("%s[^\n]",name[i]);
        printf("Enter  marks of student %d  ",i+1); 
        scanf("%d",&marks[i]);
    }
     max=marks[0];
     for ( i = 0; i < 5; i++)
     {
        if (marks[i]>max)
        {
            max=marks[i];
            myindex=i;
        }
        
     }
     printf("Maximum marks is obtained by ");
     puts(name[myindex]);
     printf("and is %d",marks[myindex]);
    return 0;
}
