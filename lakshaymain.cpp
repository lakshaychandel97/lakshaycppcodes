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

// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     cin >> c;
//     cout << (int)c;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float c;
//     cin >> c;
//     cout << (c * 9 / 5) + 32;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a > b && a > c)
//         cout << a;
//     else if (b > c)
//         cout << b;
//     else
//         cout << c;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cin >> year;

//     if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//         cout << "Leap Year";
//     else
//         cout << "Not Leap Year";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     if (n >= 0)
//         cout << "Positive";
//     else
//         cout << "Negative";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     cin >> c;

//     if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
//         cout << "Vowel";
//     else
//         cout << "Consonant";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cin >> marks;

//     if (marks >= 90)
//         cout << "A";
//     else if (marks >= 75)
//         cout << "B";
//     else if (marks >= 50)
//         cout << "C";
//     else
//         cout << "Fail";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//         cout << i << " ";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//         sum += i;

//     cout << sum;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, fact = 1;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//         fact *= i;

//     cout << fact;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, a = 0, b = 1, c;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << a << " ";
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, rev = 0;
//     cin >> n;

//     while (n > 0) {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }

//     cout << rev;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, rev = 0, original;
//     cin >> n;
//     original = n;

//     while (n > 0) {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }

//     if (original == rev)
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, count = 0;
//     cin >> n;

//     while (n > 0) {
//         count++;
//         n /= 10;
//     }

//     cout << count;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;

//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }

//     cout << sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, flag = 1;
//     cin >> n;

//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag == 1)
//         cout << "Prime";
//     else
//         cout << "Not Prime";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= 10; i++)
//         cout << n << " x " << i << " = " << n * i << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, gcd;
//     cin >> a >> b;

//     for (int i = 1; i <= a && i <= b; i++) {
//         if (a % i == 0 && b % i == 0)
//             gcd = i;
//     }

//     cout << gcd;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, lcm;
//     cin >> a >> b;

//     for (int i = 1; i <= a * b; i++) {
//         if (i % a == 0 && i % b == 0) {
//             lcm = i;
//             break;
//         }
//     }

//     cout << lcm;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int base, exp, result = 1;
//     cin >> base >> exp;

//     for (int i = 1; i <= exp; i++)
//         result *= base;

//     cout << result;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, temp, r;
//     cin >> n;
//     temp = n;

//     while (n > 0) {
//         r = n % 10;
//         sum += r * r * r;
//         n /= 10;
//     }

//     if (sum == temp)
//         cout << "Armstrong";
//     else
//         cout << "Not Armstrong";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;

//     for (int i = 1; i < n; i++) {
//         if (n % i == 0)
//             sum += i;
//     }

//     if (sum == n)
//         cout << "Perfect";
//     else
//         cout << "Not Perfect";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0)
//             sum += i;
//     }

//     cout << sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 != 0)
//             sum += i;
//     }

//     cout << sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++)
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << j;
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, num = 1;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << num++ << " ";
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << (i + j) % 2;
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 0; i < n; i++)
//         sum += arr[i];

//     cout << sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int max = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }

//     cout << max;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int min = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min)
//             min = arr[i];
//     }

//     cout << min;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, key;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cin >> key;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             cout << "Found";
//             return 0;
//         }
//     }

//     cout << "Not Found";
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int max = arr[0], second = -1;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             second = max;
//             max = arr[i];
//         } else if (arr[i] > second && arr[i] != max) {
//             second = arr[i];
//         }
//     }

//     cout << second;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n], b[n];

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     for (int i = 0; i < n; i++)
//         b[i] = a[i];

//     for (int i = 0; i < n; i++)
//         cout << b[i] << " ";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, even = 0, odd = 0;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         if (arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     cout << "Even: " << even << " Odd: " << odd;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, pos, val;
//     cin >> n;
//     int arr[100];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cin >> pos >> val;

//     for (int i = n; i >= pos; i--)
//         arr[i] = arr[i - 1];

//     arr[pos - 1] = val;
//     n++;

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n, pos;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cin >> pos;

//     for (int i = pos - 1; i < n - 1; i++)
//         arr[i] = arr[i + 1];

