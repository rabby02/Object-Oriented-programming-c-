#include <iostream>

using namespace std;

class Swap {

    // Declare the variable of Swap Class
    int num;

public:

    // Define the parametrized constructor, for input.
    Swap(int num)
    {
        this->num = num;
    }

    // Declare the friend function to swap, take arguments
    // as call by reference
    friend void swap(Swap&, Swap&);
};

// Define the swap function outside class scope
void swap(Swap& s1, Swap& s2)
{
    // declare a temporary variable.
    int temp;
    // Call by reference is used to passed object copy to
    // the function
    cout << "\nBefore Swapping: " << s1.num << " " << s2.num;

    // Swap operations with objects of class Swap
    temp = s1.num;
    s1.num = s2.num;
    s2.num = temp;
    cout << "\nAfter Swapping: " << s1.num << " " << s2.num;
}

// Driver Code
int main()
{
    // Declare and Initialize the objects of Swap class
    Swap s1(6), s2(10);
    swap(s1,s2);
    return 0;
}
