#include <iostream>
using namespace std;
class Rational
{
private:
    int n;
    int d;
public:
    Rational(int num=0,int deno=0);
    int get_num();
    int get_deno();
    friend Rational operator+(Rational obj1,Rational obj2);
    friend ostream & operator<<(ostream &o,Rational &obj);
};
Rational::Rational(int num,int deno)
{
    n=num;
    d=deno;
}
int Rational::get_num()
{
    return(n);
}
int Rational::get_deno()
{
    return(d);
}
Rational operator+(Rational obj1,Rational obj2)
{
    Rational temp;
    temp.n=(obj1.n*obj2.d)+(obj2.n*obj1.d);
    temp.d=obj1.d*obj2.d;
    return temp;
}
ostream & operator<<(ostream &o,Rational &obj)
{
    o<<obj.get_num()<<"/"<<obj.get_deno();
    return(o);
}
int main()
{
    int nu,de;
    cout<<"Enter numerator and denominator of 1st number"<<endl;
    cin>>nu>>de;
    Rational r1(nu,de);
    cout<<"Enter numerator and denominator of 2nd number"<<endl;
    cin>>nu>>de;
    Rational r2(nu,de);
    Rational r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1.get_num()<<"/"<<r1.get_deno()<<" and "<<r2.get_num()<<"/"<<r2.get_deno()<<":";
    cout<<r3;
    return 0;
}
