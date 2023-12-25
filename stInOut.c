#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int rollno;
        char sub[5];
        float marks;
    };

    struct student s1;
    printf("Enter Student Name : ");
    scanf("%s",&s1.name);
    printf("\nEnter student rollno : ");
    scanf("%d",&s1.rollno);
    printf("\nEnter subject of student : ");
    scanf("%s",&s1.sub);
    printf("\nEnter marks : ");
    scanf("%f",&s1.marks);
    printf("\nname=%s",s1.name); 
    printf("\nrollno=%d",s1.rollno);
    printf("\n subject=%s",s1.sub);
    printf("\n marks=%f",s1.marks);
    return 0;
}