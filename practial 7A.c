#include<stdio.h>
void main()
 {
	int rollno[5]; // intger is rollno of students
	int marks [5]; //intger is marks of students
	int i;         
	for(i=0; i<5; i++) 
	{
		// to enter roll no of student
		printf("enter roll number of student %d:",i+1);
		scanf("%d",&rollno[i]);
		//dislay marks of student
		printf("enter marks of student %d:",i+1);
		scanf("%d",&marks[i]);
	}// details of students
	printf("\n---STUDENT DETAILS---\n");
	for(i=0; i<5; i++) 
	{
	printf("Roll Number: %d\tMarks:%d\n",rollno[i],marks[i]);
    }
return 0;
}