//     n--;

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int sum(int n) {
//     if (n == 0) return 0;
//     return n + sum(n - 1);
// }

// int main() {
//     cout << sum(5);
//     return 0;
// }
//  PROGRAM 67: Pointer Basic
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int *p = &a;
//     cout << *p;
//     return 0;
// }
//  PROGRAM 68: Swap Using Pointer
// #include <iostream>
// using namespace std;

// void swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int main() {
//     int x = 5, y = 10;
//     swap(&x, &y);
//     cout << x << " " << y;
//     return 0;
// }
//  PROGRAM 69: Pointer to Array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3] = {1,2,3};
//     int *p = arr;

//     for(int i=0;i<3;i++)
//         cout << *(p+i);

//     return 0;
// }
// PROGRAM 70: Pointer to Pointer
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     int *p = &a;
//     int **pp = &p;

//     cout << **pp;
//     return 0;
// }
//  PROGRAM 71: Class & Object
// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show() {
//         cout << "Hello";
//     }
// };

// int main() {
//     A obj;
//     obj.show();
//     return 0;
// }
//  PROGRAM 72: Constructor
// #include <iostream>
// using namespace std;

// class A {
// public:
//     A() {
//         cout << "Constructor Called";
//     }
// };

// int main() {
//     A obj;
//     return 0;
// }
//  PROGRAM 73: Destructor
// #include <iostream>
// using namespace std;

// class A {
// public:
//     ~A() {
//         cout << "Destructor Called";
//     }
// };

// int main() {
//     A obj;
//     return 0;
// }
//  PROGRAM 74: Inheritance
// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show() { cout << "Base"; }
// };

// class B : public A {};

// int main() {
//     B obj;
//     obj.show();
//     return 0;
// }
//  PROGRAM 75: Function Overloading
// #include <iostream>
// using namespace std;

// int add(int a,int b){ return a+b; }
// int add(int a,int b,int c){ return a+b+c; }

// int main(){
//     cout<<add(2,3)<<" "<<add(1,2,3);
//     return 0;
// }
//  PROGRAM 76: Function Overriding
// #include <iostream>
// using namespace std;

// class A{
// public:
//     void show(){ cout<<"Base"; }
// };

// class B: public A{
// public:
//     void show(){ cout<<"Derived"; }
// };

// int main(){
//     B obj;
//     obj.show();
//     return 0;
// }
//  PROGRAM 77: Encapsulation
// #include <iostream>
// using namespace std;

// class A {
// private:
//     int x;
// public:
//     void set(int a){ x = a; }
//     int get(){ return x; }
// };

// int main(){
//     A obj;
//     obj.set(10);
//     cout<<obj.get();
//     return 0;
// }
//  PROGRAM 78: Friend Function
// #include <iostream>
// using namespace std;

// class A {
//     int x;
// public:
//     A(){ x=10; }
//     friend void show(A);
// };

// void show(A obj){
//     cout<<obj.x;
// }

// int main(){
//     A obj;
//     show(obj);
//     return 0;
// }
//  PROGRAM 79: Virtual Function
// #include <iostream>
// using namespace std;

// class A {
// public:
//     virtual void show(){ cout<<"Base"; }
// };

// class B: public A {
// public:
//     void show(){ cout<<"Derived"; }
// };

// int main(){
//     A *ptr;
//     B obj;
//     ptr = &obj;
//     ptr->show();
//     return 0;
// }
//  PROGRAM 80: Abstract Class
// #include <iostream>
// using namespace std;

// class A {
// public:
//     virtual void show() = 0;
// };

// class B : public A {
// public:
//     void show(){ cout<<"Implemented"; }
// };

// int main(){
//     B obj;
//     obj.show();
//     return 0;
// }
//  PROGRAM 81–100 (IMPORTANT THEORY STYLE)

// These are smaller but exam-critical:

// //81 static variable
// static int x;

// //82 static function
// static void show();

// //83 inline function
// inline int add(int a,int b){ return a+b; }

// //84 const variable
// const int x=10;

// //85 reference variable
// int &ref=a;

// //86 namespace
// namespace A{ int x=5; }

// //87 using namespace
// using namespace std;

// //88 sizeof operator
// cout<<sizeof(int);

// //89 type casting
// cout<<(float)5/2;

// //90 enum
// enum day{Mon,Tue};

// //91 structure
// struct A{ int x; };

// //92 union
// union A{ int x; float y; };

// //93 file handling
// #include<fstream>

// //94 write file
// ofstream fout("a.txt");

// //95 read file
// ifstream fin("a.txt");

// //96 vector
// #include<vector>

// //97 push_back
// v.push_back(10);

// //98 iterator
// vector<int>::iterator it;

// //99 map
// #include<map>

// //100 pair
// pair<int,int> p;
//  PROGRAM 101: Binary Search (Proper)
// #include <iostream>
// using namespace std;

// int main() {
//     int n, key;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++) cin>>arr[i];
//     cin >> key;

//     int l=0, r=n-1;
//     while(l<=r){
//         int mid=(l+r)/2;
//         if(arr[mid]==key){
//             cout<<"Found";
//             return 0;
//         }
//         else if(arr[mid]<key)
//             l=mid+1;
//         else
//             r=mid-1;
//     }

//     cout<<"Not Found";
//     return 0;
// }
//  PROGRAM 102: Selection Sort
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++) cin>>arr[i];

