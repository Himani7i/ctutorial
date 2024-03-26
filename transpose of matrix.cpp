// #include <iostream>
// using namespace std;
// void transpose(int arr[n][m],int arr2[n][m]){
//     int i,j;
//     for(int i = 0; i<n;i++){
//     for(int j=0;j<m;j++){
//         arr2[i][j] = arr[j][i];
//     }
// }
// }

// int main()
// {
//     int n,m;
// cin>>n>>m;


// int arr[n][m];
// for(int i = 0; i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//     }
// }
// int arr2[n][m],i,j;
// transpose(arr,arr2);
// for(int i = 0; i<n;i++){
//     for(int j=0;j<m;j++)
//         cout<<" "<<arr2[i][j];
//         cout<<"\n";
//     }
// return 0;

// }


//program to find transpose of a 3x3 matrix

#include <iostream>
using namespace std;

int main () {

    int a[3][3];
    int i,j;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The 3x3 matrix is: " << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The transpose of given matrix is: " << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }

return 0;
}