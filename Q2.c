//Develope a program using structure to print data of three student having data members name ,class,percentage
#include <stdio.h>
struct student
{
    char name [20];
    char c [20];
    int per ;
}   s[3];
void main () 
    {
    int i ;
    for(i=0;i<3;i++)
    {
        printf("enter name ,class,percentage");
        scanf("%s%s%s%d",&s[i].name,&s[i].c,&s[i].per);
    }
    for(i=0;i<3;i++)
    {
        printf("%s %s %d \n",s[i].name,s[i].c,s[i].per);
    }
}