//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min])
//                 min=j;
//         }
//         swap(arr[i],arr[min]);
//     }

//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }
//  PROGRAM 103: Insertion Sort
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++) cin>>arr[i];

//     for(int i=1;i<n;i++){
//         int key=arr[i];
//         int j=i-1;

//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }

//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }
//  PROGRAM 104: Matrix Addition
// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], b[2][2], c[2][2];

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             cin>>a[i][j];

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             cin>>b[i][j];

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             c[i][j]=a[i][j]+b[i][j];

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++)
//             cout<<c[i][j]<<" ";
//         cout<<endl;
//     }

//     return 0;
// }
//  PROGRAM 105: Matrix Multiplication
// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], b[2][2], c[2][2]={0};

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             cin>>a[i][j];

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             cin>>b[i][j];

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++)
//                 c[i][j]+=a[i][k]*b[k][j];
//         }
//     }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++)
//             cout<<c[i][j]<<" ";
//         cout<<endl;
//     }

//     return 0;
// }
//  PROGRAM 106: Transpose Matrix
// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2];

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             cin>>a[i][j];

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++)
//             cout<<a[j][i]<<" ";
//         cout<<endl;
//     }

//     return 0;
// }
//  PROGRAM 107: Diagonal Sum
// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][3], sum=0;

//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             cin>>a[i][j];

//     for(int i=0;i<3;i++)
//         sum+=a[i][i];

//     cout<<sum;
//     return 0;
// }
//  PROGRAM 108: Count Digits in String
// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
//     int count=0;

//     for(int i=0;i<s.length();i++)
//         if(isdigit(s[i])) count++;

//     cout<<count;
//     return 0;
// }
//  PROGRAM 109: Remove Spaces
// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);

//     for(int i=0;i<s.length();i++)
//         if(s[i]!=' ') cout<<s[i];

//     return 0;
// }
//  PROGRAM 110: Toggle Case
// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;

//     for(int i=0;i<s.length();i++){
//         if(islower(s[i]))
//             s[i]=toupper(s[i]);
//         else
//             s[i]=tolower(s[i]);
//     }

//     cout<<s;
//     return 0;
// }
//  PROGRAM 111: Count Frequency of Element
// #include <iostream>
// using namespace std;

// int main() {
//     int n, key, count=0;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++) cin>>arr[i];
//     cin>>key;

//     for(int i=0;i<n;i++)
//         if(arr[i]==key) count++;

//     cout<<count;
//     return 0;
// }
//  PROGRAM 112: Remove Duplicate Elements
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++) cin>>arr[i];

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 for(int k=j;k<n-1;k++)
//                     arr[k]=arr[k+1];
//                 n--; j--;
//             }
//         }
//     }

//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }
//  PROGRAM 113: Merge Two Arrays
// #include <iostream>
// using namespace std;

// int main() {
//     int a[3], b[3], c[6];

