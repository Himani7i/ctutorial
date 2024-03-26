#include<iostream>
#include <vector>
using namespace std;
int binarysearch( int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        //int mid=(s+e)/2;
        int mid = s + (( e-s)/2);

        if(arr[mid]==key){
            return mid;
        }
else if(arr[mid]>key){
    e=mid-1;
}
else{
    s=mid+1;
}
mid = s + (( e-s)/2);
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

}
int key;
cin>>key;
cout<<binarysearch(arr,n,key)<<endl;
return 0;
}

// first and last occurence of an element
int firstocc( int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while( s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
        else if( key > arr[mid]){
            s = mid + 1;

        }
        else if( key < arr[mid]){
             e = mid -1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
}



int lastocc(int arr[], int n, int key){
    int s =0, e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while( s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if( key > arr[mid]){
            s = mid + 1;

        }
        else if( key < arr[mid]){
             e = mid -1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
}

// peakIndexInMoutainArray
class solution{
    public:
int pIIMA( vector<int>&arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid +1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
};

/////////binarysearchadvancedddddquesssss

//1) PIVOT ELEMENT
int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

//search in a sorted array
#include<vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}



int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
    
}


//square root with precision
#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}



//moreeeeeeeeeeeee advaaaaaaanceddddddddddd

//book allocation
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

//aggressivee cowsssssss
bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
   	int s = 0;
    int n = stalls.size();
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

//painters partion
