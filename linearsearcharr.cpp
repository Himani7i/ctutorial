#include<iostream>
using namespace std;
int linearsearch( int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

}

int key;
cout<<"enetr key to find:"<<endl;
cin>>key;
cout<<"key is at index:"<<endl;
cout<<linearsearch(arr,n,key)<<endl;
}