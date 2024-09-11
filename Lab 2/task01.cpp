#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int num1,num2,num3,num4;
    char ch;
    cout<<"Enter First fraction:";
    cin>>num1>>ch>>num2;
    cout<<"Enter Second fraction:";
    cin>>num3>>ch>>num4;
    int lob=num1*num4+num3*num2;
    int hor=num2*num4;
    cout<<lob<<ch<<hor<<endl;



return 0;
}
