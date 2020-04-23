#include<bits/stdc++.h>
#include<string>
using namespace std;
class cars
{
private:
    string car_name;
    string company_name;
    string fuel_type;
    float fuel_no;
    float car_serial;
public:
    cars() //parameterized constructor//
    {
        car_name="Toyota";
        company_name="Tata";
        fuel_type="Diesel";
        fuel_no=1012.00;
        car_serial=254.09;
    }

    void displayData()
    {
        cout<<"Car name"<<":"<<car_name<<endl;
        cout<<"Company name"<<":"<<company_name<<endl;
        cout<<"Type of fuel"<<":"<<fuel_type<<endl;
        cout<<"No. of fuel"<<":"<<fuel_no<<endl;
        cout<<"Serial number"<<":"<<car_serial<<endl;
    }
};
int main()
{
    cars car1;
    car1.displayData();

}
