// structure with array

	#include<stdio.h>
	#include<string.h>
	typedef struct student
	{
		char name[20];
		int rollno;
		char sub;
		int marks;
		char grade;
	}student;
	int main()
	{
		student arr[3];
		
		for(int i=0; i<3; i++)
		{
			printf("Enter Name, RollNo, Sub,Marks, Grade: ");
			scanf("%s",arr[i].name);
			scanf("%d",arr[i].rollno);
			scanf("%s",arr[i].sub);
			scanf("%d",arr[i].marks);
			fflush(stdin);
			scanf("%c",arr[i].grade);
		}
		
		for(int i=0; i<3; i++)
		{
			
			printf("Name:%s\n",arr[i].name);
			printf("RollNo:%d\n",arr[i].rollno);
			printf("Sub:%s\n",arr[i].sub);
			printf("Marks:%d\n",arr[i].marks);
			printf("Grade:%c\n",arr[i].grade);
		}
		return 0;
	}