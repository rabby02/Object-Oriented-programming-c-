#include<bits/stdc++.h>
using namespace std;
class average
{
private:
    int a,b,c;
public:
    int avg_comp(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        int t=(a+b+c)/3;
        cout<<"Average is"<<" "<<t<<endl;
    }
};
int main()
{
    average obj;
    obj.avg_comp(2,4,6);
    return 0;

}
