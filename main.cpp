#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int roll_no;
    string name;
    int maths;
    int physics;
    int chemistry;
    int marks;
public:
    Student(int roll_no,string name,int maths,int physics,int chemistry);
    string get_name();
    int total_marks();
    char grade();
};
Student::Student(int roll_no,string name,int maths,int physics,int chemistry)
{
    this->roll_no=roll_no;
    this->name=name;
    this->maths=maths;
    this->physics=physics;
    this->chemistry=chemistry;
    this->marks=maths+physics+chemistry;
}
string Student::get_name()
{
    return(name);
}
int Student::total_marks()
{
    return(marks);
}
char Student::grade()
{
    float percent=(float)marks/3;
    if(percent>=60)
        return('A');
    else if(percent<60 && percent>=40)
        return('B');
    else
        return('C');
}
int main()
{
    int roll_no,maths,physics,chemistry;
    string name;
    cout<<"Enter Roll_No: "<<endl;
    cin>>roll_no;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter marks of maths,physics,chemistry";
    cin>>maths>>physics>>chemistry;
    Student s(roll_no,name,maths,physics,chemistry);
    cout<<s.get_name()<<endl;
    cout<<s.total_marks()<<endl;
    cout<<s.grade();
}
