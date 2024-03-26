// C++ program to understand difference between 
// pointer to an integer and pointer to an
// array of integers. 
#include <iostream>
using namespace std;
int main()
{
	// Pointer to an integer
	int *p; 
	
	// Pointer to an array of 5 integers
	int (*ptr)[5]; 
	int arr[5];
	
	// Points to 0th element of the arr.
	p = arr;
	
	// Points to the whole array arr.
	ptr = &arr; 
	
	cout << "p =" << p <<", ptr = "<< ptr<< endl;
	p++; 
	ptr++;
	cout << "p =" << p <<", ptr = "<< ptr<< endl;
	
	return 0;
}

// This code is contributed by SHUBHAMSINGH10


// C++ program to illustrate sizes of
// pointer of array
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 3, 5, 6, 7, 9 };
	int *p = arr;
	int (*ptr)[5] = &arr;//Declares a pointer to an array ptr and assigns it the address of the entire array arr.
    //mtlb ptr ek array hai jisme arr naam ke array ka address store kiya hai

	
	cout << "p = "<< p <<", ptr = " << ptr << endl;
	cout << "*p = "<< *p <<", *ptr = " << *ptr << endl;
	
	cout << "sizeof(p) = "<< sizeof(p) <<
			", sizeof(*p) = " << sizeof(*p) << endl;
	cout << "sizeof(ptr) = "<< sizeof(ptr) <<
		", sizeof(*ptr) = " << sizeof(*ptr) << endl;
	return 0;
}

// This code is contributed by shubhamsingh10
//p = 0x7ffde1ee5010, ptr = 0x7ffde1ee5010
// *p = 3, *ptr = 0x7ffde1ee5010
// sizeof(p) = 8, sizeof(*p) = 4
// sizeof(ptr) = 8, sizeof(*ptr) = 20

// C++ program to print elements of a 2-D array 
// by scripting a pointer to an array 
#include <iostream>
using namespace std;

int main()
{
int arr[3][4] = { 
					{10, 11, 12, 13}, 
					{20, 21, 22, 23}, 
					{30, 31, 32, 33} 
				};
int (*ptr)[4];
ptr = arr;
cout << ptr<< " "<< ptr + 1<< " "<< ptr + 2 << endl;
cout << *ptr<< " "<< *(ptr + 1)<< " "<< *(ptr + 2)<< endl;
cout << **ptr<< " "<< *(*(ptr + 1) + 2)<< " "<< *(*(ptr + 2) + 3)<< endl;
cout << ptr[0][0]<< " "<< ptr[1][2]<< " "<< ptr[2][3]<< endl;
return 0;
}

Output:  

0x7ffead967560 0x7ffead967570 0x7ffead967580
0x7ffead967560 0x7ffead967570 0x7ffead967580
10 22 33
10 22 33

// A C++ program to show that we use template and 
// reference to find size of integer array parameter 
#include <iostream> 
using namespace std; 

template <size_t n> 
void findSize(int (&arr)[n]) 
{ 
	cout << sizeof(int) * n << endl; 
} 

int main() 
{ 
	int a[10]; 
	cout << sizeof(a) << " "; 
	findSize(a); 
	return 0; 
} 

