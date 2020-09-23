#include<iostream>
using namespace std;
class StackUnderflow
{
  public:
      StackUnderflow()
      {
          cout<<"Stack is empty"<<endl;
      }
};
class StackOverflow
{
public:
    StackOverflow()
    {
        cout<<"Stack is full"<<endl;
    }
};
class Stack
{
private:
    int *s;
    int top;
    int size_;
public:
    Stack(int size_);
    void push(int value);
    int pop();
};
Stack::Stack(int size_)
{
    this->size_=size_;
    s=new int[size_];
    top=-1;
}
void Stack::push(int value)
{
    if(top==size_-1)
        throw StackOverflow();
    else
    {
        s[++top]=value;
    }
}
int Stack::pop()
{
    if(top==-1)
        throw StackUnderflow();
    else
        return(s[top--]);
}

int main()
{
    int choice,element;
    Stack s(5);
    do
    {
        cout<<"1.Push 2.Pop 3.Exit"<<endl;
        cin>>choice;
        if(choice==1)
        {
            try
            {
                cout<<"Enter element to push"<<endl;
                cin>>element;
                s.push(element);
            }
            catch(StackOverflow so){};
        }
        else if(choice==2)
        {
            try
            {
                element=s.pop();
                cout<<"Deleted Element is: "<<element<<endl;
            }
            catch(StackUnderflow su){};
        }

    }while(choice!=3);
    return 0;
}
