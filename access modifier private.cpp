/*#include<bits/stdc++.h>
using namespace std;
class circle
{
private:
    double radius;

public:
    void compute_area(double r)
    {
        radius=r;
        return 3.14*r*r;

    }
};
int main()
{
    circle obj;

    cout<<obj.compute_area(4.0)<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    private:
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
};
int rectangle::area()
{
    return height*width;
}
void rectangle::set(int h,int w)
{
    height=h;
    width=w;
}
int main()
{
    rectangle obj;
    obj.set(5,6);
    cout<<obj.area()<<endl;
    return 0;
}



