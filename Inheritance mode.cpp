/*#include<bits/stdc++.h>
using namespace std;
class vehicle
{
public:
    vehicle()
    {

    }
    void display()
    {
        cout<<"This is a vehicle"<<endl;
    }
};

class B: public vehicle
{

};
int main()
{
  B obj; //creating object of subclass will invoke the constructor of base class//
  obj.display();
}*/
//Mulotiple inheritance//
#include<bits/stdc++.h>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }

};
class fourwheels
{
public:
    fourwheels()
    {
         cout<<"Car have four wheels"<<endl;
    }



};
class car: public vehicle,public fourwheels
{
public:
    car()
    {
          cout<<"This is a car"<<endl;
    }


};
int main()
{
    car obj;



}
