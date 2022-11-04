//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;

class Counter
{
    int Count=0;

public:
    Counter()
    {
      Count++;
    }
    void showCounter()
    {
     cout<<Count<<endl;
    }
};
int main()
{
Counter c1,c2,c3;
c1.showCounter();

}
