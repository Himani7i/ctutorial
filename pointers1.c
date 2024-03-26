#include<stdio.h>
//void swap(int a, int b);
//void _swap(int *a, int *b);

//int main() {
   //int age = 22;
    //int *ptr = &age;
    //int _age = *ptr;
     //printf("%d", _age);
     //address
     //printf("%p \n", &age);
    // printf("%u \n", &age);
    // printf("%u \n", ptr);
     //printf("%u \n", &ptr);

     //value
     //printf("%d\n", age);
    // printf("%d\n", *ptr);
     //printf("%d\n", *(&age));

     // call by val & ref
     //int x = 3, y = 5;
     //_swap(&x, &y);
     //swap(x, y);
     //printf("x = %d & y = %d\n", x, y);

//return 0;
     
//}

// call by value
//void swap(int a, int b){
    //int t = a;
   // a = b;
   // b = t;
   //printf("a = %d & b = %d\n", a, b);
//}
   
   
   
 //call by ref
//void _swap(int *a, int *b){
    //int t = *a;
    //*a = *b;
   // *b = t;
//}


//int main(){
    //int aadhar[5];
    
    //input
    //int *ptr = &aadhar[0];
    //for(int i=0; i<5; i++) {
        //printf("%d index :", i);
        //scanf("%d", (ptr+i));
         //scanf("%d", &aadhar[i]);
    //} 

    //output
    //for(int i=0; i<5; i++){
        //printf("%d index = %d\n", i, *(ptr+i));
    //printf("%d index = %d\n", i, aadhar[i]);
    //return 0;
//}

//printing numbers using array
//[void printNumbers(int arr[], int n);
//int main(){
    //int arr[] ={1,2,3,4,5,6};
    //printNumbers(arr, 6);
    //return 0;
//} 
//void printNumbers(int arr[],int n){
    //for(int i=0; i<n; i++){
        //printf("%d \t", arr[i]);
    //}
    //printf("\n");

//}]


int countOdd(int arr[], int n);
int main(){
    int arr[] = {1,2,3,4,5,6};
    printf("%d", countOdd(arr,6));
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }

return count;
}
