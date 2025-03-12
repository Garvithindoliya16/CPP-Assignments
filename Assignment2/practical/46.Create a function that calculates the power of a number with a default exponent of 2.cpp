#include <iostream>
#include <cmath>
using namespace std;


int power(int base,int exponent = 2){
    return pow(base,exponent);
}


int main() {
    int base;
    char choice;
    int exponent;
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Do you want to enter exponent : (y/n)";
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
        cout<<"Enter exponent :";
        cin>>exponent;
        cout<<"Answer is :"<<power(base,exponent);
    }else{
        cout<<"Answer is :"<<power(base);
    }

    return 0;
}
