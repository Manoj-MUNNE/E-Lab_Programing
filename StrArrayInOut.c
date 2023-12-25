#include<stdio.h>
#include<string.h>
typedef struct cricketer
{
    char name[15];
    int age;
    int matches;
    float average;
}cricketer;

int main()
{
    cricketer arr[3];

    for(int i=0; i<3; i++)
    {
        scanf("%s",arr[i].name);
        scanf(" %d",&arr[i].age);
        scanf("%d",&arr[i].matches);
        scanf(" %f",&arr[i].average);
    }

     for(int i=0; i<3; i++)
    {
        printf("Name : %s\n",arr[i].name);
        printf("Age  : %d\n",arr[i].age);
        printf("matches : %d\n",arr[i].matches);
        printf("Average : %f\n",arr[i].average);
        printf("\n \n");
    }
    return 0;
}