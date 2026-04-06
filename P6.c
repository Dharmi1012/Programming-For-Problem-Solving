#include<stdio.h>
#include<string.h>
struct student
{
    char Name[50];
    int rollno;
    float marks;
};

int main()
{
   int n,i;
   printf("\n Enter number of student:- ");
   scanf("%d", &n);

   struct student s[n];
   for(i=0; i<n; i++)
   {
      printf("\n Enter details of students %d:-", i+1);

      printf("\n Enter name: ");
      scanf(" %[^\n]", &s[i].Name);

      printf("\n Enter roll number:- ");
      scanf("%d", &s[i].rollno);

      printf("\n Enter marks:- ");
      scanf("%f", &s[i].marks);
   }

   printf("\n Student Records");
   for(i=0; i<n; i++)
   {
        printf("\n Student:- %d", i+1);
        printf("\n Name:- %s",s[i].Name);
        printf("\n Roll no:- %d",&s[i].rollno);
        printf("\n Marks:- %f",&s[i].marks);
   }

  return 0;
}
