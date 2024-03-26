#include <iostream>

using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
// int maxNo=arr[1];
// int minNo=arr[1];

// for(int i=0; i<n; i++){
// if(arr[i]>maxNo)
// maxNo = arr[i];
// }
// if(arr[i]<minNo){
//     minNo = arr[i];
// }

//     cout<<maxNo<<"\n "<<minNo<<endl;
// return 0;

// }

//program to find maximum in 2D array
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    }
int maxNo=arr[1][1];
int minNo=arr[1][1];

for(int i=0; i<n; i++){
     for(int j=0;j<m;j++){
if(arr[i][j]>maxNo){
maxNo= arr[i][j];
}
if(arr[i][j]<minNo){
    minNo = arr[i][j];
}
     }
}

    cout<<maxNo<<"\n "<<minNo<<endl;
return 0;
}


// to find max in array


