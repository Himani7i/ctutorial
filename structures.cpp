#include <iostraem>
using namespace std;

struct student
{
    int id;
    char name;
    float marks;
};

int main(){
    struct himani;
        himani.id = 32;
        himani.name = 'himanichoudhary';
        himani.marks = 20; 
cout<< himani.id<< himani.name<< himani.marks<<endl;

    
    return 0; 
}


// type def ep wala shortcut
typedef struct student
{
    int id;
    char name;
    float marks;
}ep;
int main(){
        ep himani;// jisko mai pehle struct himani bolri thi use ab mai ep bol rhi hu
        himani.id = 32;
        himani.name = 'himanichoudhary';
        himani.marks = 20; 
cout<< himani.id<< himani.name<< himani.marks<<endl;

    
    return 0; 
}


union money//for better memory management,isme memory hsare krte hai to store data i.e. from various datavalues you can use only 1
{
    int rice;
    char favchar;
    float pounds ;
}

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice;
    //or(koi ek hi output le sakte ho not both rice and car)
    cout<<m1.car;
}

// C++ program to illustrate the use
// of the unions
#include <iostream>
using namespace std;

// Defining a Union
union GFG {
	int Geek1;
	char Geek2;
	float Geek3;
};

// Driver Code
int main()
{
	// Initializing Union
	union GFG G1;

	G1.Geek1 = 34;

	// Printing values
	cout << "The first value at "
		<< "the allocated memory : " << G1.Geek1 << endl;

	G1.Geek2 = 'G';

	cout << "The next value stored "
		<< "after removing the "
		<< "previous value : " << G1.Geek2 << endl;

	G1.Geek3 = 34.34;

	cout << "The Final value value "
		<< "at the same allocated "
		<< "memory space : " << G1.Geek3 << endl;
	return 0;
}

Output
The first value at the allocated memory : 34
The next value stored after removing the previous value : G
The Final value value at the same allocated memory space : 34.34


int main()
{
enum Meal{breakfast,lunch,dinner};//assigns bullets to the elements of the list
//also Meal m1 type ka ek datatype ban jata hai and aap usme list ke un elements ko store kr skte ho
Meal m1 = lunch;
cout<<m1;
cout<<(m1==1);
cout<<breakfast;
cout<<lunch;
cout<<dinner;
}