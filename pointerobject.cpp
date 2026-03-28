#include<iostream>
using namespace std;
class CricketPlayer{
    public:
    string name;
    int runs;
float avg;

CricketPlayer(string name, int runs, float avg){
    this->name = name;
    this->runs = runs;
    this->avg = avg;
   }
};

void change(CricketPlayer* c){
 
    // (*c).avg = 60.5; //modifying avg of c using pointer
c->avg = 22.5; //modifying avg of c using pointer (alternative syntax)
}

int main(){
CricketPlayer c1("Virat", 12000, 50.5); 
CricketPlayer* c2 = new CricketPlayer("Rohit", 9000, 45.5);

cout << c1.name << " " << c1.runs << endl; //accessing members of c1
cout << c2->name << " " << c2->runs << endl; //accessing members of c2 using pointer
// cout<<c1.avg<<endl; //avg of c1 before modification
// change(&c1); //passing address of c1 to change function


// CricketPlayer* p1 = &c1; //pointer to c1
// cout<<(*p1).runs<<endl; //accessing runs of c1 using pointer
// (*p1).avg = 55.9; //modifying avg of c1 using pointer
// cout<<c1.avg<<endl; //avg of c1 after modification



//    int x = 10;
//    cout<<&x<<endl;
//    int* p = &x; //pointer variable
//     cout<<p<<endl; //address of x
//     cout<<*p<<endl; //value of x
//     *p = 102; //modifying value of x using pointer
//     cout<<x<<endl; //value of x after modification 
}