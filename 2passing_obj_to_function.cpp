#include<iostream>
using namespace std;

class car {
public:    
    int power;
    int seat;
    int litre;
};

void print(car c){                                    // passing object to the function
    cout<<c.power<<" "<<c.seat<<" "<<c.litre<<endl;  
}


int main(){
    car c1;
    c1.power = 14;
    c1.seat = 5;
    c1.litre = 1;

    car c2;
    c2.power = 15;
    c2.litre = 6;
    c2.seat = 56;


    print(c1);
    print(c2);


    return 0;
}