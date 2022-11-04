//6. Define a class student and write a program to enter student details using constructor
//and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    int rollno;
    char name[20];
    int age;
public:
    Student(int r,char s[] ,int a)
    {
     rollno=r;
     strcpy(name,s);
     age=a;
    }
    void showStudent()
    {
     cout<<" rollno = "<<rollno<<" name = "<<name<<" age = "<<age<<endl;
    }
};
int main()
{
cout<<"enter the student name"<<endl;
char name[20];
cin.getline(name,20);
Student s1(1,name,22);
s1.showStudent();

return 0;
}
