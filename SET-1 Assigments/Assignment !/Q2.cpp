#include <iostream>
using namespace std;
int main()
{
    cout<< "next line is used here\n";
    cout<< "End line is used after this"<<endl;
    cout<< "Tab \t is used here"<<endl;
    cout<< "\a alarm sound here\n";
    cout<< "hellohello\r"<<"world"; //the first hello will be overwritten by world
    return 0;
}
