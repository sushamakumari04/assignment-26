//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;

class Counter
{
private:
     int x,y;
public:
    Counter(int a,int b)
    {
     x=a;
     y=b;
    }
    void showCounter()
    {
     cout<<" x= "<<x<<" y = "<<y<<endl;
    }
};
int main()
{
Counter c1(2,3);
c1.showCounter();
return 0;
}
