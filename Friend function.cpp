#include<bits/stdc++.h>
using namespace std;
class distance
{
private:
    int meter;
public:
    distance()
    {
        meter=0;
    }
    void displaydata()
    {
        cout<<"Meter is"<<" "<<meter<<endl;
    }

    friend void addValue(distance &d); //prototype of friend function//
};
void addValue(distance& d) //accessing private data member directly//
{
    d.meter=d.meter+5;
}

int main()
{
    distance d1;
    d1.displaydata();
    addValue(d1);
    d1.displaydata();

}
