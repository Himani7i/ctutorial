#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <algorithm>
#include <string>

#include<iostream> 
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//ORRRRRRRRRRRRRRRRR
int main(){
      string str1 = "iloveyou";
     string str = "ILOVEYOU";
    //convert into uppercase
    for(int i = 0; i<str1.length(); i++){
        if(str1[i]>='a' && str1[i]<='z')
        str1[i] -= 32;
    }
    cout<<str;

    //convert to lowercase
    for(int i = 0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i] += 32;
    cout<<str<<endl;
    }


//OR


string s = "iloveyou";
string s2 = "ILOVEYOU";
transform(s.begin(), s.end(), s.begin(), ::toupper);
cout<< s << endl;
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
cout<< s << endl;

//to sort numbersss
string s3 = "732746344398203743987539234832957";
sort(s3.begin(), s3.end(),greater<int>());
cout<<s3<<endl;
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}



char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    

    return 'a'+ans;

}
//ORRRRRRRRRRRRRR
//to output the character which appears max no. of times
int main(){
string s="djgfjguhilhiuyiutdtrdsxhcvh";
int freq[26];
for(int i=0; i<26; i++){
    freq[i] = 0;
}
    for(int i =0; i<s.size();i++){
        freq[s[i]-'a']++;
}
char ans = 'a';
int maxF =0;
for(int i =0; i<26;i++){
    if(freq[i]>maxF){
        maxF = freq[i];
        ans = i+'a';
    }
}
cout<<maxF<<" "<<ans<<endl;
return 0;
}



int main( ) {

    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;

    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;

    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;

    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;
    

   string s;
   cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}










//meraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
 int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    getline(cin, str);
    cout<<str<<endl;
    string s1 ="fam";
    string s2 ="ily";
    s1.append(s2);

    cout<<s1<<endl;
    or
    s1=s1+s2;
    cout<<s1<<endl;

    accessing an element of string
  string is like a character array
    cout<<s1[2]<<endl; 




    //clearing screen which has string
    string abc ="shjudheufgyeuyw jewkdhewiufgreilqwf";
      cout<<abc<<endl;
    abc.clear();
    cout<<abc;

    //emptying the string
    if(abc.empty()){
      cout<<"string is ampty";}


    to erase elements from the string
    string s1 = "sexsuxzzz";
    s1.erase(3,3);// 3 se shuru karna hai aur 3 chars delete karne hai
    cout<<s1<<endl;

    //to find elements
    string s1 = "sexsuxxzzz";
    cout<<s1.find("xz")<<endl;

    //to insert element
    string s1 = "lol";
    s1.insert(2."lol");
    cout<<s1<<endl;    
    

//     toappendstringsCONCATINATION!!!!!!!!!!!!!!!!!!!!!!!!
//     SYNTAX
//     tring& string::append (const string& str);
//     Here,
//     str: String to be appended.
//     C++ Program for string
// concatenation using append
#include <iostream>
using namespace std;

// Driver code
int main()
{
	string init("this is init");
	string add(" added now");

	// Appending the string.
	init.append(add);

	cout << init << endl;
	return 0;
}


// concatenation by using +
// C++ Program for string
// concatenation using '+' operator
#include <iostream>
using namespace std;

// Driver code
int main()
{
	string init("this is init");
	string add(" added now");

	// Appending the string.
	init = init + add;

	cout << init << endl;
	return 0;
}


    
    //for length
    string s1 ="sunshine";
    cout<<s1.size()<<endl;
    //or
    cout<<s1.length()<<endl;
    //or
    for(int i=0; i<s1.length(); i++)
    cout<<s1[i]<<endl;
    string s = s1,substr(6,4);
    cout<<s<<endl;

    

    //string to integer
    string s1 = "786";
    int x = stoi(s1);
    cout<<x+2<<endl;
    //integer to string
    int x = 786;
    cout<< to_string(x) + "2"<<endl;

    comparing strings
    if(s2.compare(s1)==0){
        cout<<"strings are equal"<<endl;
    }
    else{cout<<s2.compare(s1)<<endl;}

    to sort a string
    string s1 = "xsmmnkjhsduhewufhksh";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;

    // return 0;

   
 }