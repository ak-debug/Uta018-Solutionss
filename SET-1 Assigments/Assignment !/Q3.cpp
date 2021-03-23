#include <iostream>
using namespace std;
namespace a
{
    string  name="Inside Namespace a";

}
namespace b
{
    string name="Inside Namespace b";
}
int main()
{
   cout<<a::name<<endl;
   cout<<b::name<<endl;
   return 0;
}
