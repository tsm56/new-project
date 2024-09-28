#include<iostream>
using namespace std;

class student{
public:
       string name;
       int roll;
 
    student(string name , int roll){   //if parameter constructor name is same as members 
       this->name = name;              //then we (this) keyword for it
       this->roll = roll;              //if we dont use (this) keyword then it will give me a garbage value but there will be no error      

    }

};
 
int main(){
   student s1("musiala", 42 );


   cout<<s1.name<<" "<<s1.roll<<endl;

    return 0;
} 

