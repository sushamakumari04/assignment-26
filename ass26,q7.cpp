//7. Define a class Box and write a program to enter length, breadth and height and
//initialise objects using constructor also define member functions to calculate volume
//of the box.
#include<iostream>
using namespace std;

class Box
{
private:
    int length,breadth,height,vol;
public:
    Box(int x,int y,int z)
    {
     length=x;
     breadth=y;
     height=z;
    }
    void calVol()
    {
     vol=length*breadth*height;
    }
    void showVol()
    {
    cout<<"the volume is "<<vol<<endl;
    }
};
int main()
{
Box b1(1,2,3);
b1.calVol();
b1.showVol();

return 0;
}
