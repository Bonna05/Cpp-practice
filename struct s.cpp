#include<iostream>
using namespace std;
struct Student
{
         int age;
         string frist_name;
         string last_name;
         int standard;

};
int main()
{
                Student s;
                cin>>s.age;
                cin>>s.frist_name;
                cin>>s.last_name;
                cin>>s.standard;

                cout<<s.age<<" "<<s.frist_name<<" "<<s.last_name<<" "<<s.standard;
                return 0;
}
