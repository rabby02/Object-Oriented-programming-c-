#include<bits/stdc++.h>
using namespace std;
class math
{
public:
    int a;
    int b;
    int id;
    string mat;
    int multiplication()
    {
        return a*b;
    }
    int addition()
    {
        return a+b;
    }
    int subtraction()
    {
        return a-b;
    }
    void printname()
    {
        cout<<"Math is always fun"<<" "<<mat;
    }
    void printid();


};
void math::printid()
{
    cout<<"The math id is : "<<" "<<id<<endl;  //inline function//

}
int main()
{
    math obj;
    obj.a=12;
    obj.b=11;
    obj.id=5;
    obj.printid();
    obj.mat="Modular exponentiation";
    obj.printname();
    cout<<endl;
    cout<<obj.multiplication()<<endl;
    cout<<obj.addition()<<endl;
    cout<<obj.subtraction()<<endl;

    return 0;



}
