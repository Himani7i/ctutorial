#include <iostream>
using namespace std;
 
int main(){
//     // int a = 10;
//     // int *aptr = &a;
//     // aptr = &a;
//     // cout<<*aptr<<endl;
//     // cout<<aptr<<endl;
//     // aptr++;
//     // cout<< aptr <<endl;
//     // *aptr = 20;
//     // cout<< *aptr <<endl;
//     // cout<< *(&aptr); // value at the address of aptr
//     // cout<< a <<endl;


//     // int a = 10;    // at 2000
//     // int *p;        // will point at the value which is stored in address of a 10
//     // p = &a;       //stores address of a 2000
//     // cout<<*p<<endl;       //10
//     // int **q = &p;        // p is stored at 4000
//     // cout<<*q<<endl;     //will point at the value which is stored in address of p 2000
//     // cout<<**q<<endl;   //will point at the value which is stored in address a  10
//     // cout<<*(&p)<<endl; 
//     // cout<<a<<endl;
//     // cout<<p<<endl;
//     // cout<<q<<endl;
    
    

//     //arrayy with pointerss
//     int arr[]={10,20,30,40,50,60,70,80,90,100};
//     for(int i=0;i<10;i++){
//     cout<<*(arr+i)<<endl;// value at ith element
//     }
//     for(int i=0;i<10;i++){
//     cout<<arr+i<<endl;//adrress of ith element
//     }

//     //or 

//     // int *ptr = arr;
//     // for(int i=0; i<3;i++){
//     //     cout<<*ptr<<endl;
//     //     ptr++; here arr++ is illegal
//     //}
    

// return 0;
// }




//     //passing pointers to function 
    //pass by referencee:
void swap(int *a, int *b){// passes pointers
    int temp = *a;
    *a=*b;
    *b=temp;

}
int main(){
    int a=2;
    int b=4;
    int*aptr=&a;
    int *bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}

void increament(int *a){// passing pointer a
    (*a)++;//increamenting value at a
}
int main(){
     int a=2;
    int *aptr=&a;
    cout<<aptr<<endl;
    increament(aptr);//aptr=&a passing address to the function
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
}
}