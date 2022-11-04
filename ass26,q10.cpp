//10. Define a class StaticCount and create a static variable. Increment this variable in a
//function and call this 3 times and display the result.
#include<iostream>
using namespace std;

class StaticCount
{
private:
    static int k;
public:
    static void increment()
    {
     k++;
    }
    static void showK()
    {
    cout<<" k = "<<k<<endl;
    }
};
int StaticCount::k;

int main()
{
StaticCount::increment();
StaticCount::increment();
StaticCount::increment();
StaticCount::showK();


return 0;
}
