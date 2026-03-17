#include <iostream>

using namespace std;

int main() {
    int n; 
  cout<<"enter a number";
    cin >> n;                  // User se number input lena

    string s = to_string(n);   // Number ko string me convert karna, taaki har digit pe easily loop chal sake
    int sum = 0;               // Digits ke cubes ka sum store karne ke liye variable

    for(char c : s) {          // String ke har character pe loop
        int digit = c - '0';   // Character ko integer me convert karna ('1' → 1)
        sum += digit * digit * digit; // Digit ka cube sum me add karna
    }

    if(sum == n)
        cout << n << " is an Armstrong Number";
    else
        cout << n << " is NOT an Armstrong Number";

    return 0;
}