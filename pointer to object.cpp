#include<bits/stdc++.h>
using namespace std;
class compleXnumber
{
private:
    int real;
    float imaginary;
public:
    compleXnumber()
    {

    }
    compleXnumber(int r,float i)
    {
        real=r;
        imaginary=i;
    }

    void display()
    {
        cout<<real<<" "<<"+"<<imaginary<<"i"<<endl;
    }
    int getRealpart()
    {
        return real;
    }
    float imagipArt()
    {
        return imaginary;
    }
};

compleXnumber addtwocOmplex(compleXnumber n1,compleXnumber n2)
{
    int r;
    float i;
    r = n1.getRealpart()+n2.getRealpart();
    i = n1.imagipArt()+n2.imagipArt();
    compleXnumber temp(r, i);
    return temp;






}
int main()
{
    compleXnumber comp1(5,4),comp2(5,4),comp3;
    comp1.display();
    comp2.display();
    comp3=addtwocOmplex(comp1,comp2);
    comp3.display();
    cout<<"Pointer to object"<<endl<<endl;
    compleXnumber *ptr;
    ptr=&comp3;
    ptr->display();
    cout<<ptr<<endl;

}
