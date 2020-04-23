#include<bits/stdc++.h>
using namespace std;
class geeks{
public:
    int id;
    string name;
    void printname();
    void printid()
    {
        cout<<"geeks id is"<<" "<<id<<endl;
    }


};
void geeks::printname()
{
    cout<<"Geek name is"<<" "<<name;
}
int main()
{
    geeks p;
    p.id=12;
    p.name="GeeksforGeeks";
    p.printid();
    p.printname();
    cout<<endl;
    return 0;

}
