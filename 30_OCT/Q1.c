#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	int rollno;
	float marks;
	
};

int main(){
	struct student s1={"Rupashree",54,84.5};
	struct student s2,s3;
	

	//for accessing we will use dot opertor
	strcpy(s2.name,"ayushi");
	s2.rollno=49;
	s2.marks=81.94;
	
	// accessing using pointer 
	
	struct student *ptr=&s2;
        printf("Name:%s\n",(*ptr).name);
        printf("RollNo:%d\n",(*ptr).rollno);
        printf("Marks:%f\n",(*ptr).marks);
	return 0;
}