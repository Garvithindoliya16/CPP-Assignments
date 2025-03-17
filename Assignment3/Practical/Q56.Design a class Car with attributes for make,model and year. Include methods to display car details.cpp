#include <iostream>
using namespace std;

class Car{
    string model = "spresso";
    int year = 2019;
    public:
        string getmodel(){
            return model;
        }
        int getyear(){
            return year;
        }
    
};

int main(){
    Car c1;
    cout<<"Car Model is: "<<c1.getmodel()<<endl;
    cout<<"Car Year is: "<<c1.getyear();
    return 0;
    
}
