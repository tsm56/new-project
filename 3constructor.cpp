#include<iostream>
using namespace std;

class student{
public:
   int roll;
   string name;

   student(){  // default constructor 
     
   }

   student(int r,string n){    //parameterised constructor we created ,its name is same as clss name with no return type 
     roll = r;
     name = n;
   
   }
     //creating multiple constructors
    
    student(string n){  //2nd constructor
        name = n ;
    }
};

int main(){
    student s1(2,"Tanishq");  // parameterised constructor needed to be declared to use this 
                              //uses 1st constructor according to passed parameters  


    student s2;               // default constructor is need to be declared if we want to write with this type aslo
    s2.name = "ronaldo" ;     // or it will give error
    s2.roll = 7 ;


    student s3(10, "modric");
    s3.name = "messi";         //overwriting something 


    student s4("bale");    //this uses 2nd constructor according to passed parameters  
    s4.roll = 9;

    student s5 = s1 ;      // deep copy (changes hapeen only in s6 not in s1)
    s5.name = "shevschenko";

    student s6(s1);        // copy constructor
    //s6.roll = 42;

    cout<<s1.roll<<s1.name<<endl;
    cout<<s2.roll<<s2.name<<endl;
    cout<<s3.roll<<s3.name<<endl;
    cout<<s4.roll<<s4.name<<endl;
    cout<<s5.roll<<s5.name<<endl;    
    cout<<s6.roll<<s6.name<<endl;

  return 0;

}
