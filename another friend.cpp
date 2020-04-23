#include<bits/stdc++.h>
using namespace std;
class swax
{
private:
    int a;
    int b;
    int temp;
public:
    swax(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"After swapping"<<" "<<a<<" "<<b<<endl;
    }

    friend void sWapping(swax&);
};
void sWapping(swax& x)
{
    x.temp=x.a;
    x.a=x.b;
    x.b=x.temp;

}
int main()
{
    swax t(7,8);
    sWapping(t);
    t.display();

}
