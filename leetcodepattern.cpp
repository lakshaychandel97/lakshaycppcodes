
//1. Palindrome Check

// #include <iostream>
// using namespace std;

// bool isPalindrome(int x) {
//     if (x < 0) return false;

//     int r = 0, t = x;
//     while (t) {
//         r = r * 10 + t % 10;
//         t /= 10;
//     }
//     return x == r;
// }

// int main() {
//     cout << isPalindrome(121);
// }


// 2. Number of Steps to Reduce a Number to Zero

// #include <iostream>
// using namespace std;

// int numberOfSteps(int num) {
//     int steps = 0;

//     while (num > 0) {
//         if (num % 2 == 0)
//             num = num / 2;
//         else
//             num = num - 1;

//         steps++;
//     }

//     return steps;
// }

// int main() {
//     cout << numberOfSteps(14);
// }


//  3. Number of 1 Bits

// #include <iostream>
// using namespace std;

// int hammingWeight(unsigned int n) {
//     int count = 0;

//     while (n) {
//         count += n & 1;
//         n = n >> 1;
//     }

//     return count;
// }

// int main() {
//     cout << hammingWeight(11);
// }


// 4. Fibonacci Number

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n <= 1)
//         return n;

//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     cout << fib(5);
// }

// 5. Maximum Average Subarray I

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isAnagram(string s, string t) {
//     vector<int> c(26, 0);
//     for (int i = 0; i < s.size(); i++) {
//         c[s[i]-'a']++;
//         c[t[i]-'a']--;
//     }
//     for (int x : c) if (x) return false;
//     return s.size() == t.size();
// }

// int main() {
//     cout << isAnagram("anagram", "nagaram");
// }