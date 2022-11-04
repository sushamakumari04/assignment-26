/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/

#include<iostream>
using namespace std;

class Bank
{
private:
    int principal;
    int time;
    static int roi;
    float interest;
public:
    Bank()
    {
     principal=0;
     time=0;
     interest=0;
    }
    void setPrincipal(int p)
    {
      principal=p;
    }
    void showPrincipal()
    {
      cout<<" principal amount is = "<<principal<<endl;
    }
     void setTime(int t)
    {
      time=t;
    }
    void showTime()
    {
      cout<<" time is = "<<time<<endl;
    }
     static void setRateOfInterest(int r)
    {
      roi=r;
    }
     static showRateOfInterest()
     {
      cout<<" rate of interest = "<<roi<<endl;
     }
     void CalInterest()
     {
      interest =(principal*roi*time)/100;
     }
     void showInterest()
     {
      cout<<" the interest is "<<interest<<endl;
     }
};
int Bank::roi;
int main()
{
Bank b1;
b1.setPrincipal(1000);
b1.setTime(2);
b1.setRateOfInterest(3);
b1.CalInterest();
b1.showInterest();
Bank::setRateOfInterest(3);
//Bank::showRateOfInterest();

return 0;
}
