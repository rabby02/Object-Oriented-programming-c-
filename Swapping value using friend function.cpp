#include<bits/stdc++.h>
using namespace std;
class Swap
{
private:
    int a,b,temp;
public:
    Swap(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    friend void sap(Swap&);


};
void sap(Swap& s1)
{
    cout<<"Before swapping the value of"<<" "<<s1.a<<" "<<s1.b<<endl;
    s1.temp=s1.a;
    s1.a=s1.b;
    s1.b=s1.temp;
    cout<<"After Swapping"<<endl;
    cout<<s1.a<<" "<<s1.b<<endl;


}
int main()
{
    Swap s2(5,6);
    sap(s2);


}
