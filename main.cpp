#include <iostream>

using namespace std;

int main()
{

    cout << "Hello OngHuy!" << endl;
    int integer_number;
    float decimal_number;
    cout <<"please enter your integer number :";
    cin  >> integer_number;
    cout <<"please enter your decimal number :";
    cin  >> decimal_number;
    float devision = integer_number / decimal_number;
    cout << "your result is =" <<integer_number<<" / "<<decimal_number<<" ="<<devision;
    cin.ignore(2);
    return 0;
}
