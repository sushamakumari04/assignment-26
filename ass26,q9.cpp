/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/

#include<iostream>
using namespace std;

class Bill
{
private:
    int unit;
    char name[20];
     float ecbill;

public:
    Bill()
    {
     unit=0;
     ecbill=0;
    }
    void inputCustomer()
    {
    cout<<"enter your name "<<endl;
    cin.getline(name,20);
    cout<<"number of units "<<endl;
    cin>>unit;
    }
    void CalculateBill()
    {
     switch(unit<=100)
     {
       case 1:
           ecbill=unit*1.20;
           break;
       case 0:
             switch(unit<=200)
             {
              case 1:
                    ecbill=120+(unit-100)*2;
                    break;
              case 0:
                    ecbill=320+(unit-200)*3;
                    break;
             }
             break;
        }
     }
     void showBill()
     {
      cout<<"total electricity bill is "<<ecbill<<endl;
     }
};
int main()
{
Bill b1;
b1.inputCustomer();
b1.CalculateBill();
b1.showBill();

return 0;
}
