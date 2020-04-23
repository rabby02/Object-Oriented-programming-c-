#include<bits/stdc++.h>
using namespace std;
class cars{
private:
    string car_name;
    string car_company;
    string car_fuel;
    float car_serial;
    int car_price;
public:
    cars()
    {
        cout<<"Default constructor is called"<<endl;
    }
    cars(string cname, string company_car,string fuel_car,float serial_car,int x)
    {
        cout<<"parameterized constructor is called"<<endl;
        car_name=cname;
        car_company=company_car;
        car_fuel=fuel_car;
        car_serial=serial_car;
        car_price=x;

    }
    cars(cars &obj)
    {
        cout<<"copy constructor is called"<<endl;
        car_name=obj.car_name;
        car_company=obj.car_company;
        car_fuel=obj.car_fuel;



    }

    void setData(string company_car,string fuel_car,float serial_car,int x)
    {
        car_company=company_car;
        car_fuel=fuel_car;
        car_serial=serial_car;
        car_price=x;

    }
    void display()
    {
        cout<<"Car name"<<":"<<car_name<<endl;
        cout<<"Company name"<<":"<<car_company<<endl;
        cout<<"Type of fuel"<<":"<<car_fuel<<endl;
        cout<<"No. of fuel"<<":"<<car_serial<<endl;
        cout<<"Serial number"<<":"<<car_price<<endl<<endl<<endl;
    }



};
int main()
{
    cars c1,c2("Mahindra","diesel",1015.00,120);
    c1.setData("Mahindra","diesel",1015.00,120);
    c1.display();

    c2.display();
}
