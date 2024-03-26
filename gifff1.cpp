#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int n;
    cin>>n;
    
    while( n>0){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            
            if(i+j<=n){
               cout<<"*";
           }
           else cout<<" ";
           }
           cout<< endl;
    }
    cout<<"                                                                                "<<"\n";
           for(int i = 1; i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j<=n-i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
           }

            
            
            }
     
}