#include<iostream>
using namespace std;
enum etype{laborer,secretary,manager,accountant,executive,researcher};
int main(){
    char ch;
    cout<<"enter employee type:";
    cin>>ch;
    etype employee;
    switch(ch){
        case 'l': employee=laborer;
                 break;
        case 's': employee=secretary;
                 break;
        case 'm': employee=manager;
                 break;
        case 'a': employee=accountant;
                 break;
        case 'e': employee=executive;
                 break;
        case 'r': employee=researcher;
                 break;
    }
    switch(employee){
        case 0: cout<<"Employee type is laberer";
               break;
        case 1: cout<<"Employee type is secretary";
               break;
        case 2: cout<<"Employee type is manager";
               break;
        case 3: cout<<"Employee type is accoutant";
               break;
        case 4: cout<<"Employee type is executive";
               break;
        case 5: cout<<"Employee type is researcher";
               break;

    }
return 0;
}
