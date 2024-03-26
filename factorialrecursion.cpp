#include <iostream>
using namespace std;

// //recursion
// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);

// }
//  int main(){
//     //factorial of a number:
//     int a;
//     cin>>a;
//     cout<<factorial(a)<<endl;
//  }

//fibonacci series ki nth  index par kya hai
int fib(int n){
    if(n<2){
        return 1;

    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int a;
    cin>>a;
    cout<<a<<fib(a)<<endl;
    return 0;
}

//sum of n numbers using recursion
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}