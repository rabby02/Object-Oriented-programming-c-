#include<bits/stdc++.h>
using namespace std;
class create
{
public:
    int id;
    int age;
    void printname();
    int printid()
    {
        cout<<"Geeks id is"<<id<<endl;
    }
};
int main()
{
    create p;
    p.id=12;
    p.age=35;
    p.printname();
    cout<<endl;
    p.printid();
    cout<<p.age<<endl;
    return 0;

}
