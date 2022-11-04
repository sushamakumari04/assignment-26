//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;

class Cube
{
private:
    int l,b,h,v;
public:
    Cube()
    {
     l=0;
     b=0;
     h=0;
     v=0;
    }
    void setDimension(int length,int breadth,int height)
    {
     l=length;
     b=breadth;
     h=height;
    }
    void showCube()
    {
     cout<<" l= "<<l<<" b= "<<b<<" h= "<<h<<endl;
    }
     void Volume()
    {
      v=l*b*h;
    }
    void showVolume()
    {
     cout<<"the volume of cube is ="<<v<<endl;
    }
};
int main()
{
Cube c1,c2,c3;
c1.setDimension(1,2,3);
//c2.setDimension(5,6,7);
c1.Volume();
c1.showVolume();


return 0;
}
