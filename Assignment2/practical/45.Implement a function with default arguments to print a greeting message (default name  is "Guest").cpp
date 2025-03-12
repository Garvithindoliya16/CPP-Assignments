#include <iostream>
using namespace std;


void greet(string name = "Guest"){
    cout <<"Hello "<<name;

}

int main() {
    string name;
    char choice;
    cout<<"Do you want to enter Name: (y/n)";
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
        cout<<"Enter your Name ";
        cin>>name;
        greet(name);
    }else{
        greet();
    }
    return 0;
}
