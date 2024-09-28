#include<iostream>
using namespace std;

class student {     //student is a new data type
public:    
    int rno;        //these are the attributes or properties
    string name;

};

int main()
{
   student s;      //s is the object
   s.rno = 2;                       // . operator is used to initialize the object
   s.name = "Tanishq"; 
   cout<<s.name<<endl;

   return 0;

}



     