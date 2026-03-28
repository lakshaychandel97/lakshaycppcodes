//  #include <iostream>
// using namespace std;
//
// int main() {
//     cout << "Hello, World!";
//     return 0;
// }




// #include <iostream>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* next;
//
//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };
//
// int main() {
//     Node* head = new Node(5);
//     cout << head->data << endl;
//     return 0;
// }



//  bubble sort
// linked list
// wap to swap two numbers using third variable or without using third variable






// #include <iostream>
// using namespace std;
//
// int main() {
//     int a[5] = {5, 2, 8, 1, 3};
//     int temp;
//
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4 - i; j++) {
//             if (a[j] > a[j + 1]) {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//
//     for (int i = 0; i < 5; i++)
//         cout << a[i] << " ";
//
//     return 0;
// }



// #include <iostream>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* next;
// };
//
// class LinkedList {
// private:
//     Node* head;   // hidden from outside
//
// public:
//     LinkedList() {
//         head = NULL;
//     }
//
//     void insert(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = head;
//         head = newNode;
//     }
//
//     void display() {
//         Node* temp = head;
//
//         while (temp != NULL) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//
//         cout << "NULL";
//     }
// };
//
// int main() {
//     LinkedList list;
//
//     list.insert(10);
//     list.insert(20);
//     list.insert(30);
//
//     list.display();
//
//     return 0;
// }

//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {5, 10, 15, 20, 25};
//     int n = 5;
//     int pos = 3;
//     int element = 16;
//     for(int i = 25; i < n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     n--;
//     cout << "Array Elements: ";
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     int sum = 0;
//     for(int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     cout << "\nSum = " << sum;
//     return 0;
// }


//
// #include<iostream>
// using namespace std;
// class Student { //datatype
//     public:
//     string name;
//     int rno; //blueprint
//     float cgpa;
//     int age;
// };
//
// int main() {
//     Student s;//object
//     s.name = "lakshay";
//     s.rno = 10;
//     s.cgpa = 8.5;
//     s.age = 18;
// cin>>s.name;
//     cin>>s.rno;
//
// Student s2;//object
// s2.name = "raghav";
// s2.rno = 20;
// s2.cgpa = 9.5;
// s2.age = 98;
//     cin>>s2.name;
//     cin>>s2.rno;
//
//     cout<<s.name << endl;
//     cout<<s.rno<<endl;
//     cout<<s2.rno << endl;
//     cout<<s2.name<<endl;
// }



//
// #include<iostream>
// using namespace std;
// class Car { //datatype
// public:
//     string name;
//     int seats;
//     int price ;
//     string type;
// };
// int main(){
//     Car c1;
//     c1.name = "BMW";
//     c1.seats = 4;
//     c1.price = 1300700;
//     c1.type = "Sedan";
//     Car c2;
//     c2.name = "Audi";
//     c2.seats = 4;
//     c2.price = 2209000;
//     c2.type = "SUV";
//     Car c3;
//     c3.name = "Mercedes";
//     c3.seats = 4;
//     c3.price = 32008000;
//     c3.type = "Coupe";
//
//     cout<<c1.name <<" "<<c1.seats<<" "<<c1.price<<" "<<c1.type<<endl;
//     cout<<c2.name <<" "<<c2.seats<<" "<<c2.price<<" "<<c2.type<<endl;
//     cout<<c3.name <<" "<<c3.seats<<" "<<c3.price<<" "<<c3.type<<endl;
// }




// #include<iostream>
// using namespace std;
// class Student { //datatype
//     public:
//     string name;
//     int rno; //blueprint
//     float cgpa;
//     int age;
// };
//
// int main() {
//     Student s;//object
//     s.name = "lakshay";
//     s.rno = 10;
//     s.cgpa = 8.5;
//     s.age = 18;
// cin>>s.name;
//     cin>>s.rno;
//
// Student s2;//object
// s2.name = "raghav";
// s2.rno = 20;
// s2.cgpa = 9.5;
// s2.age = 98;
//     cin>>s2.name;
//     cin>>s2.rno;
//
//     cout<<s.name << "" <<s.cgpa << "" <<s.age <<  endl;
// cout<<s2.name << "" <<s2.rno<< "" << s2.age<< endl;
//
//
// }