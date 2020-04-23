#include <iostream>
using namespace std;
class TestConstructor{

private:
    int studentId;
    string studentName;

public:
    TestConstructor() /// without parameter constructor
    {
        studentId = 0;
        studentName = "";
    }

    TestConstructor(int id, string name)
    {
        this->studentId = id;
        this->studentName = name;
    }
};
int main()
{
    TestConstructor object(10,"Rabby");
    cout<<object.TestConstructor()<<endl;
}
