#include <iostream>
using namespace std;
int main(){
    int x,a=0,b=1,g;
    cin>>x;
    for(int i=0; i<=x;i++){
        g=a+b;
        a=b;
        b=g;
        cout<<a<<"\n";
        }
        return 0;
}