//  1. User Defined Function (Basic Example)
// #include <iostream>
// using namespace std;

// int add(int a, int b) {   // user-defined function
//     return a + b;
// }

// int main() {
//     int x = 5, y = 10;
//     cout << "Sum = " << add(x, y);
//     return 0;
// }


// 2. Factorial using Function
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     cout << "Factorial = " << factorial(n);
// }



// 3. Prime Number Check Function
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n <= 1) return false;
//     for(int i = 2; i <= n/2; i++) {
//         if(n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int num;
//     cin >> num;

//     if(isPrime(num))
//         cout << "Prime";
//     else
//         cout << "Not Prime";
// }



// 4. Class & Object (User Defined Type)
// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int roll;

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll: " << roll << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.name = "Lakshay";
//     s1.roll = 101;

//     s1.display();
// }



// 5. Constructor Example
// #include <iostream>
// using namespace std;

// class Demo {
// public:
//     Demo() {
//         cout << "Constructor called";
//     }
// };

// int main() {
//     Demo d1;
// }



// 6. Function Overloading
// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     return a + b;
// }

// double sum(double a, double b) {
//     return a + b;
// }

// int main() {
//     cout << sum(2, 3) << endl;
//     cout << sum(2.5, 3.5);
// }



// 7. Inheritance Example
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void show() {
//         cout << "This is parent class";
//     }
// };

// class Child : public Parent {
// };

// int main() {
//     Child c;
//     c.show();
// }




// 8. Polymorphism (Function Overriding)
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() {
//         cout << "Base class";
//     }
// };

// class Derived : public Base {
// public:
//     void show() {
//         cout << "Derived class";
//     }
// };

// int main() {
//     Base* b;
//     Derived d;
//     b = &d;
//     b->show();
// }



// 9. Friend Function
// #include <iostream>
// using namespace std;

// class Test {
// private:
//     int x;
// public:
//     Test() { x = 10; }

//     friend void display(Test t);
// };

// void display(Test t) {
//     cout << t.x;
// }

// int main() {
//     Test t;
//     display(t);
// }


//  10. Static Member Function
// #include <iostream>
// using namespace std;

// class Counter {
// public:
//     static int count;

//     Counter() {
//         count++;
//     }
// };

// int Counter::count = 0;

// int main() {
//     Counter c1, c2, c3;
//     cout << Counter::count;
// }