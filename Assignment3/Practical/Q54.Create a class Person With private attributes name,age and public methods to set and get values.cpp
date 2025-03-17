#include <iostream>
using namespace std;

class Person{
        int age;
        string name;
        public:
            void setname(string n){
                name = n;
            }
            string getname(){
                return name;
            }
            void setage(int a){
                age = a ;
            }
            int getage(){
                return age;
            }
};
    
int main() {
    string name;
    int age;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your Age: ";
    cin>>age;
    
    Person pi;
    pi.setname(name);
    cout<<"Your Name is: "<<pi.getname();
    
    pi.setage(age);
    cout<<endl;
    cout<<"Your Age is: "<<pi.getage();

    return 0;
}
