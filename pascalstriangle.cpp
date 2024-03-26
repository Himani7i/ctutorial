#include <iostream>
using namespace std;

int fact(int num){
    int factorial =1;
    for(int i=2; i<=num; i++){
        
        factorial = factorial * i;

    }
    return factorial;
}
int main(){
    int num;
    cin>>num;
    for(int i=0; i<=num; i++){
         for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
         }
         cout<<endl;
    }
    return 0;

}