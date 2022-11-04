//5. Define a class Date and write a program to Display Date and initialise date object
//using Constructors.
#include<iostream>
using namespace std;

class Date
{
private:
    int dd,mm,yyyy;
public:
    Date()
    {
     dd=0;
     mm=0;
     yyyy=0;
    }
    void setDate(int day,int month,int year)
    {
     dd=day;
     mm=month;
     yyyy=year;
    }
    void showDate()
    {
     cout<<" day = "<<dd<<" month = "<<mm<<" year = "<<yyyy<<endl;
    }
};
int main()
{
Date d1,d2,d3;
d1.setDate(02,03,2121);
d1.showDate();

return 0;
}
