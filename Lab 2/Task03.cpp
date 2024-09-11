#include<iostream>
using namespace std;
struct fraction{
    int numerator;
    int denominator;
};
int main(){

    char ch;
    fraction n1,n2,result;
    cout<<"enter the first fractional number:";
    cin>>n1.numerator>>ch>>n1.denominator;
    cout<<"enter the second fractional number:";
    cin>>n2.numerator>>ch>>n2.denominator;
    result.numerator=n1.numerator*n2.denominator+n2.numerator*n1.denominator;
    result.denominator=n1.denominator*n2.denominator;
    cout<<"the result is:"<<result.numerator<<ch<<result.denominator;



return 0;
}
