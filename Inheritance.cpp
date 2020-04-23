#include<bits/stdc++.h>
using namespace std;
class parent
{
public:
    int idp;

};
//subclass inheriting from base class//

class child: public parent
{
public:
    int idc;
};
int main()
{
    child obj;
    obj.idp=10;
    obj.idc=20;
    cout<<obj.idp<<" "<<obj.idc<<endl; //child class is publicly inherited from parent class//
    return 0;

}
