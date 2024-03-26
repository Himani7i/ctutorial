// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//         cin>>arr[i];
//         arr[j]=arr[i];
//         int mindiff=arr[1]-arr[2];
//         int maxdiff=arr[1]-arr[2];
//         if(arr[i]-arr[j]>maxdiff){
//             cout<<maxdiff<<(arr[i],arr[j])<<endl;
//         }
//         if(arr[i]-arr[j]<mindiff){
//             cout<<mindiff<<(arr[i],arr[j])<<endl;
//         }
        
//     }
//     }
    

//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minDiff = (arr[0] - arr[1]);
    int maxDiff = minDiff;
    int minDiffIndex1 = 0, minDiffIndex2 = 1;
    int maxDiffIndex1 = 0, maxDiffIndex2 = 1;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = (arr[i] - arr[j]);

            if (diff < minDiff) {
                minDiff = diff;
                minDiffIndex1 = i;
                minDiffIndex2 = j;
            }

            if (diff > maxDiff) {
                maxDiff = diff;
                maxDiffIndex1 = i;
                maxDiffIndex2 = j;
            }
        }
    }

    cout << "Pair with Minimum Difference: (" << arr[minDiffIndex1] << ", " << arr[minDiffIndex2] << ")" << endl;
    cout << "Pair with Maximum Difference: (" << arr[maxDiffIndex1] << ", " << arr[maxDiffIndex2] << ")" << endl;

    return 0;
}
