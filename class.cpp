
#include<iostream>
using namespace std;
class Student { //datatype
    public:
    string name;
    int rno; //blueprint
    float cgpa;
    int age;
};

int main() {
    Student s;//object
    s.name = "lakshay";
    s.rno = 10;
    s.cgpa = 8.5;
    s.age = 18;
cin>>s.name;
    cin>>s.rno;
cin>>s.age;

Student s2;//object
s2.name = "raghav";
s2.rno = 20;
s2.cgpa = 9.5;
s2.age = 98;
    cin>>s2.name;
    cin>>s2.rno;
    cin>>s2.age;

    cout<<s.name << "" <<s.cgpa << "" <<s.age <<  endl;
cout<<s2.name << "" <<s2.rno<< "" << s2.age<< endl;


}
 