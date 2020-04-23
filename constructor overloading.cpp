#include<bits/stdc++.h>
using namespace std;
class construct
{
public:
    float area;

    construct()
    {
        area=0;
    }
    construct(double a,double b)
    {
        area=a*b;
    }
    void displaY()
    {
        cout<<area<<endl;
    }
};
int main()
{
    construct o;
    construct o2(5.0,10.0);
    o.displaY();
    o2.displaY();
    return 0;

}
