#include<iostream>
using namespace std;
class Car { //datatype
    public:
string name;
int seats;
int price;
string type;
};
// void print (Car c){
//     cout<<c.name <<" "<<c.seats<<" "<<c.price<<" "<<c.type<<endl;
// }
// void change (Car& c){
//  c.name = "Audi";
//  c.seats = 55;
//  c.price = 2209000;
//  c.type = "SUV";}

int main(){


    // Car c1;
    // c1.name = "BMW";
    // c1.seats = 4;
    // c1.price = 1300700;
    // c1.type = "Sedan"; 

     //only to test pass by value and pass by reference for c1   
    // print(c1);
    // change(c1);//pass by value
    // print(c1);


    // Car c2;
    // c2.name = "Audi";       
    // c2.seats = 4;
    // c2.price = 2209000;
    // c2.type = "SUV";                         //full code c1 and c2 and c3 for pass by value and pass by reference        
    // Car c3;                                  //we can do pass by refrence using & operator in function parameter and then we can change the value of c1,c2 and c3 in main function as well as in print function as well.
    // c3.name = "Mercedes";                    
    // c3.seats = 4;                                               
    // c3.price = 32008000;                     
    // c3.type = "Coupe";                       
                                                         
    // print(c1);
    // print(c2);
    // print(c3);

}



