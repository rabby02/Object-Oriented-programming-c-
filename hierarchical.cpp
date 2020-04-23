#include<bits/stdc++.h>
using namespace std;
class shape
{
protected:
    int h,w;
public:
    void set_data(int a,int b)
    {
        h=a;
        w=b;
    }
};

class rectangle:public shape //rectangle is inherited from shape//
{
public:
    float area()
    {
        return h*w;
    }
};
class triangle: public shape{
public:
    float area()
    {
        return (h*w)/2;
    }



};
int main()
{
    rectangle obj1;
    triangle obj2;
    obj1.set_data(5,6);
    obj2.set_data(5,7);
    cout<<obj1.area()<<endl;
    cout<<obj2.area()<<endl;
    return 0;
}
