#include <iostream>
using namespace std;

int
main ()
{
 
  //lowercase to uppercase
  char L, U;
  int ascii;
 
 
  cin >> L;
  if (L >= 'a' && L <= 'z')
	{
  	ascii = L;
  	ascii = ascii - 32;
  	U = ascii;
  	cout << L << " in uppercase: " << U;
  	
	}
 return 0;
}


































































































