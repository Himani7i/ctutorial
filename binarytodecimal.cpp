// #include <iostream>
// using namespace std;
// int binarytodecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans += x*y;
//         x *= 2;
//         n /= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<binarytodecimal(n)<<endl;

//}

// #include <iostream>
// using namespace std;
// int octaltodecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans += x*y;
//         x *= 8;
//         n /= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<octaltodecimal(n)<<endl;
// }


// #include <bits/stdc++.h> // it includes alll of the header filess we want to useeee
// using namespace std;
// int hexadecimaltodecimal(string n){
//     int ans = 0;
//     int x = 1;
//     int s = n.size();
//     for (int i=s-1; i>=0; i--){
//         if(n[i] >= '0' && n[i] <= '9' )
//         {
//             ans += x*(n[i]-'0');
//         }
//         else if(n[i] >= 'A' && n[i] <= 'F'){
//             ans += x*(n[i] - 'A' + 10);
//         }
//         x *= 16;
//     }
//     return ans;
// }


// int main(){
//     string n;
//     cin>>n;
//     cout<<hexadecimaltodecimal(n)<<endl;
// }

// #include <bits/stdc++.h> // it includes alll of the header filess we want to useeee
// using namespace std;
// int decimaltobinary(int n){
//     int ans = 0;
//     int x = 1;
//     while(x <= n)
//     x*=2;
//     x/=2;
     
//      while(x>0){
//         int lastDigit= n/x; 
//         n -= lastDigit*x;
//         x/=2;
//         ans = ans*10 + lastDigit;
//      }
//      return ans;

// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<decimaltobinary(n)<<endl;
// }


// #include <bits/stdc++.h> // it includes alll of the header filess we want to useeee
// using namespace std;
// int decimaltobinary(int n){
//     int ans = 0;
//     int x = 1;
//     while(x <= n)
//     x*=8;
//     x/=8;
     
//      while(x>0){
//         int lastDigit= n/x; 
//         n -= lastDigit*x;
//         x/=8;
//         ans = ans*10 + lastDigit;
//      }
//      return ans;

// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<decimaltobinary(n)<<endl;
// }

#include <bits/stdc++.h>
using namespace std;
string decimaltohexadecimal(int n){

    int x = 1;
    string ans = "";
    while(x <= n){
    x*= 16;
    x /= 16;
    }

    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 16;

        if(lastdigit <= 9)
        ans = ans + to_string(lastdigit);
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
        return ans;
    }
    

int main() 
{
    int n;
    cin >> n;
    cout << decimaltohexadecimal(n)<< endl;
}

