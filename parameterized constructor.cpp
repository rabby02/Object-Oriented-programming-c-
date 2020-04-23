#include<bits/stdc++.h>
using namespace std;
class construct
{
private:
    int x;
    int y;
public:
    construct(int x1,int y1)
    {
        x=x1;
        y=y1;

    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    construct c(10,12);
    cout<<c.getX()<<" "<<c.getY()<<endl;
    return 0;

}