//     for(int i=0;i<3;i++) cin>>a[i];
//     for(int i=0;i<3;i++) cin>>b[i];

//     for(int i=0;i<3;i++) c[i]=a[i];
//     for(int i=0;i<3;i++) c[i+3]=b[i];

//     for(int i=0;i<6;i++) cout<<c[i]<<" ";
//     return 0;
// }
//  PROGRAM 114: Intersection of Arrays
// #include <iostream>
// using namespace std;

// int main() {
//     int a[5], b[5];

//     for(int i=0;i<5;i++) cin>>a[i];
//     for(int i=0;i<5;i++) cin>>b[i];

//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(a[i]==b[j]){
//                 cout<<a[i]<<" ";
//                 break;
//             }
//         }
//     }

//     return 0;
// }
//  PROGRAM 115: Sum of Matrix Elements
// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], sum=0;

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++){
//             cin>>a[i][j];
//             sum+=a[i][j];
//         }

//     cout<<sum;
//     return 0;
// }
//  PROGRAM 116: Check Sorted Array
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];

//     bool sorted=true;
//     for(int i=0;i<n-1;i++)
//         if(arr[i]>arr[i+1]) sorted=false;

//     if(sorted) cout<<"Sorted";
//     else cout<<"Not Sorted";

//     return 0;
// }
//  PROGRAM 117: Count Even in Matrix
// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], count=0;

//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++){
//             cin>>a[i][j];
//             if(a[i][j]%2==0) count++;
//         }

//     cout<<count;
//     return 0;
// }
//  PROGRAM 118: Stack Using Array
// #include <iostream>
// using namespace std;

// int stack[100], top=-1;

// void push(int x){ stack[++top]=x; }
// void pop(){ if(top>=0) top--; }

// int main(){
//     push(10);
//     push(20);
//     pop();
//     cout<<stack[top];
// }
//  PROGRAM 119: Queue Using Array
// #include <iostream>
// using namespace std;

// int q[100], front=0, rear=-1;

// void enqueue(int x){ q[++rear]=x; }
// void dequeue(){ if(front<=rear) front++; }

// int main(){
//     enqueue(5);
//     enqueue(10);
//     dequeue();
//     cout<<q[front];
// }
//  PROGRAM 120: Structure Student
// #include <iostream>
// using namespace std;

// struct Student{
//     int id;
//     string name;
// };

// int main(){
//     Student s;
//     cin>>s.id>>s.name;
//     cout<<s.id<<" "<<s.name;
// }
//  PROGRAM 121: Pointer Arithmetic
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3]={1,2,3};
//     int *p=arr;

//     cout<<*(p+1);
//     return 0;
// }
//  PROGRAM 122: Dynamic Memory (new/delete)
// #include <iostream>
// using namespace std;

// int main(){
//     int *p = new int;
//     *p = 10;

//     cout<<*p;
//     delete p;
//     return 0;
// }
//  PROGRAM 123: Call by Value
// #include <iostream>
// using namespace std;

// void fun(int x){
//     x=20;
// }

// int main(){
//     int a=10;
//     fun(a);
//     cout<<a;
// }
//  PROGRAM 124: Call by Reference
// #include <iostream>
// using namespace std;

// void fun(int &x){
//     x=20;
// }

// int main(){
//     int a=10;
//     fun(a);
//     cout<<a;
// }
//  PROGRAM 125: Inline Function
// #include <iostream>
// using namespace std;

// inline int square(int x){
//     return x*x;
// }

// int main(){
//     cout<<square(5);
// }
// PROGRAM 126: Static Variable
// #include <iostream>
// using namespace std;

// void fun(){
//     static int x=0;
//     x++;
//     cout<<x<<endl;
// }

// int main(){
//     fun(); fun(); fun();
// }
// PROGRAM 127: Enum Example
// #include <iostream>
// using namespace std;

// enum Day {Mon, Tue, Wed};

// int main(){
//     Day d = Tue;
//     cout<<d;
// }
//  PROGRAM 128: Union Example
// #include <iostream>
// using namespace std;

// union A{
//     int x;
//     float y;
// };

// int main(){
//     A obj;
//     obj.x=10;
//     cout<<obj.x;
// }