//sortinggggggg

//selection sort
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
 //or
 #include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
         for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++ ){
                
                if(arr[j]<arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                }

            }
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    
return 0;
}


//bubble sort
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
//hw: stable or unstable, inplace sort
//insertion sort
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}