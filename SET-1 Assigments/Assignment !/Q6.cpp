#include <iostream>
using  namespace std;
class Student{
    private:
   string name;
   int roll; float marks;
   public:
void setStudentData(){

     cin>>name>>roll>>marks;
}
void getStudentData(){

   cout<<"NAME : "<<name<<endl;
   cout<<"ROLL NUMBER : "<<roll<<endl;
   cout<<"MARKS : "<<marks<<endl;

}
};
int main()
{
    int i;
    Student s[3];
    for(i=0;i<3;i++)
    {
        cout<<"Enter name roll number and marks of student "<<i+1<<endl;
        s[i].setStudentData();
    }
    for(i=0;i<3;i++)
    {
        s[i].getStudentData();
    }
    return 0;

}
