// #include <iostream>
// using namespace std;
// int main(){

    
//     for(int i=1; i<=6; i++){
//         for(int j=1; j<=7;j++){
//         if(i==1 && (j==1|| j==2 || j==3 || j==5 ||j==6 ||j==7)){
//             cout<<" * "<<"\n";
//         }
//         else if(i==2 &&(j==1 || j==5 || j==7))
//         {cout<<" * "<<"\n";}
//         else if(i==3 || i==4 && (j==1 || j==7))
//         {cout<<" * "<<"\n";}
//          else if(i==5 && (j==2 || j==6))
//         {cout<<" * "<<"\n";}
//         else if(i==6 && (j==3 || j==4 || j==5))
//         {cout<<" * "<<"\n";}
//         else{cout<<" "<<"\n";}    
//     }
// }
// return 0;
// }

#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    //clrscr();
    
    for (int i = 0; i < 6; ++i)
     {
for (int j = 0; j < 7; ++j)
 {
            if ((i == 0 && (j == 3 || (j >= 1 && j <= 5))) ||
                (i == 1 && ((j == 2 && j == 4) || (j >= 1 && j <= 5))) ||
                ((i == 2 || i == 3) && (j == 1 || j == 5)) ||
                (i == 4 && (j == 2 || j == 4)) ||
                (i == 5 && j == 3)) {
                cout << "   *";
            } 
else
    {
            cout << "   ";
            }
        }
cout <<endl;
    }

    return 0;
}