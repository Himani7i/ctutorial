// #include <iostream>
// using namespace std;

// int factorial(int n){
    
//     if(n<=1){
//         return 1;
//     }
//     else{
//     return n*factorial(n-1);
//     }
    
    
// }
// bool iseven(int n){
//     if(n%2==0){
//         int fact = factorial(n);
//         cout<<n<<"is even and the factorial is: "<<fact<<endl;
//         return true;
//     }
//     else{
//         cout<<n<<"is odd"<<endl;
//         return false;
//     }

// }
// int main(){
//     int x;
//     cout<<"enter a number: ";
//     cin>>x;
//     iseven(x);
//     return 0;
    
    
// }
#include <iostream>
using namespace std;

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

bool iseven(int n){
    if(n % 2 == 0){
        int fact = factorial(n);
        cout << n << " is even and the factorial is: " << fact << endl;
        return true;
    }
    else{
        cout << n << " is odd" << endl;
        return false;
    }
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    iseven(x);
    return 0;
}
