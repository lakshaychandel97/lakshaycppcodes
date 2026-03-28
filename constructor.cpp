
#include<iostream>
using namespace std;
class Student { //datatype
    public:
    string name;
    int rno; //blueprint
    float cgpa;
    int age;

    Student() { // default constructor impotant for creating object without passing any value
                // or non parametrised costructor
    }


    Student(string s, int r , float g , int a) { // parameterised constructor
      name = s;
        rno = r;
        cgpa = g;
        age = a;
    }
};

int main() {
  
Student s1("lakshay", 10, 8.5,29);//object

Student s2;
s2.name = "raghav";
s2.rno = 20;
s2.cgpa = 9.5;
s2.age = 98;
 
 Student s3 = s2;// Deep Copy is created 
 s3.name = "Tanish";

 Student s4(s2);

cout<<s1.name <<""<<s1.rno<<""<<s1.cgpa<< endl;
cout<<s2.name <<""<<s2.rno<<""<<s2.cgpa<< endl;
cout<<s3.name <<""<<s3.rno<<""<<s3.cgpa<< endl;
cout<<s4.name <<""<<s4.rno<<""<<s4.cgpa<< endl;
}